#ifndef SOMETHING_IN_NEED_H
#define SOMETHING_IN_NEED_H
#include<synchapi.h>
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
#include <QStandardItemModel>
#include"getrand.h"
#include"myinf.h"
#include"qtsql.h"
#include"word_choose.h"
#include"word_choose_training.h"
#include"word_login_window.h"
#include"word_main_meun.h"
#include"word_register_window.h"
#include"word_spell_training.h"
#include"word_start_window.h"
#include"word_summary.h"
#include"word_test.h"
#include"word_test.h"
#include"word_training_kind.h"
#include"word_training_leve.h"
#include"word_words_book.h"
#include"word_admin.h"
#include"word_admin_menu.h"
#include"word_password_change.h"
#include"widget.h"
//class Global
//{
//public:
//    Global();
//    QString User_account = "";
//    int word_kind=0;//词库种类
//    int kind=0;//训练种类
//};
//Global *WORD = new Global();
class Global
{
public:
    Global();
    static Global* global;
    static  Global* getinstance();
   void setUser_account(QString n);
   QString getUser_account();

   void setWord_kind(int n);
   int getWord_kind();

   void setTrain_kind(int n);
   int getTrain_kind();

private:
   QString num_account = "";
   int num_word_kind = 0;
   int num_train_kind = 0;
};

#endif // SOMETHING_IN_NEED_H
