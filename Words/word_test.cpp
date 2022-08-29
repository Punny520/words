#include "ui_word_test.h"
#include "something_in_need.h"
word_test::word_test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_test)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_next,&QPushButton::clicked,this,&word_test::check);
}

word_test::~word_test()
{
    delete ui;
}
void word_test::start(){
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString tmp1(query.value(0).toString());
        if(tmp1==Global::getinstance()->getUser_account()){
            this->in_test = query.value(3).toInt();
            break;
        }
    }
    qDebug()<<"in_test"<<this->in_test;
    this->pro_num = 0;
    test_begin();
}
void word_test::test_begin(){
    this->pro_num++;
    if(this->pro_num==this->in_test*4){
        ui->but_next->setText("完成");
    }
    if(this->pro_num>this->in_test*4){
        test_summary();
    }
    QTime randtime;
    randtime = QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*1000);
    QString id,en,yb,cn;
    id = QString::number(qrand()%4000+1);
    QString sql = QString("select *from word_4 where id ='%1'").arg(id);
    QSqlQuery query(sql);
    query.next();
        en = query.value(1).toString();
        yb = query.value(2).toString();
        cn = query.value(3).toString();
        ui->label_pro->setText(cn);
        qDebug()<<en;
        this->pro_en = en;
        QString jd = QString("第%1关 进度：%2/%3").arg(QString::number(this->in_test)).arg(QString::number(this->pro_num)).arg(QString::number(this->in_test*4));
        ui->label_jd->setText(jd);
}
void word_test::check(){
    QString given_ans = ui->lineEdit->text();
    ui->lineEdit->clear();
    if(given_ans.compare(this->pro_en)==0) this->correct_count++;
    test_begin();
}
void word_test::test_summary(){
    if(this->correct_count >= this->in_test*2){
        QString sql1 = QString("UPDATE account_list set points=points+in_test where account ='%1'").arg(Global::getinstance()->getUser_account());
        QSqlQuery query1(sql1);
        QString sql = QString("UPDATE account_list set in_test=in_test+1 where account ='%1'").arg(Global::getinstance()->getUser_account());
        QSqlQuery query(sql);
        QMessageBox::StandardButton result=QMessageBox::question(NULL, "通关！","是否进入下一关？");
        if(result == QMessageBox::Yes){
            start();
        }else{
            Word_Main_meun *w = new Word_Main_meun();
            w->show();
            this->hide();
            this->close();
        }
    }else{
        QMessageBox::StandardButton result=QMessageBox::question(NULL, "通关失败！","是否重新开始？");
        if(result == QMessageBox::Yes){
            start();
        }else{
            Word_Main_meun *w = new Word_Main_meun();
            w->show();
            this->hide();
            this->close();
        }
    }
}
void word_test::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
