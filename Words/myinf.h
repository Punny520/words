#ifndef MYINF_H
#define MYINF_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class Myinf;
}

class Myinf : public QWidget
{
    Q_OBJECT

public:
    explicit Myinf(QWidget *parent = 0);
    ~Myinf();
    void back();
    void Myinf_show();
    void to_change();
private:
    Ui::Myinf *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MYINF_H
