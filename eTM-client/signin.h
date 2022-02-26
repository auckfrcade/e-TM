#ifndef SIGNIN_H
#define SIGNIN_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QRegularExpression>

class signIn : public QWidget
{
    Q_OBJECT
public:
    signIn(QWidget *parent);
     QPushButton *signupButton = new QPushButton("Sign Up", this);
     QPushButton *submitButton = new QPushButton("Submit", this);
     QLineEdit *usernameTextBox = new QLineEdit();
       QLabel *usernameLabel = new QLabel("Username", this);
};

#endif // SIGNIN_H
