#ifndef WORD_START_WINDOW_H
#define WORD_START_WINDOW_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
#include<QPainter>
namespace Ui {
class Word_start_window;
}

class Word_start_window : public QWidget
{
    Q_OBJECT

public:
    explicit Word_start_window(QWidget *parent = 0);
    ~Word_start_window();
    void to_register();
    void to_login();
    void to_lookup();
    void to_admin();
private:
    Ui::Word_start_window *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_START_WINDOW_H
