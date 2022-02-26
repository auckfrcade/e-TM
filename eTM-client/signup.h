#ifndef SIGNUP_H
#define SIGNUP_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QBoxLayout>

class signUp : public QWidget
{
    Q_OBJECT
public:
    signUp(QWidget *parent);
     QPushButton *driverButton = new QPushButton("Driver", this);
    //QPushButton *driverButton = new QPushButton("Driver", this);
};

#endif // SIGNUP_H
