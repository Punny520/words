#ifndef WORD_PASSWORD_CHANGE_H
#define WORD_PASSWORD_CHANGE_H

#include <QWidget>

namespace Ui {
class word_password_change;
}

class word_password_change : public QWidget
{
    Q_OBJECT

public:
    explicit word_password_change(QWidget *parent = 0);
    ~word_password_change();
    void back();
    void ok();
private:
    Ui::word_password_change *ui;
protected:
    void paintEvent(QPaintEvent *event);

};

#endif // WORD_PASSWORD_CHANGE_H
