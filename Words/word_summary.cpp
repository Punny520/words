#include "ui_word_summary.h"
#include "something_in_need.h"
word_summary::word_summary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_summary)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_backToMain,&QPushButton::clicked,this,&word_summary::backToMain);//绑定返回按钮
    connect(ui->but_again,&QPushButton::clicked,this,&word_summary::try_again);//绑定再来一次按钮
}

word_summary::~word_summary()
{
    delete ui;
}
void word_summary::text_show(){
    QString zql = QString("正确率: %1%").arg(QString::number(this->correct_count*10));
    ui->label_zql->setText(zql);

    QString pj;
    if(this->correct_count<=4){
        pj = "系统的评价是: 多多练习吧!";
    }else if(this->correct_count>4&&this->correct_count<=7){
        pj = "系统的评价是: 很不错继续保持。";
    }else{
        pj = "系统的评价是: 太厉害了，真棒!";
    }

    ui->label_pj->setText(pj);
}
void word_summary::backToMain(){
    Word_Main_meun *w = new Word_Main_meun();
    w->show();
    this->hide();
    this->close();
}
void word_summary::try_again(){
    qDebug()<<"TRY_AGAIN";
    qDebug()<<"kind = "<<Global::getinstance()->getTrain_kind();
    if(Global::getinstance()->getTrain_kind() == 1){//单词选择训练
        word_choose_training *w = new word_choose_training();
        w->setTime = this->setTime;
        w->show_time = w->setTime*1.0;
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
void word_summary::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
