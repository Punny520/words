#include "something_in_need.h"
QtSQL::QtSQL()
{

}
void QtSQL::database_open(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("127.0.0.1");
        db.setPort(3306);
        db.setDatabaseName("account"); //不是Database,记得别填错
        db.setUserName("root");
        db.setPassword("hzq17679034863");
        bool ok = db.open();
        if (!ok){
            QMessageBox::information(NULL, "infor", "link failed");
            qDebug()<<"error open database because"<<db.lastError().text();
        }
}
