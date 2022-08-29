#ifndef WORD_ADMIN_H
#define WORD_ADMIN_H

#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>

namespace Ui {
class word_admin;
}

class word_admin : public QWidget
{
    Q_OBJECT

public:
    explicit word_admin(QWidget *parent = 0);
    ~word_admin();
    void back();
    void login();
private:
    Ui::word_admin *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_ADMIN_H
