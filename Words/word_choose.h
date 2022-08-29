#ifndef WORD_CHOOSE_H
#define WORD_CHOOSE_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_choose;
}

class word_choose : public QWidget
{
    Q_OBJECT

public:
    explicit word_choose(QWidget *parent = 0);
    ~word_choose();
    int setTime;
    void setWords(int x);
    void back();
private slots:
    void setWords_6();
    void setWords_4();
    void setWords_2();
private:
    Ui::word_choose *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_CHOOSE_H
