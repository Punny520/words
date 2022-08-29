#ifndef WORD_ADMIN_MENU_H
#define WORD_ADMIN_MENU_H

#include <QWidget>

namespace Ui {
class word_admin_menu;
}

class word_admin_menu : public QWidget
{
    Q_OBJECT

public:
    explicit word_admin_menu(QWidget *parent = 0);
    ~word_admin_menu();
    void list_show();
    void lookup_jf();
    void lookup_account();
    void lookup_test();
    void del();
    void back();
    QString filb(QString s,int bit);
private:
    Ui::word_admin_menu *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WORD_ADMIN_MENU_H
