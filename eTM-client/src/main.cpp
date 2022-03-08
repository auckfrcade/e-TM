#include <QCoreApplication>
#include <QApplication>
#include <QtWidgets>
#include "include/sockettest.h"
#include "include/mainwin.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    //SocketTest cTest;
    //cTest.Connect();
//    qDebug() << cTest.ReadDB("drivers");

    QApplication b(argc, argv);
    mainwin *myWin = new mainwin();
    myWin->setFixedWidth(400);
    myWin->setFixedHeight(400);
    myWin->show();
    return b.exec();
    //return a.exec();
}

