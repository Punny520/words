/********************************************************************************
** Form generated from reading UI file 'word_register_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_REGISTER_WINDOW_H
#define UI_WORD_REGISTER_WINDOW_H

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

class Ui_word_register_window
{
public:
    QLineEdit *lineEdit_account;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_repassword;
    QLabel *label_account;
    QLabel *label_password;
    QLabel *label_repassword;
    QPushButton *but_register;
    QPushButton *but_back;

    void setupUi(QWidget *word_register_window)
    {
        if (word_register_window->objectName().isEmpty())
            word_register_window->setObjectName(QStringLiteral("word_register_window"));
        word_register_window->resize(824, 489);
        QFont font;
        font.setPointSize(20);
        word_register_window->setFont(font);
        word_register_window->setStyleSheet(QStringLiteral("#word_register_window{border-image: url(:/Yosemite-Color-Block.png);}"));
        lineEdit_account = new QLineEdit(word_register_window);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setEnabled(true);
        lineEdit_account->setGeometry(QRect(190, 40, 491, 51));
        lineEdit_account->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        lineEdit_password = new QLineEdit(word_register_window);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(190, 130, 491, 51));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        lineEdit_repassword = new QLineEdit(word_register_window);
        lineEdit_repassword->setObjectName(QStringLiteral("lineEdit_repassword"));
        lineEdit_repassword->setGeometry(QRect(190, 220, 491, 51));
        lineEdit_repassword->setFont(font);
        lineEdit_repassword->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        label_account = new QLabel(word_register_window);
        label_account->setObjectName(QStringLiteral("label_account"));
        label_account->setGeometry(QRect(100, 40, 91, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_account->setFont(font1);
        label_account->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_password = new QLabel(word_register_window);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(100, 130, 91, 51));
        label_password->setFont(font1);
        label_password->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_repassword = new QLabel(word_register_window);
        label_repassword->setObjectName(QStringLiteral("label_repassword"));
        label_repassword->setGeometry(QRect(40, 220, 151, 51));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_repassword->setFont(font2);
        label_repassword->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        but_register = new QPushButton(word_register_window);
        but_register->setObjectName(QStringLiteral("but_register"));
        but_register->setGeometry(QRect(30, 350, 181, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        but_register->setFont(font3);
        but_register->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_back = new QPushButton(word_register_window);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(610, 350, 181, 61));
        but_back->setFont(font3);
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

        retranslateUi(word_register_window);

        QMetaObject::connectSlotsByName(word_register_window);
    } // setupUi

    void retranslateUi(QWidget *word_register_window)
    {
        word_register_window->setWindowTitle(QApplication::translate("word_register_window", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_account->setText(QApplication::translate("word_register_window", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_password->setText(QApplication::translate("word_register_window", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_repassword->setText(QApplication::translate("word_register_window", "\351\207\215\345\244\215\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        but_register->setText(QApplication::translate("word_register_window", "\346\263\250\345\206\214", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_register_window", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_register_window: public Ui_word_register_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_REGISTER_WINDOW_H
