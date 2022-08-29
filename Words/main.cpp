#include "something_in_need.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Word_start_window w;
    QtSQL t;
    t.database_open();
    w.show();

    return a.exec();
}
