/********************************************************************************
** Form generated from reading UI file 'word_test.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_TEST_H
#define UI_WORD_TEST_H

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

class Ui_word_test
{
public:
    QLabel *label_pro;
    QLineEdit *lineEdit;
    QPushButton *but_next;
    QLabel *label_jd;

    void setupUi(QWidget *word_test)
    {
        if (word_test->objectName().isEmpty())
            word_test->setObjectName(QStringLiteral("word_test"));
        word_test->resize(574, 374);
        word_test->setStyleSheet(QStringLiteral("#word_test{border-image: url(:/Yosemite-Color-Block.png);}"));
        label_pro = new QLabel(word_test);
        label_pro->setObjectName(QStringLiteral("label_pro"));
        label_pro->setGeometry(QRect(10, 70, 551, 61));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_pro->setFont(font);
        label_pro->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_pro->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(word_test);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 170, 371, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        but_next = new QPushButton(word_test);
        but_next->setObjectName(QStringLiteral("but_next"));
        but_next->setGeometry(QRect(100, 270, 381, 41));
        but_next->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        label_jd = new QLabel(word_test);
        label_jd->setObjectName(QStringLiteral("label_jd"));
        label_jd->setGeometry(QRect(10, 310, 551, 51));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_jd->setFont(font1);
        label_jd->setStyleSheet(QStringLiteral("color: rgb(238, 192, 218);"));
        label_jd->setAlignment(Qt::AlignCenter);

        retranslateUi(word_test);

        QMetaObject::connectSlotsByName(word_test);
    } // setupUi

    void retranslateUi(QWidget *word_test)
    {
        word_test->setWindowTitle(QApplication::translate("word_test", "\345\215\225\350\257\215\346\265\213\350\257\225\351\227\257\345\205\263", Q_NULLPTR));
        label_pro->setText(QApplication::translate("word_test", "TextLabel", Q_NULLPTR));
        but_next->setText(QApplication::translate("word_test", "\344\270\213\344\270\200\344\270\252", Q_NULLPTR));
        label_jd->setText(QApplication::translate("word_test", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_test: public Ui_word_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_TEST_H
