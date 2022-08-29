#ifndef WORD_TRAINING_KIND_H
#define WORD_TRAINING_KIND_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_training_kind;
}

class word_training_kind : public QWidget
{
    Q_OBJECT

public:
    explicit word_training_kind(QWidget *parent = 0);
    ~word_training_kind();
    void backTomain();
    void chooseOrspell(int x);
private slots:
    void chooseOrspell_1();
    void chooseOrspell_2();
private:
    Ui::word_training_kind *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_TRAINING_KIND_H
