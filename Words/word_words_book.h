#ifndef WORD_WORDS_BOOK_H
#define WORD_WORDS_BOOK_H
#include<QString>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include <QWidget>
#include<QTimer>
#include <QApplication>
namespace Ui {
class word_words_book;
}

class word_words_book : public QWidget
{
    Q_OBJECT

public:
    explicit word_words_book(QWidget *parent = 0);
    ~word_words_book();
    void print();
    void backToMain();
private:
    Ui::word_words_book *ui;
protected:
    void paintEvent(QPaintEvent *event);

};

#endif // WORD_WORDS_BOOK_H
