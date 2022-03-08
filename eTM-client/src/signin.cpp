#include "include/signin.h"


signin::signin(QWidget *parent)
    {this->setParent(parent);

    QVBoxLayout *layout = new QVBoxLayout;
    this->setLayout(layout);

    QLabel *usernameLabel = new QLabel("Username", this);
    QLineEdit *usernameTextBox = new QLineEdit();
    QLabel *passwordLabel = new QLabel("Password", this);
     QLineEdit *passwordTextBox = new QLineEdit();
     QPushButton *submitButton = new QPushButton("Sign Up", this);
     QPushButton *signupButton = new QPushButton("Submit", this);


    layout->addWidget(usernameLabel);
    layout->addWidget(usernameTextBox);
    layout->addWidget(passwordLabel);
     layout->addWidget(passwordTextBox);
     layout->addWidget(submitButton);
     layout->addWidget(signupButton);

    }
