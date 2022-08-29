#include "ui_word_choose.h"
#include "something_in_need.h"
word_choose::word_choose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_choose)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_from_4,&QPushButton::clicked,this,&word_choose::setWords_4);//绑定设置4级
    connect(ui->but_from_6,&QPushButton::clicked,this,&word_choose::setWords_6);//绑定设置6级
    connect(ui->but_from_high,&QPushButton::clicked,this,&word_choose::setWords_2);//绑定设置高中
    connect(ui->but_back,&QPushButton::clicked,this,&word_choose::back);//绑定返回按钮
}

word_choose::~word_choose()
{
    delete ui;
}
void word_choose::setWords(int x){
   Global::getinstance()->setWord_kind(x);
    qDebug()<<"kind = "<<Global::getinstance()->getTrain_kind()<<" "<<"word_kind = "<<Global::getinstance()->getWord_kind();
    if(Global::getinstance()->getTrain_kind() == 1){
        word_choose_training *w = new word_choose_training();
        w->setTime=this->setTime;
        w->show_time=w->setTime*1.0;
        w->screen_show(1);
        w->show();
    }else{
        word_spell_training *w = new word_spell_training();
        w->toNext();
        w->show();
    }
    this->hide();
    this->close();
}
void word_choose::back(){
    word_training_leve *w = new word_training_leve();
    w->show();
    this->hide();
    this->close();
}
void word_choose::setWords_6(){
    setWords(6);
}
void word_choose::setWords_4(){
    setWords(4);
}
void word_choose::setWords_2(){
    setWords(2);
}
void word_choose::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
