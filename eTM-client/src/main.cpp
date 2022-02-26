#include <QCoreApplication>
#include "sockettest.h"
#include <QApplication>
#include <QtWidgets>
#include "mainwin.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SocketTest cTest;
    cTest.Connect();
//    qDebug() << cTest.ReadDB("drivers");
    mainWin *myWin = new mainWin();
    myWin->setFixedWidth(500);
    myWin->setFixedHeight(500);
    myWin->show();
    return a.exec();
}
