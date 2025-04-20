#include "signuppage.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>

SignupPage::SignupPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(20);

    QLabel *title = new QLabel("📝 Signup for MetroMate", this);
    title->setStyleSheet("font-size: 24px; font-weight: bold; font-family: 'Segoe UI'; padding: 10px;");
    layout->addWidget(title, 0, Qt::AlignHCenter);

    QLineEdit *username = new QLineEdit(this);
    username->setPlaceholderText("Choose Username");
    username->setStyleSheet("font-size: 16px; padding: 8px;");

    QLineEdit *email = new QLineEdit(this);
    email->setPlaceholderText("Enter Email");
    email->setStyleSheet("font-size: 16px; padding: 8px;");

    QLineEdit *password = new QLineEdit(this);
    password->setPlaceholderText("Create Password");
    password->setEchoMode(QLineEdit::Password);
    password->setStyleSheet("font-size: 16px; padding: 8px;");

    signupBtn = new QPushButton("Signup", this);
    signupBtn->setStyleSheet("font-size: 17px; font-family: 'Segoe UI'; padding: 10px 20px; background-color: #32CD32; color: white; border-radius: 6px;");

    layout->addWidget(username);
    layout->addWidget(email);
    layout->addWidget(password);
    layout->addWidget(signupBtn, 0, Qt::AlignHCenter);
}

QPushButton* SignupPage::getSignupButton() const {
    return signupBtn;
}
