#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include<QCryptographicHash>//md5加密的库
#include<QDebug>
#include<QtNetwork>
#include<QJsonObject>
#include<QJsonDocument>
#include<QDesktopServices>
#include<QAction>
#include"CNetworkDetectionThread.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


private slots:

    void chinese_butt();//翻译中文

    void english_butt();//翻译英文

    int function_data();//翻译

    void back();

    int replyFinished(QNetworkReply *reply);//获得翻译返回的结果

    /*
     * onNetworkStatus  动态检测网络状态线程信号函数
     * nRet             检测结果0网络正常 1网络掉线
     * cStatus          检测结果中文
     */
    void onNetworkStatus(int nRet,QString cStatus);
private:
    Ui::Widget *ui;
    QString from;
    QString to;
    CNetworkDetectionThread * m_NetworkDetectionThread;
    QNetworkAccessManager * m_Manager;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WIDGET_H
