#include "word_admin_menu.h"
#include "ui_word_admin_menu.h"
#include"something_in_need.h"
word_admin_menu::word_admin_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::word_admin_menu)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("://tubiao.png"));
    list_show();
    connect(ui->but_account,&QPushButton::clicked,this,&word_admin_menu::lookup_account);
    connect(ui->but_back,&QPushButton::clicked,this,&word_admin_menu::back);
    connect(ui->but_del,&QPushButton::clicked,this,&word_admin_menu::del);
    connect(ui->but_jf,&QPushButton::clicked,this,&word_admin_menu::lookup_jf);
    connect(ui->but_test,&QPushButton::clicked,this,&word_admin_menu::lookup_test);
    connect(ui->but_repaint,&QPushButton::clicked,this,&word_admin_menu::list_show);
}

word_admin_menu::~word_admin_menu()
{
    delete ui;
}
void word_admin_menu::paintEvent(QPaintEvent *){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
void word_admin_menu::list_show(){
    ui->textBrowser->clear();
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString account(query.value(0).toString());
        QString points(query.value(2).toString());
        QString in_test(query.value(3).toString());
        ui->textBrowser->insertPlainText(QString("账号:%1 积分:%2分 测试通过关卡:%3关\n").arg(filb(account,12)).arg(points).arg(in_test));
    }
}
void word_admin_menu::lookup_account(){
    ui->textBrowser->clear();
    bool issucc = false;
    QString text = ui->lineEdit_account->text();
    qDebug()<<text;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString account(query.value(0).toString());
        QString points(query.value(2).toString());
        QString in_test(query.value(3).toString());
        if(account == text){
            ui->textBrowser->insertPlainText(QString("账号:%1 积分:%2分 测试通过关卡:%3关\n").arg(filb(account,15)).arg(points).arg(in_test));
            issucc = true;
            break;
        }
    }
    if(issucc == false){
        ui->textBrowser->insertPlainText(QString("暂无该记录。"));
    }
}
void word_admin_menu::lookup_jf(){
    ui->textBrowser->clear();
    bool issucc = false;
    QString text = ui->lineEdit_jf->text();
    qDebug()<<text;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString account(query.value(0).toString());
        QString points(query.value(2).toString());
        QString in_test(query.value(3).toString());
        if(points == text){
            ui->textBrowser->insertPlainText(QString("账号:%1 积分:%2分 测试通过关卡:%3关\n").arg(filb(account,15)).arg(points).arg(in_test));
            issucc = true;
        }
    }
    if(issucc == false){
        ui->textBrowser->insertPlainText(QString("暂无该记录。"));
    }
}
void word_admin_menu::lookup_test(){
    ui->textBrowser->clear();
    bool issucc = false;
    QString text = ui->lineEdit_test->text();
    qDebug()<<text;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString account(query.value(0).toString());
        QString points(query.value(2).toString());
        QString in_test(query.value(3).toString());
        if(in_test == text){
            ui->textBrowser->insertPlainText(QString("账号:%1 积分:%2分 测试通过关卡:%3关\n").arg(filb(account,15)).arg(points).arg(in_test));
            issucc = true;
        }
    }
    if(issucc == false){
        ui->textBrowser->insertPlainText(QString("暂无该记录。"));
    }
}
void word_admin_menu::del(){
    ui->textBrowser->clear();
    bool issucc = false;
    QString text = ui->lineEdit_accountdel->text();
    qDebug()<<text;
    QString sql = QString("select * from account_list");
    QSqlQuery query(sql);
    while(query.next()){
        QString account(query.value(0).toString());
        if(account == text){
            issucc = true;
            break;
        }
    }
    if(issucc == false){
        QMessageBox::information(NULL, "查询失败", "暂无该记录", QMessageBox::Ok);
    }else{
        QMessageBox::StandardButton result=QMessageBox::question(NULL, "删除账号", QString("是否删除账号：%1的所有记录？").arg(text));
        if(result == QMessageBox::Yes){
            QMessageBox::information(NULL, "成功", "删除成功", QMessageBox::Ok);
            sql = QString("delete from account_list where account = '%1'").arg(text);
            query.exec(sql);
            sql = QString("DROP TABLE book_%1 ;").arg(text);
            query.exec(sql);
        }
    }
    list_show();
}
QString word_admin_menu::filb(QString s,int bit){
    for(int i = s.length();i<bit;i++){
        s+=" ";
    }
    return s;
}
void word_admin_menu::back(){
    Word_start_window *w = new Word_start_window();
    this->hide();
    w->show();
    this->close();
}
