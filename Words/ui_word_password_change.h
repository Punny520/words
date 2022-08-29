/********************************************************************************
** Form generated from reading UI file 'word_password_change.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_PASSWORD_CHANGE_H
#define UI_WORD_PASSWORD_CHANGE_H

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

class Ui_word_password_change
{
public:
    QLineEdit *lineEdit_now;
    QLineEdit *lineEdit_changed;
    QPushButton *but_ok;
    QPushButton *but_back;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *word_password_change)
    {
        if (word_password_change->objectName().isEmpty())
            word_password_change->setObjectName(QStringLiteral("word_password_change"));
        word_password_change->resize(658, 403);
        word_password_change->setStyleSheet(QStringLiteral("#word_password_change{border-image: url(:/Yosemite-Color-Block.png);}"));
        lineEdit_now = new QLineEdit(word_password_change);
        lineEdit_now->setObjectName(QStringLiteral("lineEdit_now"));
        lineEdit_now->setGeometry(QRect(180, 80, 321, 41));
        lineEdit_now->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        lineEdit_changed = new QLineEdit(word_password_change);
        lineEdit_changed->setObjectName(QStringLiteral("lineEdit_changed"));
        lineEdit_changed->setGeometry(QRect(180, 180, 321, 41));
        lineEdit_changed->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        but_ok = new QPushButton(word_password_change);
        but_ok->setObjectName(QStringLiteral("but_ok"));
        but_ok->setGeometry(QRect(40, 330, 161, 41));
        but_ok->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_back = new QPushButton(word_password_change);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(460, 330, 161, 41));
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
        label = new QLabel(word_password_change);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 111, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_2 = new QLabel(word_password_change);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 170, 111, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));

        retranslateUi(word_password_change);

        QMetaObject::connectSlotsByName(word_password_change);
    } // setupUi

    void retranslateUi(QWidget *word_password_change)
    {
        word_password_change->setWindowTitle(QApplication::translate("word_password_change", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        but_ok->setText(QApplication::translate("word_password_change", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_password_change", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("word_password_change", "\345\275\223\345\211\215\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("word_password_change", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_password_change: public Ui_word_password_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_PASSWORD_CHANGE_H
