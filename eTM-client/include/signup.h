#ifndef SIGNUP_H
#define SIGNUP_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>

class signup  : public QWidget
{
    Q_OBJECT
public:
    signup(QWidget *parent);
    QPushButton *driverSignUpButton;
};

#endif // SIGNUP_H
