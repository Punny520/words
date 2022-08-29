#include "ui_word_main_meun.h"
#include "something_in_need.h"
Word_Main_meun::Word_Main_meun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Word_Main_meun)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_words_training,&QPushButton::clicked,this,&Word_Main_meun::toTrainning);//绑定单词训练按钮
    connect(ui->but_words_test,&QPushButton::clicked,this,&Word_Main_meun::toTest);//绑定单词测试按钮
    connect(ui->but_words_books,&QPushButton::clicked,this,&Word_Main_meun::toBook);
    connect(ui->but_lookup,&QPushButton::clicked,this,&Word_Main_meun::toLookup);
    connect(ui->but_myinf,&QPushButton::clicked,this,&Word_Main_meun::toMyinf);
    connect(ui->but_back_to,&QPushButton::clicked,this,&Word_Main_meun::backToStart);
}

Word_Main_meun::~Word_Main_meun()
{
    delete ui;
}
void Word_Main_meun::toTrainning(){
    word_training_kind *w = new word_training_kind();
    w->show();
    this->hide();
    this->close();
}
void Word_Main_meun::toTest(){
    word_test *w = new word_test();
    w->start();
    w->show();
    this->hide();
    this->close();
}
void Word_Main_meun::toBook(){
    this->close();
    word_words_book *w = new word_words_book();
    w->print();
    w->show();
}
void Word_Main_meun::toLookup(){
    Widget *w = new Widget();
    this->close();
    w->show();
}
void Word_Main_meun::toMyinf(){
    this->close();
    Myinf *w = new Myinf();
    w->Myinf_show();
    w->show();
}
void Word_Main_meun::backToStart(){
    Global::getinstance()->setUser_account("");
    this->close();
    Word_start_window *w = new Word_start_window();
    w->show();
}
void Word_Main_meun::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
