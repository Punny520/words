#include "ui_myinf.h"
#include "something_in_need.h"
Myinf::Myinf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Myinf)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_back,&QPushButton::clicked,this,&Myinf::back);
    connect(ui->but_change,&QPushButton::clicked,this,&Myinf::to_change);
}

Myinf::~Myinf()
{
    delete ui;
}
void Myinf::back(){
    Word_Main_meun *w = new Word_Main_meun();
    w->show();
    this->hide();
    this->close();
}
void Myinf::Myinf_show(){
    int in_test,points;
    QString ch;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString tmp(query.value(0).toString());
        if(tmp==Global::getinstance()->getUser_account()){
            in_test = query.value(3).toInt();
            points = query.value(2).toInt();
            break;
        }
    }
    ui->label_id->setText(QString("我的账号:%1").arg(Global::getinstance()->getUser_account()));
    ui->label_jf->setText(QString("我获得的积分：%1分").arg(points));
    ui->label_gk->setText(QString("单词测试关卡已通过：%1关").arg(in_test-1));
    if(in_test<=5){
        ch = QString("单词菜鸟");
    }else if(in_test>5&&in_test<=10){
        ch = QString("单词高手");
    }else ch = QString("单词大师");
    ui->label->setText(QString("我的单词段位：‘%1’").arg(ch));
}
void Myinf::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void Myinf::to_change(){
    word_password_change *w = new word_password_change();
    this->hide();
    w->show();
    this->close();
}
