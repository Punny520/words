#ifndef WORD_REGISTER_WINDOW_H
#define WORD_REGISTER_WINDOW_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_register_window;
}

class word_register_window : public QWidget
{
    Q_OBJECT

public:
    explicit word_register_window(QWidget *parent = 0);
    ~word_register_window();
    void backTostart();
    void creatAccount();
private:
    Ui::word_register_window *ui;
protected:
    void paintEvent(QPaintEvent *event);
};
void checkAndCreate(QString account, QString password, QString repassword, word_register_window *w);
#endif // WORD_REGISTER_WINDOW_H
