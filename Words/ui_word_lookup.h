/********************************************************************************
** Form generated from reading UI file 'word_lookup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORD_LOOKUP_H
#define UI_WORD_LOOKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *query_Button;
    QPushButton *clear_Button;
    QPushButton *close_Button;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *text_send;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *text;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *chinese_Button;
    QRadioButton *english_Button;
    QLineEdit *tcp_lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(720, 480);
        Widget->setMinimumSize(QSize(720, 480));
        Widget->setMaximumSize(QSize(720, 480));
        query_Button = new QPushButton(Widget);
        query_Button->setObjectName(QStringLiteral("query_Button"));
        query_Button->setGeometry(QRect(530, 180, 80, 40));
        query_Button->setMinimumSize(QSize(20, 40));
        query_Button->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#query_Button{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 11, 18, 220);\n"
"border:2px solid white;\n"
"border-radius:10px;\n"
"font: 13pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"}\n"
"QPushButton#query_Button:disabled{\n"
"background-color: rgba(255, 98, 98, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
"\n"
"QPushButton#query_Button:hover{ \n"
"background-color: rgba(255, 11, 18, 140);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#query_Button:pressed{\n"
"background-color: rgba(255, 98, 98, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"padding-left:6px;\n"
"padding-top:6px;\n"
"}\n"
""));
        clear_Button = new QPushButton(Widget);
        clear_Button->setObjectName(QStringLiteral("clear_Button"));
        clear_Button->setGeometry(QRect(530, 230, 80, 40));
        clear_Button->setMinimumSize(QSize(20, 40));
        clear_Button->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#clear_Button{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 11, 18, 220);\n"
"border:2px solid white;\n"
"border-radius:10px;\n"
"font: 13pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"}\n"
" \n"
"QPushButton#clear_Button:hover{ \n"
"background-color: rgba(255, 11, 18, 140);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#clear_Button:pressed{\n"
"background-color: rgba(255, 98, 98, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"padding-left:6px;\n"
"padding-top:6px;\n"
"}\n"
""));
        close_Button = new QPushButton(Widget);
        close_Button->setObjectName(QStringLiteral("close_Button"));
        close_Button->setGeometry(QRect(530, 280, 80, 40));
        close_Button->setMinimumSize(QSize(20, 40));
        close_Button->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#close_Button{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 11, 18, 220);\n"
"border:2px solid white;\n"
"border-radius:10px;\n"
"font: 13pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"}\n"
" \n"
"QPushButton#close_Button:hover{ \n"
"background-color: rgba(255, 11, 18, 140);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#close_Button:pressed{\n"
"background-color: rgba(255, 98, 98, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"padding-left:6px;\n"
"padding-top:6px;\n"
"}\n"
""));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 281, 20));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 451, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        text_send = new QTextEdit(layoutWidget);
        text_send->setObjectName(QStringLiteral("text_send"));
        text_send->setMinimumSize(QSize(100, 70));

        horizontalLayout_2->addWidget(text_send);


        verticalLayout_3->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 90, 451, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        text = new QLineEdit(layoutWidget1);
        text->setObjectName(QStringLiteral("text"));
        text->setMinimumSize(QSize(100, 70));
        text->setStyleSheet(QString::fromUtf8("\n"
"font: 18pt \"\346\226\260\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(text);


        verticalLayout_4->addLayout(horizontalLayout);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 40, 341, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        chinese_Button = new QRadioButton(layoutWidget2);
        chinese_Button->setObjectName(QStringLiteral("chinese_Button"));
        chinese_Button->setStyleSheet(QLatin1String("font: 75 12pt \"Agency FB\";\n"
"color: rgb(0, 0, 0);\n"
""));
        chinese_Button->setCheckable(true);
        chinese_Button->setChecked(false);

        horizontalLayout_3->addWidget(chinese_Button);

        english_Button = new QRadioButton(layoutWidget2);
        english_Button->setObjectName(QStringLiteral("english_Button"));
        english_Button->setStyleSheet(QLatin1String("font: 75 12pt \"Agency FB\";\n"
"\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(english_Button);

        tcp_lineEdit = new QLineEdit(Widget);
        tcp_lineEdit->setObjectName(QStringLiteral("tcp_lineEdit"));
        tcp_lineEdit->setGeometry(QRect(610, 450, 81, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        query_Button->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", Q_NULLPTR));
        clear_Button->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\261\217\345\271\225", Q_NULLPTR));
        close_Button->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\347\232\204\350\257\255\350\250\200\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\277\273\350\257\221\347\273\223\346\236\234:</span></p></body></html>", Q_NULLPTR));
        text_send->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\350\257\267\345\205\210\351\200\211\346\213\251\344\275\240\351\234\200\350\246\201\347\277\273\350\257\221\347\232\204\350\257\255\350\250\200</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\234\254\344\272\247\345\223\201\347\277\273\350\257\221\347\273\223\346\236\234\347\224\261\347\231\276\345\272\246\347\277\273\350\257\221\346\217\220\344\276\233</span></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\347\224\261\344\272\216\344\275\234\350\200\205\346\260\264\345\271\263\346\234\211\351\231\220\357\274\214\346\234\211\344\270\215\350\266\263\344\271\213\345\244\204\345\270\214\346\234\233\345\244\247\345\256\266\346\214\207\345\207\272</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">by\357\274\232\345\256\211\344\277\212\346\235\260   </p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2019\345\271\26410\346\234\2101\346\227\245 </p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\257\267\346\212\212\344\275\240\351\234\200\350\246\201\347\277\273\350\257\221\347\232\204\350\257\215\347\273\204\350\276\223\345\205\245\345\210\260\344\270\213\351\235\242\346\241\206\345\206\205:</span></p></body></html>", Q_NULLPTR));
        chinese_Button->setText(QApplication::translate("Widget", "\344\270\255\346\226\207\357\274\210Chinese\357\274\211", Q_NULLPTR));
        english_Button->setText(QApplication::translate("Widget", "\350\213\261\346\226\207\357\274\210English\357\274\211", Q_NULLPTR));
        tcp_lineEdit->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\350\277\236\346\216\245\346\210\220\345\212\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORD_LOOKUP_H




