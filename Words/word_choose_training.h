#ifndef WORD_CHOOSE_TRAINING_H
#define WORD_CHOOSE_TRAINING_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_choose_training;
}

class word_choose_training : public QWidget
{
    Q_OBJECT

public:
    explicit word_choose_training(QWidget *parent = 0);
    ~word_choose_training();
    int sum[50];//随机生成的40个随机数对应了10个题目的1一个正确答案和3个干扰项
    int ans[11];//随机生成的答案
    int setTime;
    double show_time;
    int correct_count=0;
    int pro_num=1;
    void toNext(int choose);
    void screen_show(int num);
    QTimer *myTimer;
    int prog_num=100;
    QString en5,cn5;
private slots:
    void but_clickedA();
    void but_clickedB();
    void but_clickedC();
    void but_clickedD();
    void process();
private:
    Ui::word_choose_training *ui;
protected:
    void paintEvent(QPaintEvent *event);
};
QString format_CN(QString s);

#endif // WORD_CHOOSE_TRAINING_H
