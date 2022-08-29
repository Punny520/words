#ifndef WORD_TEST_H
#define WORD_TEST_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_test;
}

class word_test : public QWidget
{
    Q_OBJECT

public:
    explicit word_test(QWidget *parent = 0);
    ~word_test();
    int correct_count=0;
    int pro_num;
    int in_test;
    int total_get = 0;
    int every_get;
    QString pro_en;
    void start();
    void test_begin();
    void check();
    void test_summary();
private:
    Ui::word_test *ui;
protected:
    void paintEvent(QPaintEvent *event);

};

#endif // WORD_TEST_H
