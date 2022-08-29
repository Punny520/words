#ifndef WORD_TRAINING_LEVE_H
#define WORD_TRAINING_LEVE_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_training_leve;
}

class word_training_leve : public QWidget
{
    Q_OBJECT
public:
    explicit word_training_leve(QWidget *parent = 0);
    ~word_training_leve();
    void toNext(int x);
    void back();
private slots:
    void clicked_easy();
    void clicked_mid();
    void clicked_hard();
private:
    Ui::word_training_leve *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_TRAINING_LEVE_H
