#include "ui_word_choose_training.h"
#include "something_in_need.h"
word_choose_training::word_choose_training(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_choose_training)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    Get_rand(sum,40,1,4449);
    myTimer = new QTimer(this);
    connect(myTimer,&QTimer::timeout,this,&word_choose_training::process);
    connect(ui->but_A,&QPushButton::clicked,this,&word_choose_training::but_clickedA);
    connect(ui->but_B,&QPushButton::clicked,this,&word_choose_training::but_clickedB);
    connect(ui->but_C,&QPushButton::clicked,this,&word_choose_training::but_clickedC);
    connect(ui->but_D,&QPushButton::clicked,this,&word_choose_training::but_clickedD);
//    for(int i=1;i<=40;i++){
//        qDebug()<<sum[i];
//    }
}

word_choose_training::~word_choose_training()
{
    delete ui;
}
void word_choose_training::process(){
    this->prog_num--;

    this->show_time-=(double)(this->setTime*1.0)/(100.0);

    ui->label_time->setText(QString::number(this->show_time,'f',2));

    ui->progressBar->setValue(this->prog_num);

    qDebug()<<this->prog_num;

    if(!this->prog_num){
        toNext(5);
    }
}

void word_choose_training::toNext(int choose){
    this->pro_num++;
    this->prog_num = 100;
    if(choose == this->ans[1]){
        this->correct_count++;
        qDebug()<<"正确";
    }else{
        QSqlQuery query;
        QString sql = QString("insert into book_%1(en,cn) values('%2','%3');").arg(Global::getinstance()->getUser_account()).arg(this->en5).arg(this->cn5);
        query.exec(sql);
        qDebug()<<"错误,已加入单词本";
    }
    if(this->pro_num<=10){
        this->screen_show(this->pro_num);
    }else{//总结
        myTimer->stop();
        qDebug()<<"OVER";
        word_summary *w = new word_summary();
        w->setTime = this->setTime;
        w->correct_count = this->correct_count;
        w->text_show();
        w->show();
        this->hide();
        this->close();
    }
}
void word_choose_training::but_clickedA(){
    toNext(1);
}
void word_choose_training::but_clickedB(){
    toNext(2);
}
void word_choose_training::but_clickedC(){
    toNext(3);
}
void word_choose_training::but_clickedD(){
    toNext(4);
}
void word_choose_training::screen_show(int num){//ans[1]决定答案和选择模式
    ui->label_jd->setText(QString("%1/10").arg(QString::number(this->pro_num)));
    myTimer->start(this->setTime*10);

    ui->progressBar->setValue(100);

    this->show_time=(double)(this->setTime)*1.0;

    QString now_time = QString::number(this->show_time,'f',2);

    //qDebug()<<now_time;

    ui->label_time->setText(now_time);

    Get_rand(this->ans,4,1,4);

    qDebug()<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4];

    int bit1=4*num-3,bit2=4*num-2,bit3=4*num-1,bit4=4*num;

    qDebug()<<bit1<<" "<<bit2<<" "<<bit3<<" "<<bit4;
    
    QString id1,en1,yb1,cn1;
    QString id2,en2,yb2,cn2;
    QString id3,en3,yb3,cn3;
    QString id4,en4,yb4,cn4;

    id1 = QString::number(this->sum[bit1]);
    QString sql1 = QString("select *from word_4 where id ='%1'").arg(id1);
    QSqlQuery query1(sql1);
    query1.next();
        en1 = query1.value(1).toString();
        yb1 = query1.value(2).toString();
        cn1 = query1.value(3).toString();
    
    id2 = QString::number(this->sum[bit2]);
    QString sql2 = QString("select *from word_4 where id ='%1'").arg(id2);
    QSqlQuery query2(sql2);
    query2.first();
        en2 = query2.value(1).toString();
        yb2 = query2.value(2).toString();
        cn2 = query2.value(3).toString();

    id3 = QString::number(this->sum[bit3]);
    QString sql3 = QString("select *from word_4 where id ='%1'").arg(id3);
    QSqlQuery query3(sql3);
    query3.first();
        en3 = query3.value(1).toString();
        yb3 = query3.value(2).toString();
        cn3 = query3.value(3).toString();
    
    id4 = QString::number(this->sum[bit4]);
    QString sql4 = QString("select *from word_4 where id ='%1'").arg(id4);
    QSqlQuery query4(sql4);
    query4.first();
        en4 = query4.value(1).toString();
        yb4 = query4.value(2).toString();
        cn4 = query4.value(3).toString();
    
    cn1 = format_CN(cn1);
    cn2 = format_CN(cn2);
    cn3 = format_CN(cn3);
    cn4 = format_CN(cn4);

    qDebug()<<"id_1:"<<id1<<" "<<"en1:"<<en1<<" "<<"cn1:"<<cn1;
    qDebug()<<"id_2:"<<id2<<" "<<"en2:"<<en2<<" "<<"cn2:"<<cn2;
    qDebug()<<"id_3:"<<id3<<" "<<"en3:"<<en3<<" "<<"cn3:"<<cn3;
    qDebug()<<"id_4:"<<id4<<" "<<"en4:"<<en4<<" "<<"cn4:"<<cn4;

    if(ans[1]%2==1){//英选中
        ui->but_A->setText(cn1);
        ui->but_B->setText(cn2);
        ui->but_C->setText(cn3);
        ui->but_D->setText(cn4);
        if(ans[1]==1){
            ui->label->setText(en1);
            this->en5 = en1;
            this->cn5 = cn1;
        }
        if(ans[1]==3){
            ui->label->setText(en3);
            this->en5 = en3;
            this->cn5 = cn3;
        }
    }else{//中选英
        ui->but_A->setText(en1);
        ui->but_B->setText(en2);
        ui->but_C->setText(en3);
        ui->but_D->setText(en4);
        if(ans[1]==2){
            ui->label->setText(cn2);
            this->en5 = en2;
            this->cn5 = cn2;
        }
        if(ans[1]==4){
            ui->label->setText(cn4);
            this->en5 = en4;
            this->cn5 = cn4;
        }
    }

}

QString format_CN(QString s){
    QStringList list = s.split(".", QString::SkipEmptyParts);
    s = list.at(1);
    list = s.split(" ", QString::SkipEmptyParts);
    int num = list.size();
    int i = 0;
    while(i<num){
        bool b = list.at(i).contains(QRegExp("[\\x4e00-\\x9fa5]+"));
        if(b) return list.at(i);
        else i++;
    }
    return "none";
}
void word_choose_training::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
