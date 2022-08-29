#include "ui_word_training_kind.h"
#include "something_in_need.h"
word_training_kind::word_training_kind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_training_kind)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_back,&QPushButton::clicked,this,&word_training_kind::backTomain);//绑定返回按钮
    connect(ui->but_choose,&QPushButton::clicked,this,&word_training_kind::chooseOrspell_1);//绑定单词选择按钮
    connect(ui->but_spell,&QPushButton::clicked,this,&word_training_kind::chooseOrspell_2);//绑定单词拼写按钮
}

word_training_kind::~word_training_kind()
{
    delete ui;
}
void word_training_kind::backTomain(){
    Word_Main_meun *w = new Word_Main_meun();
    w->show();
    this->hide();
    this->close();
}
void word_training_kind::chooseOrspell(int x){
    Global::getinstance()->setTrain_kind(x);
    qDebug()<<"kind = "<<Global::getinstance()->getTrain_kind();
    if(x == 1){
        word_training_leve *w = new word_training_leve();
        w->show();
    }else{
        word_choose *w = new word_choose();
        w->setTime=0;
        w->show();
    }
    this->hide();
    this->close();
}
void word_training_kind::chooseOrspell_1(){
    chooseOrspell(1);
}
void word_training_kind::chooseOrspell_2(){
    chooseOrspell(2);
}
void word_training_kind::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
