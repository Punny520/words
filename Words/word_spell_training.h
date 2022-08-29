#ifndef WORD_SPELL_TRAINING_H
#define WORD_SPELL_TRAINING_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_spell_training;
}

class word_spell_training : public QWidget
{
    Q_OBJECT

public:
    explicit word_spell_training(QWidget *parent = 0);
    ~word_spell_training();
    void toNext();
    int correct_count=0;
    int pro_num=0;
    int problemID[20];
    QString seten(QString s);
    QString ans;
    QString cn5;
    void check();
private:
    Ui::word_spell_training *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_SPELL_TRAINING_H
