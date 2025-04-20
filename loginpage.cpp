#include "loginpage.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(20);

    QLabel *title = new QLabel("🔐 Login to MetroMate", this);
    title->setStyleSheet("font-size: 24px; font-weight: bold; font-family: 'Segoe UI'; padding: 10px;");
    layout->addWidget(title, 0, Qt::AlignHCenter);

    QLineEdit *username = new QLineEdit(this);
    username->setPlaceholderText("Enter Username");
    username->setStyleSheet("font-size: 16px; padding: 8px;");

    QLineEdit *password = new QLineEdit(this);
    password->setPlaceholderText("Enter Password");
    password->setEchoMode(QLineEdit::Password);
    password->setStyleSheet("font-size: 16px; padding: 8px;");

    loginBtn = new QPushButton("Login", this);
    loginBtn->setStyleSheet("font-size: 17px; font-family: 'Segoe UI'; padding: 10px 20px; background-color: #1E90FF; color: white; border-radius: 6px;");

    layout->addWidget(username);
    layout->addWidget(password);
    layout->addWidget(loginBtn, 0, Qt::AlignHCenter);
}

QPushButton* LoginPage::getLoginButton() const {
    return loginBtn;
}
