#include "ui_word_login_window.h"
#include "something_in_need.h"
word_login_window::word_login_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_login_window)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    connect(ui->but_back,&QPushButton::clicked,this,&word_login_window::backTostart);//返回按钮绑定
    connect(ui->but_login,&QPushButton::clicked,this,&word_login_window::getAccountAndPasswordAndLogin);//登入按钮绑定
    ui->but_login->setShortcut(Qt::Key_Return);
}

word_login_window::~word_login_window()
{
    delete ui;
}
void word_login_window::backTostart(){
    qDebug()<<"返回";
    Word_start_window *w = new Word_start_window();
    w->show();
    this->hide();
    this->close();
}
void word_login_window::getAccountAndPasswordAndLogin(){
    QString account,password;
    account = ui->lineEdit_account->text();
    password = ui->lineEdit_password->text();
    qDebug()<<"登入的账号为："<<account;
    qDebug()<<"登入的密码为："<<password;
    bool check = false;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString tmp1(query.value(0).toString());
        QString tmp2(query.value(1).toString());
        if(tmp1==account&&tmp2==password){
           Global::getinstance()->setUser_account(tmp1);//设置全局账户
            qDebug()<<"User_account = "<<Global::getinstance()->getUser_account();
            check = true;
            break;
        }
    }
    if(check){
        qDebug()<<"登入成功！";
        QMessageBox::information(NULL, "成功", "登入成功！", QMessageBox::Ok);
        Word_Main_meun *w = new Word_Main_meun;
        w->show();
        this->hide();
        this->close();
    }else{
        QMessageBox::critical(NULL, "错误", "账号或密码错误，请重新输入", QMessageBox::Cancel);
        ui->lineEdit_account->clear();
        ui->lineEdit_password->clear();
    }
}
void word_login_window::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
