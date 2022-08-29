/********************************************************************************
** Form generated from reading UI file 'myinf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINF_H
#define UI_MYINF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Myinf
{
public:
    QPushButton *but_back;
    QLabel *label_id;
    QLabel *label_jf;
    QLabel *label_gk;
    QLabel *label;
    QPushButton *but_change;

    void setupUi(QWidget *Myinf)
    {
        if (Myinf->objectName().isEmpty())
            Myinf->setObjectName(QStringLiteral("Myinf"));
        Myinf->resize(832, 458);
        Myinf->setStyleSheet(QStringLiteral("#Myinf{border-image: url(:/Yosemite-Color-Block.png);}"));
        but_back = new QPushButton(Myinf);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(660, 370, 151, 61));
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
        label_id = new QLabel(Myinf);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(20, 20, 791, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_id->setFont(font);
        label_id->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_jf = new QLabel(Myinf);
        label_jf->setObjectName(QStringLiteral("label_jf"));
        label_jf->setGeometry(QRect(20, 80, 791, 61));
        label_jf->setFont(font);
        label_jf->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label_gk = new QLabel(Myinf);
        label_gk->setObjectName(QStringLiteral("label_gk"));
        label_gk->setGeometry(QRect(20, 140, 791, 51));
        label_gk->setFont(font);
        label_gk->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label = new QLabel(Myinf);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 200, 791, 51));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        but_change = new QPushButton(Myinf);
        but_change->setObjectName(QStringLiteral("but_change"));
        but_change->setGeometry(QRect(30, 370, 151, 61));
        but_change->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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

        retranslateUi(Myinf);

        QMetaObject::connectSlotsByName(Myinf);
    } // setupUi

    void retranslateUi(QWidget *Myinf)
    {
        Myinf->setWindowTitle(QApplication::translate("Myinf", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        but_back->setText(QApplication::translate("Myinf", "\350\277\224\345\233\236", Q_NULLPTR));
        label_id->setText(QApplication::translate("Myinf", "TextLabel", Q_NULLPTR));
        label_jf->setText(QApplication::translate("Myinf", "TextLabel", Q_NULLPTR));
        label_gk->setText(QApplication::translate("Myinf", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("Myinf", "TextLabel", Q_NULLPTR));
        but_change->setText(QApplication::translate("Myinf", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Myinf: public Ui_Myinf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINF_H
