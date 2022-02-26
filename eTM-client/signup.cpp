#include "signup.h"

signUp::signUp(QWidget *parent)
    {this->setParent(parent);
     parent->setFixedWidth(500);
      parent->setFixedHeight(500);

     QGridLayout *layout = new QGridLayout;

      layout->setAlignment(Qt::AlignHCenter);
       //layout->move()(rect().center());
      this->setLayout(layout);

     //QPushButton *driverButton = new QPushButton("Driver", this);
     QPushButton *cargoownerButton = new QPushButton("Cargo Owner", this);
     QPushButton *companyButton = new QPushButton("Transportation Company", this);
     layout->addWidget(driverButton);
     layout->addWidget(cargoownerButton);
     layout->addWidget(companyButton);
    }
