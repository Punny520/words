/********************************************************************************
** Form generated from reading UI file 'word_words_book.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_WORDS_BOOK_H
#define UI_WORD_WORDS_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_word_words_book
{
public:
    QPushButton *but_back;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *word_words_book)
    {
        if (word_words_book->objectName().isEmpty())
            word_words_book->setObjectName(QStringLiteral("word_words_book"));
        word_words_book->resize(734, 476);
        QFont font;
        font.setPointSize(9);
        word_words_book->setFont(font);
        word_words_book->setStyleSheet(QStringLiteral("#word_words_book{border-image: url(:/Yosemite-Color-Block.png);}"));
        but_back = new QPushButton(word_words_book);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(590, 410, 121, 51));
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
        label = new QLabel(word_words_book);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 371, 61));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        textBrowser = new QTextBrowser(word_words_book);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 100, 571, 361));
        QFont font2;
        font2.setPointSize(12);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QLatin1String("background-color: rgb(238, 192, 218);\n"
"color: rgb(30, 84, 145);"));

        retranslateUi(word_words_book);

        QMetaObject::connectSlotsByName(word_words_book);
    } // setupUi

    void retranslateUi(QWidget *word_words_book)
    {
        word_words_book->setWindowTitle(QApplication::translate("word_words_book", "\345\215\225\350\257\215\346\234\254", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_words_book", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("word_words_book", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_words_book: public Ui_word_words_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_WORDS_BOOK_H
