#ifndef WORD_MAIN_MEUN_H
#define WORD_MAIN_MEUN_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class Word_Main_meun;
}

class Word_Main_meun : public QWidget
{
    Q_OBJECT

public:
    explicit Word_Main_meun(QWidget *parent = 0);
    ~Word_Main_meun();
    void toTrainning();
    void toTest();
    void toBook();
    void toLookup();
    void toMyinf();
    void backToStart();
private:
    Ui::Word_Main_meun *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_MAIN_MEUN_H
