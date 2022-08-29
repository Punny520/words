/********************************************************************************
** Form generated from reading UI file 'word_choose_training.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_CHOOSE_TRAINING_H
#define UI_WORD_CHOOSE_TRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_word_choose_training
{
public:
    QPushButton *but_A;
    QPushButton *but_B;
    QPushButton *but_C;
    QPushButton *but_D;
    QLabel *label;
    QLabel *label_time;
    QProgressBar *progressBar;
    QLabel *label_jd;

    void setupUi(QWidget *word_choose_training)
    {
        if (word_choose_training->objectName().isEmpty())
            word_choose_training->setObjectName(QStringLiteral("word_choose_training"));
        word_choose_training->resize(728, 437);
        word_choose_training->setStyleSheet(QStringLiteral("#word_choose_training{border-image: url(:/Yosemite-Color-Block.png);}"));
        but_A = new QPushButton(word_choose_training);
        but_A->setObjectName(QStringLiteral("but_A"));
        but_A->setGeometry(QRect(50, 180, 261, 71));
        but_A->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_B = new QPushButton(word_choose_training);
        but_B->setObjectName(QStringLiteral("but_B"));
        but_B->setGeometry(QRect(420, 180, 261, 71));
        but_B->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_C = new QPushButton(word_choose_training);
        but_C->setObjectName(QStringLiteral("but_C"));
        but_C->setGeometry(QRect(50, 310, 261, 71));
        but_C->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_D = new QPushButton(word_choose_training);
        but_D->setObjectName(QStringLiteral("but_D"));
        but_D->setGeometry(QRect(420, 310, 261, 71));
        but_D->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        label = new QLabel(word_choose_training);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 691, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label->setAlignment(Qt::AlignCenter);
        label_time = new QLabel(word_choose_training);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(510, 140, 111, 21));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_time->setFont(font1);
        label_time->setStyleSheet(QStringLiteral("color: rgb(226, 226, 226);"));
        label_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar = new QProgressBar(word_choose_training);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(157, 140, 351, 23));
        progressBar->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: #eec0da;\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1e5491;\n"
"}"));
        progressBar->setMaximum(100);
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        label_jd = new QLabel(word_choose_training);
        label_jd->setObjectName(QStringLiteral("label_jd"));
        label_jd->setGeometry(QRect(300, 101, 101, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_jd->setFont(font2);
        label_jd->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_jd->setAlignment(Qt::AlignCenter);

        retranslateUi(word_choose_training);

        QMetaObject::connectSlotsByName(word_choose_training);
    } // setupUi

    void retranslateUi(QWidget *word_choose_training)
    {
        word_choose_training->setWindowTitle(QApplication::translate("word_choose_training", "\345\215\225\350\257\215\351\200\211\346\213\251\350\256\255\347\273\203", Q_NULLPTR));
        but_A->setText(QApplication::translate("word_choose_training", "PushButton", Q_NULLPTR));
        but_B->setText(QApplication::translate("word_choose_training", "PushButton", Q_NULLPTR));
        but_C->setText(QApplication::translate("word_choose_training", "PushButton", Q_NULLPTR));
        but_D->setText(QApplication::translate("word_choose_training", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("word_choose_training", "TextLabel", Q_NULLPTR));
        label_time->setText(QApplication::translate("word_choose_training", "TextLabel", Q_NULLPTR));
        label_jd->setText(QApplication::translate("word_choose_training", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class word_choose_training: public Ui_word_choose_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_CHOOSE_TRAINING_H
