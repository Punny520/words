/********************************************************************************
** Form generated from reading UI file 'word_login_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_LOGIN_WINDOW_H
#define UI_WORD_LOGIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_word_login_window
{
public:
    QLabel *label_account;
    QLabel *label_password;
    QLineEdit *lineEdit_account;
    QLineEdit *lineEdit_password;
    QPushButton *but_login;
    QPushButton *but_back;

    void setupUi(QWidget *word_login_window)
    {
        if (word_login_window->objectName().isEmpty())
            word_login_window->setObjectName(QStringLiteral("word_login_window"));
        word_login_window->resize(789, 474);
        word_login_window->setStyleSheet(QStringLiteral("#word_login_window{border-image: url(:/Yosemite-Color-Block.png);}"));
        label_account = new QLabel(word_login_window);
        label_account->setObjectName(QStringLiteral("label_account"));
        label_account->setGeometry(QRect(130, 90, 99, 33));
        QFont font;
        font.setPointSize(20);
        label_account->setFont(font);
        label_account->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_password = new QLabel(word_login_window);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(130, 230, 99, 33));
        label_password->setFont(font);
        label_password->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        lineEdit_account = new QLineEdit(word_login_window);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setGeometry(QRect(210, 70, 371, 61));
        lineEdit_account->setFont(font);
        lineEdit_account->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        lineEdit_password = new QLineEdit(word_login_window);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(210, 210, 371, 61));
        lineEdit_password->setFont(font);
        lineEdit_password->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        but_login = new QPushButton(word_login_window);
        but_login->setObjectName(QStringLiteral("but_login"));
        but_login->setGeometry(QRect(40, 350, 161, 51));
        but_login->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #1e5491;\n"
"    background-color: #eec0da;\n"
"    border-color: #567cbe;\n"
"    border-radius: 17px;\n"
"    border-style: solid;\n"
"    border-width: 3px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #1e5491;\n"
"    background-color: #c0a1cc;\n"
"    border-color: #567cbe;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #eddfed;\n"
"    background-color: #1c58a3;\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton"
                        "::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));
        but_back = new QPushButton(word_login_window);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(580, 350, 161, 51));
        but_back->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #1e5491;\n"
"    background-color: #eec0da;\n"
"    border-color: #567cbe;\n"
"    border-radius: 17px;\n"
"    border-style: solid;\n"
"    border-width: 3px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #1e5491;\n"
"    background-color: #c0a1cc;\n"
"    border-color: #567cbe;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #eddfed;\n"
"    background-color: #1c58a3;\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton"
                        "::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        retranslateUi(word_login_window);

        QMetaObject::connectSlotsByName(word_login_window);
    } // setupUi

    void retranslateUi(QWidget *word_login_window)
    {
        word_login_window->setWindowTitle(QApplication::translate("word_login_window", "\347\231\273\345\205\245", Q_NULLPTR));
        label_account->setText(QApplication::translate("word_login_window", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_password->setText(QApplication::translate("word_login_window", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit_account->setText(QString());
        lineEdit_password->setText(QString());
        but_login->setText(QApplication::translate("word_login_window", "\347\231\273\345\205\245", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_login_window", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_login_window: public Ui_word_login_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_LOGIN_WINDOW_H
