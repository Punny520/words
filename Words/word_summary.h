#ifndef WORD_SUMMARY_H
#define WORD_SUMMARY_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_summary;
}

class word_summary : public QWidget
{
    Q_OBJECT
public:
    explicit word_summary(QWidget *parent = 0);
    ~word_summary();
    int setTime;
    int correct_count;
    void text_show();
    void backToMain();
    void try_again();
private:
    Ui::word_summary *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_SUMMARY_H
