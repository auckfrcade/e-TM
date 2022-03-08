#include "include/signup.h"

signup::signup(QWidget *parent)
{this->setParent(parent);

    QVBoxLayout *layout = new QVBoxLayout;
    this->setLayout(layout);
    QPushButton *driverSignUpButton = new QPushButton("Driver", this);
    QPushButton *cargoownerSignUpButton = new QPushButton("Cargo Owner", this);
    QPushButton *companySignUpButton = new QPushButton("Transportation Company", this);

    layout->addWidget(driverSignUpButton);
    layout->addWidget(cargoownerSignUpButton);
    layout->addWidget(companySignUpButton);

}


