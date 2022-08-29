#include "ui_word_start_window.h"
#include "something_in_need.h"
Word_start_window::Word_start_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Word_start_window)
{
    ui->setupUi(this);
    //this->setFixedSize(600,400);
    this->setWindowIcon(QIcon("://tubiao.png"));
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    connect(ui->but_login,&QPushButton::clicked,this,&Word_start_window::to_login);//登入按钮绑定
    connect(ui->but_register,&QPushButton::clicked,this,&Word_start_window::to_register);//注册按钮绑定
    connect(ui->but_lookup,&QPushButton::clicked,this,&Word_start_window::to_lookup);//查单词按钮绑定
    connect(ui->but_quit,&QPushButton::clicked,this,&Word_start_window::close);//退出按钮绑定
    connect(ui->but_admin,&QPushButton::clicked,this,&Word_start_window::to_admin);
}
Word_start_window::~Word_start_window()
{
    delete ui;
}
void Word_start_window::to_login(){
    qDebug()<<"登入";
    word_login_window *w = new word_login_window();
    w->show();
    this->hide();
    this->close();
}
void Word_start_window::to_register(){
    qDebug()<<"注册";
    word_register_window *w = new word_register_window();
    w->show();
    this->hide();
    this->close();
}
void Word_start_window::to_lookup(){
    Widget *w = new Widget();
    w->show();
    this->hide();
    this->close();
}
void Word_start_window::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void Word_start_window::to_admin(){
    word_admin *w = new word_admin();
    w->show();
    this->hide();
    this->close();
}

