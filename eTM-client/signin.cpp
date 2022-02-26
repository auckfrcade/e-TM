#include "signin.h"

signIn::signIn(QWidget *parent)
    {this->setParent(parent);
     QVBoxLayout *layout = new QVBoxLayout;
      this->setLayout(layout);
    //QLabel *myLabel = new QLabel("Hello", this);


     QLabel *passwordLabel = new QLabel("Password", this);
     QLineEdit *passwordTextBox = new QLineEdit();


     passwordTextBox->setEchoMode(QLineEdit::Password);
      layout->addWidget(usernameLabel);
      layout->addWidget(usernameTextBox);
      layout->addWidget(passwordLabel);
      layout->addWidget(passwordTextBox);
      layout->addWidget(submitButton);
      layout->addWidget(signupButton);

   }
