#include "ui_word_register_window.h"
#include "something_in_need.h"
word_register_window::word_register_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_register_window)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->lineEdit_repassword->setEchoMode(QLineEdit::Password);
    connect(ui->but_back,&QPushButton::clicked,this,&word_register_window::backTostart);//绑定返回按钮
    connect(ui->but_register,&QPushButton::clicked,this,&word_register_window::creatAccount);//绑定确定按钮获取输入的账号，密码，重复密码
}

word_register_window::~word_register_window()
{
    delete ui;
}
void word_register_window::backTostart(){
    qDebug()<<"返回";
    Word_start_window *w = new Word_start_window();
    w->show();
    this->hide();
    this->close();
}
void word_register_window::creatAccount(){
    QString account = ui->lineEdit_account->text();
    QString password = ui->lineEdit_password->text();
    QString repassword = ui->lineEdit_repassword->text();
    qDebug()<<"账号:"<<account;
    qDebug()<<"密码:"<<password;
    qDebug()<<"重复密码:"<<repassword;
    checkAndCreate(account,password,repassword,this);
}
void checkAndCreate(QString account,QString password,QString repassword,word_register_window* w){//判断账号密码是否正确并且添加进数据库
    bool fl_account=true;
    bool fl_password=true;

    if(account.length()>10||account.length()<6) fl_account = false;

    for(int i = 0;i < account.length() && fl_account == true;i++){
        if(account.at(i)<'0'||account.at(i)>'9'){
            fl_account = false;
            break;
        }
    }

    if(fl_account == false){
        qDebug()<<"账号必须是由6到10位的数字组成！";
        QMessageBox::critical(NULL, "错误", "账号必须是由6到10位的数字组成！", QMessageBox::Cancel);
        return ;
    }

    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString tmp(query.value(0).toString());
        if(tmp==account){
            fl_account = false;
            break;
        }
    }

    if(fl_account == false){
        qDebug()<<"该账号已存在！";
        QMessageBox::critical(NULL, "错误", "该账号已存在！", QMessageBox::Cancel);
        return ;
    }

    if(password!=repassword){
        qDebug()<<"输入的两次密码不一样！";
        QMessageBox::critical(NULL, "错误", "输入的两次密码不一样！", QMessageBox::Cancel);
        return ;
    }

    if(password.length()<6) fl_password = false;

    for(int i = 0;i < password.length() && fl_password == true;i++){
        if(password.at(i).isDigit()||password.at(i).isLetter()) continue;
        else {
            fl_password = false;
            break;
        }
    }

    if(fl_password == false){
        qDebug()<<"密码必须大于6位并且只能由数字和字母组成！";
        QMessageBox::critical(NULL, "错误", "密码必须大于6位并且只能由数字和字母组成！", QMessageBox::Cancel);
        return ;
    }
    if(fl_password&&fl_account){
        QString in_test = "1",points = "0";
        QMessageBox::information(NULL, "成功", "注册账号成功！请返回登入", QMessageBox::Ok);
        qDebug()<<"注册账号成功！请返回登入";//账号创建成功，添加进数据库
        sql = QString("insert into account_list(account,password,points,in_test) values('%1','%2','%3','%4')").arg(account).arg(password).arg(points).arg(in_test);
        query.exec(sql);
        //qDebug()<<account;

        QString sql1 = QString("create table book_%1(en varchar(255),cn varchar(255));").arg(account);
        query.exec(sql1);
//        qDebug()<<sql1;
//        QString sql1 = QString("Create table %1(en varchar(255), cn varchar(255));").arg(account);
//        query.exec(sql1);

        Word_start_window *w1 = new Word_start_window();
        w1->show();
        w->hide();
        w->close();
        return ;
    }
}
void word_register_window::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
