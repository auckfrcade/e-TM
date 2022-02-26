#include "mainwin.h"

mainWin::mainWin()
    {
    mySignIn = new signIn(this);
    mySignUp = new signUp(this);

    switchTab();
    //switchTab2();
    //myButton->setGeometry(25,50,50,50);
    //connect(mySignUp->driverButton, SIGNAL(clicked()), this, SLOT(switchTab()));
    connect(mySignIn->signupButton, SIGNAL(clicked()), this, SLOT(switchTab()));
    connect(mySignUp->driverButton, SIGNAL(clicked()), this, SLOT(switchTab2()));
    connect(mySignIn->submitButton, SIGNAL(clicked()), this, SLOT(Checkun()));
}
void mainWin::Checkun()
{QRegularExpression username("[a-z]");
    QRegularExpressionMatch match = username.match(mySignIn->usernameTextBox->text());
    if(match.hasMatch()){
        mySignIn->usernameLabel->setText("Correct Details");
    }
    else{
        mySignIn->usernameLabel->setText("Incorrect Details");
    }
}
void mainWin::switchTab()
    {mySignIn->setVisible(!switchFlag);
     mySignUp->setVisible(switchFlag);
     //myButton->setVisible(!switchFlag);
     switchFlag = !switchFlag;}

void mainWin::switchTab2()
{

    mySignUp->setVisible(switchFlag2);
    mydriversignup = new driversignup(this);
    mydriversignup->setVisible(!switchFlag2);
    switchFlag2 = !switchFlag2;
}
