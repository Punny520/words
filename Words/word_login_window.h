#ifndef WORD_LOGIN_WINDOW_H
#define WORD_LOGIN_WINDOW_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_login_window;
}

class word_login_window : public QWidget
{
    Q_OBJECT

public:
    explicit word_login_window(QWidget *parent = 0);
    ~word_login_window();
    void backTostart();
    void getAccountAndPasswordAndLogin();
private:
    Ui::word_login_window *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_LOGIN_WINDOW_H
