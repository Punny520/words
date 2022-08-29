#include "word_admin.h"
#include "ui_word_admin.h"
#include "something_in_need.h"
word_admin::word_admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_admin)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    connect(ui->but_back,&QPushButton::clicked,this,&word_admin::back);
    connect(ui->but_login,&QPushButton::clicked,this,&word_admin::login);
}

word_admin::~word_admin()
{
    delete ui;
}
void word_admin::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void word_admin::back(){
    Word_start_window *w = new Word_start_window();
    w->show();
    this->hide();
    this->close();
}
void word_admin::login(){
    QString account,password;
    account = ui->lineEdit_account->text();
    password = ui->lineEdit_password->text();
    if(account == "302867" && password == "302867"){
        QMessageBox::information(NULL, "成功", "登入成功！", QMessageBox::Ok);
        word_admin_menu *w = new word_admin_menu();
        w->show();
        this->hide();
        this->close();
    }else{
        QMessageBox::critical(NULL, "错误", "账号或密码错误，请重新输入", QMessageBox::Cancel);
        ui->lineEdit_account->clear();
        ui->lineEdit_password->clear();
    }
}
