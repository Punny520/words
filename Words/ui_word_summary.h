/********************************************************************************
** Form generated from reading UI file 'word_summary.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_SUMMARY_H
#define UI_WORD_SUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_word_summary
{
public:
    QPushButton *but_again;
    QPushButton *but_backToMain;
    QLabel *label_zql;
    QLabel *label_pj;
    QLabel *label;

    void setupUi(QWidget *word_summary)
    {
        if (word_summary->objectName().isEmpty())
            word_summary->setObjectName(QStringLiteral("word_summary"));
        word_summary->resize(604, 380);
        word_summary->setStyleSheet(QStringLiteral("#word_summary{border-image: url(:/Yosemite-Color-Block.png);}"));
        but_again = new QPushButton(word_summary);
        but_again->setObjectName(QStringLiteral("but_again"));
        but_again->setGeometry(QRect(180, 250, 221, 81));
        but_again->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_backToMain = new QPushButton(word_summary);
        but_backToMain->setObjectName(QStringLiteral("but_backToMain"));
        but_backToMain->setGeometry(QRect(500, 320, 91, 41));
        but_backToMain->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        label_zql = new QLabel(word_summary);
        label_zql->setObjectName(QStringLiteral("label_zql"));
        label_zql->setGeometry(QRect(20, 20, 111, 51));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_zql->setFont(font);
        label_zql->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_pj = new QLabel(word_summary);
        label_pj->setObjectName(QStringLiteral("label_pj"));
        label_pj->setGeometry(QRect(20, 90, 361, 51));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_pj->setFont(font1);
        label_pj->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label = new QLabel(word_summary);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 140, 491, 51));
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(word_summary);

        QMetaObject::connectSlotsByName(word_summary);
    } // setupUi

    void retranslateUi(QWidget *word_summary)
    {
        word_summary->setWindowTitle(QApplication::translate("word_summary", "\346\200\273\347\273\223", Q_NULLPTR));
        but_again->setText(QApplication::translate("word_summary", "\345\206\215\346\235\245\344\270\200\346\254\241", Q_NULLPTR));
        but_backToMain->setText(QApplication::translate("word_summary", "\350\277\224\345\233\236", Q_NULLPTR));
        label_zql->setText(QApplication::translate("word_summary", "TextLabel", Q_NULLPTR));
        label_pj->setText(QApplication::translate("word_summary", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("word_summary", "\351\224\231\350\257\257\347\232\204\345\215\225\350\257\215\345\267\262\347\273\217\350\207\252\345\212\250\345\270\256\346\202\250\346\267\273\345\212\240\345\210\260\345\215\225\350\257\215\346\234\254\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_summary: public Ui_word_summary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_SUMMARY_H
