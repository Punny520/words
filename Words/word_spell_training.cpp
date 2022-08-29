#include "ui_word_spell_training.h"
#include "something_in_need.h"
word_spell_training::word_spell_training(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_spell_training)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    qDebug()<<"built";
    Get_rand(this->problemID,10,1,4449);
    connect(ui->but_next,&QPushButton::clicked,this,&word_spell_training::check);
}

word_spell_training::~word_spell_training()
{
    delete ui;
}
void word_spell_training::toNext(){
    qDebug()<<"toNext";
    ui->lineEdit->clear();
    this->pro_num++;
    ui->label_jd->setText(QString("%1/10").arg(QString::number(this->pro_num)));
    if(this->pro_num == 10){
        ui->but_next->setText("完成");
    }
    if(this->pro_num<=10){
        QString id,en,yb,cn;
        id = QString::number(this->problemID[this->pro_num]);
        QString sql = QString("select *from word_4 where id ='%1'").arg(id);
        QSqlQuery query(sql);
        query.next();
            en = query.value(1).toString();
            yb = query.value(2).toString();
            cn = query.value(3).toString();
            ui->label_cn->setText(cn);
            this->ans = en;
            this->cn5 = cn;
            qDebug()<<"ans="<<this->ans;
            en = seten(en);
            ui->label_cn->setText(cn);
            ui->label_en->setText(en);
    }else{
        word_summary *w = new word_summary();
        w->correct_count = this->correct_count;
        w->text_show();
        w->show();
        this->hide();
        this->close();
    }
}
QString word_spell_training::seten(QString s){
    int tmp[30],fir;
    int len = s.length();
    Get_rand(tmp,1,1,len-1);
    //qDebug()<<"tmp[1]= "<<tmp[1];
    fir=tmp[1];
    Get_rand(tmp,tmp[1],0,len-1);
    for(int i=1;i<=fir;i++){
        s[tmp[i]] = '_';
        //qDebug()<<tmp[i];
    }

    len+=len-1;
    for(int i=1;i<len;i+=2){
         s.insert(i,' ');
    }

    return s;
}
void word_spell_training::check(){
    QString given_ans;
    given_ans=ui->lineEdit->text();
    if(given_ans.compare(this->ans)==0){
        this->correct_count++;
    }else{
        QSqlQuery query;
        QString sql = QString("insert into book_%1(en,cn) values('%2','%3');").arg(Global::getinstance()->getUser_account()).arg(this->ans).arg(this->cn5);
        query.exec(sql);
        qDebug()<<"错误，已添加至单词本";
    }
    toNext();
}
void word_spell_training::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
