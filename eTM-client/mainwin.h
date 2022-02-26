#ifndef MAINWIN_H
#define MAINWIN_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

#include "signin.h"
#include "signup.h"
#include "driversignup.h"

class mainWin : public QWidget
{
    Q_OBJECT

public:
    mainWin();
    signIn *mySignIn;
    signUp *mySignUp;
    driversignup *mydriversignup;
    bool switchFlag = false;
    bool switchFlag2 = false;
    //QPushButton *myButton = new QPushButton("switch", this);

public slots:
    void switchTab();
    void switchTab2();
    void Checkun();
};

#endif // MAINWIN_H

