#include "word_password_change.h"
#include "ui_word_password_change.h"
#include"something_in_need.h"
word_password_change::word_password_change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_password_change)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_back,&QPushButton::clicked,this,&word_password_change::back);
    connect(ui->but_ok,&QPushButton::clicked,this,&word_password_change::ok);
}

word_password_change::~word_password_change()
{
    delete ui;
}
void word_password_change::ok(){
    QString password;
    QString password_now = ui->lineEdit_now->text();
    QString password_changed = ui->lineEdit_changed->text();
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString tmp1(query.value(0).toString());
        QString tmp2(query.value(1).toString());
        if(tmp1==Global::getinstance()->getUser_account()){
            password = tmp2;
            break;
        }
    }
    if(password == password_now){
        sql = QString("UPDATE account_list set password = '%1' where account ='%2'").arg(password_changed).arg(Global::getinstance()->getUser_account());
        query.exec(sql);
        QMessageBox::information(NULL, "成功", "密码修改成功！请返回登入", QMessageBox::Ok);
        Word_start_window *w = new Word_start_window();
        this->hide();
        w->show();
        this->close();
    }else{
        QMessageBox::critical(NULL, "错误", "密码修改失败请重试！", QMessageBox::Cancel);
    }
}
void word_password_change::back(){
    Word_Main_meun *w = new Word_Main_meun();
    this->hide();
    w->show();
    this->close();
}
void word_password_change::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
