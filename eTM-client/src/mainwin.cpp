#include "include/mainwin.h"

mainwin::mainwin()
{

        mySignIn = new signin(this);
        mySignUp = new signup(this);
        myDriverSignUp = new driversignup(this);
        switchTab();
        myDriverSignUp->setVisible(false);
        myButton->setGeometry(350,350,50,50);

        mySignIn->setGeometry(100, 100, 200, 200);
        mySignUp->setGeometry(100,100,200,200);
        myDriverSignUp->setGeometry(100,100,200,200);
        connect(myButton, SIGNAL(clicked()), this, SLOT(switchTab()));
        connect(mySignUp->driverSignUpButton, SIGNAL(clicked()), this, SLOT(newDriver()));
}

void mainwin::switchTab()
    {mySignIn->setVisible(!switchFlag);
     mySignUp->setVisible(switchFlag);
     switchFlag = !switchFlag;}
void mainwin::newDriver()
{
    mySignUp->setVisible(false);
    myDriverSignUp->setVisible(true);
}
