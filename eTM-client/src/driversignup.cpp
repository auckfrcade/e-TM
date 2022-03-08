#include "driversignup.h"

driversignup::driversignup(QWidget *parent)
{   this->setParent(parent);
    QVBoxLayout *layout = new QVBoxLayout;
    this->setLayout(layout);

    QLabel *usernameLabel = new QLabel("Username", this);
    QLineEdit *usernameTextBox = new QLineEdit();



    layout->addWidget(usernameLabel);
    layout->addWidget(usernameTextBox);

}
