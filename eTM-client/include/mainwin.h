#ifndef MAINWIN_H
#define MAINWIN_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include "signin.h"
#include "signup.h"
#include "driversignup.h"

class mainwin : public QWidget
{
    Q_OBJECT
public:
    mainwin();
    signin *mySignIn;
    signup *mySignUp;
    driversignup *myDriverSignUp;
    bool switchFlag = false;
    QPushButton *myButton = new QPushButton("switch", this);

public slots:
    void switchTab();
    void newDriver();
};

#endif // MAINWIN_H


