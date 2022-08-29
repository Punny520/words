#include "ui_word_words_book.h"
#include "something_in_need.h"
word_words_book::word_words_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_words_book)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    connect(ui->but_back,&QPushButton::clicked,this,&word_words_book::backToMain);
}

word_words_book::~word_words_book()
{
    delete ui;
}
void word_words_book::print(){
    ui->label->setText(QString("用户%1的单词本：").arg(Global::getinstance()->getUser_account()));
    ui->textBrowser->clear();
    QString sql = QString("select * from book_%1").arg(Global::getinstance()->getUser_account());
    QSqlQuery query(sql);
    while(query.next()){
        QString en(query.value(0).toString());
        QString cn(query.value(1).toString());
        ui->textBrowser->insertPlainText(QString("%1 : %2\n").arg(en).arg(cn));
    }
}
void word_words_book::backToMain(){
    Word_Main_meun *w = new Word_Main_meun();
    w->show();
    this->hide();
    this->close();
}
void word_words_book::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
