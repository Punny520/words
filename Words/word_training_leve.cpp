#include "ui_word_training_leve.h"
#include "something_in_need.h"
word_training_leve::word_training_leve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_training_leve)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_esay,&QPushButton::clicked,this,&word_training_leve::clicked_easy);//简单：6s
    connect(ui->but_mid,&QPushButton::clicked,this,&word_training_leve::clicked_mid);//中等：4s
    connect(ui->but_hard,&QPushButton::clicked,this,&word_training_leve::clicked_hard);//困难：2s
    connect(ui->but_back,&QPushButton::clicked,this,&word_training_leve::back);//绑定返回按钮
}

word_training_leve::~word_training_leve()
{
    delete ui;
}
void word_training_leve::toNext(int x){
        word_choose *w = new word_choose();
        w->setTime=x;
        w->show();
        this->hide();
        this->close();
}
void word_training_leve::back(){
    word_training_kind *w = new word_training_kind();
    w->show();
    this->hide();
    this->close();
}

void word_training_leve::clicked_easy(){
    toNext(6);
}
void word_training_leve::clicked_mid(){
    toNext(4);
}
void word_training_leve::clicked_hard(){
    toNext(2);
}
void word_training_leve::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
