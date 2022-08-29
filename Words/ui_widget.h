/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *query_Button;
    QPushButton *but_back;
    QLabel *label_3;
    QLabel *label;
    QRadioButton *chinese_Button;
    QRadioButton *english_Button;
    QLineEdit *text;
    QTextEdit *text_send;
    QLabel *label_2;
    QLineEdit *tcp_lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(720, 480);
        Widget->setMinimumSize(QSize(720, 480));
        Widget->setMaximumSize(QSize(720, 480));
        Widget->setStyleSheet(QStringLiteral("#Widget{border-image: url(:/Yosemite-Color-Block.png);}"));
        query_Button = new QPushButton(Widget);
        query_Button->setObjectName(QStringLiteral("query_Button"));
        query_Button->setGeometry(QRect(560, 140, 91, 71));
        query_Button->setMinimumSize(QSize(20, 40));
        query_Button->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
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
        but_back = new QPushButton(Widget);
        but_back->setObjectName(QStringLiteral("but_back"));
        but_back->setGeometry(QRect(610, 410, 91, 51));
        but_back->setMinimumSize(QSize(20, 40));
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
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 281, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 311, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        chinese_Button = new QRadioButton(Widget);
        chinese_Button->setObjectName(QStringLiteral("chinese_Button"));
        chinese_Button->setGeometry(QRect(30, 60, 153, 28));
        chinese_Button->setFont(font);
        chinese_Button->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        chinese_Button->setCheckable(true);
        chinese_Button->setChecked(false);
        english_Button = new QRadioButton(Widget);
        english_Button->setObjectName(QStringLiteral("english_Button"));
        english_Button->setGeometry(QRect(350, 60, 148, 28));
        english_Button->setFont(font);
        english_Button->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        text = new QLineEdit(Widget);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(20, 140, 521, 70));
        text->setMinimumSize(QSize(100, 70));
        QFont font2;
        font2.setPointSize(14);
        text->setFont(font2);
        text->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
""));
        text_send = new QTextEdit(Widget);
        text_send->setObjectName(QStringLiteral("text_send"));
        text_send->setGeometry(QRect(20, 220, 521, 241));
        text_send->setMinimumSize(QSize(100, 70));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        text_send->setFont(font3);
        text_send->setStyleSheet(QLatin1String("background-color: rgb(238, 192, 218);\n"
"color: rgb(30, 84, 145);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 10, 171, 51));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("color: rgb(30, 84, 145);"));
        tcp_lineEdit = new QLineEdit(Widget);
        tcp_lineEdit->setObjectName(QStringLiteral("tcp_lineEdit"));
        tcp_lineEdit->setGeometry(QRect(542, 50, 171, 31));
        tcp_lineEdit->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(30, 84, 145);/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 15px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background-color: rgb(238, 192, 218);\n"
"color: rgb(30, 84, 145);"));
        tcp_lineEdit->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\344\270\255\350\213\261\344\272\222\350\257\221", Q_NULLPTR));
        query_Button->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", Q_NULLPTR));
        but_back->setText(QApplication::translate("Widget", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\351\234\200\350\246\201\347\277\273\350\257\221\347\232\204\347\261\273\345\236\213:", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\347\277\273\350\257\221\347\232\204\345\206\205\345\256\271:", Q_NULLPTR));
        chinese_Button->setText(QApplication::translate("Widget", "\344\270\255\350\257\221\350\213\261", Q_NULLPTR));
        english_Button->setText(QApplication::translate("Widget", "\350\213\261\350\257\221\344\270\255", Q_NULLPTR));
        text_send->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "API\347\224\261\342\200\234\347\231\276\345\272\246\347\277\273\350\257\221\342\200\235\346\217\220\344\276\233", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
