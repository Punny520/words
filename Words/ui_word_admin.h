/********************************************************************************
** Form generated from reading UI file 'word_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_ADMIN_H
#define UI_WORD_ADMIN_H

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

class Ui_word_admin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_account;
    QLineEdit *lineEdit_password;
    QPushButton *but_login;
    QPushButton *but_back;

    void setupUi(QWidget *word_admin)
    {
        if (word_admin->objectName().isEmpty())
            word_admin->setObjectName(QStringLiteral("word_admin"));
        word_admin->resize(715, 461);
        word_admin->setStyleSheet(QStringLiteral("#word_admin{border-image: url(:/Yosemite-Color-Block.png);}"));
        label = new QLabel(word_admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 131, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_2 = new QLabel(word_admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 210, 131, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        lineEdit_account = new QLineEdit(word_admin);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setGeometry(QRect(160, 80, 531, 61));
        QFont font1;
        font1.setPointSize(20);
        lineEdit_account->setFont(font1);
        lineEdit_account->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        lineEdit_password = new QLineEdit(word_admin);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(160, 200, 531, 61));
        lineEdit_password->setFont(font1);
        lineEdit_password->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        but_login = new QPushButton(word_admin);
        but_login->setObjectName(QStringLiteral("but_login"));
        but_login->setGeometry(QRect(30, 330, 161, 51));
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
        but_back = new QPushButton(word_admin);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(530, 330, 161, 51));
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

        retranslateUi(word_admin);

        QMetaObject::connectSlotsByName(word_admin);
    } // setupUi

    void retranslateUi(QWidget *word_admin)
    {
        word_admin->setWindowTitle(QApplication::translate("word_admin", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", Q_NULLPTR));
        label->setText(QApplication::translate("word_admin", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("word_admin", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        but_login->setText(QApplication::translate("word_admin", "\347\256\241\347\220\206\345\221\230\347\231\273\345\205\245", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_admin", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_admin: public Ui_word_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_ADMIN_H
