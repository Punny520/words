/********************************************************************************
** Form generated from reading UI file 'word_training_kind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_TRAINING_KIND_H
#define UI_WORD_TRAINING_KIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_word_training_kind
{
public:
    QPushButton *but_choose;
    QPushButton *but_spell;
    QPushButton *but_back;
    QLabel *label_title;

    void setupUi(QWidget *word_training_kind)
    {
        if (word_training_kind->objectName().isEmpty())
            word_training_kind->setObjectName(QStringLiteral("word_training_kind"));
        word_training_kind->resize(691, 415);
        word_training_kind->setStyleSheet(QStringLiteral("#word_training_kind{border-image: url(:/Yosemite-Color-Block.png);}"));
        but_choose = new QPushButton(word_training_kind);
        but_choose->setObjectName(QStringLiteral("but_choose"));
        but_choose->setGeometry(QRect(220, 70, 221, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        but_choose->setFont(font);
        but_choose->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_spell = new QPushButton(word_training_kind);
        but_spell->setObjectName(QStringLiteral("but_spell"));
        but_spell->setGeometry(QRect(220, 250, 221, 111));
        but_spell->setFont(font);
        but_spell->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_back = new QPushButton(word_training_kind);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(540, 340, 131, 51));
        but_back->setFont(font);
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
        label_title = new QLabel(word_training_kind);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(0, 0, 291, 71));
        QFont font1;
        font1.setPointSize(23);
        label_title->setFont(font1);
        label_title->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_title->setAlignment(Qt::AlignCenter);

        retranslateUi(word_training_kind);

        QMetaObject::connectSlotsByName(word_training_kind);
    } // setupUi

    void retranslateUi(QWidget *word_training_kind)
    {
        word_training_kind->setWindowTitle(QApplication::translate("word_training_kind", "\351\200\211\346\213\251\350\256\255\347\273\203\347\247\215\347\261\273", Q_NULLPTR));
        but_choose->setText(QApplication::translate("word_training_kind", "\345\215\225\350\257\215\351\200\211\346\213\251\350\256\255\347\273\203", Q_NULLPTR));
        but_spell->setText(QApplication::translate("word_training_kind", "\345\215\225\350\257\215\346\213\274\345\206\231\350\256\255\347\273\203", Q_NULLPTR));
        but_back->setText(QApplication::translate("word_training_kind", "\350\277\224\345\233\236", Q_NULLPTR));
        label_title->setText(QApplication::translate("word_training_kind", "\351\200\211\346\213\251\350\256\255\347\273\203\347\247\215\347\261\273:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_training_kind: public Ui_word_training_kind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_TRAINING_KIND_H
