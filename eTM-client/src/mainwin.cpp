#include "mainwin.h"

mainwin::mainwin()
{
        mySignIn = new signin(this);
        mySignUp = new signup(this);
        switchTab();

        myButton->setGeometry(250,250,50,50);
        connect(myButton, SIGNAL(clicked()), this, SLOT(switchTab()));
}




void mainwin::switchTab()
    {mySignIn->setVisible(!switchFlag);
     mySignUp->setVisible(switchFlag);
     switchFlag = !switchFlag;}
