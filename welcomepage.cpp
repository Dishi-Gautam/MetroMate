#include "welcomepage.h"
#include <QVBoxLayout>
#include <QLabel>

WelcomePage::WelcomePage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(30);

    QLabel *title = new QLabel("🚇 Welcome to MetroMate", this);
    title->setStyleSheet("font-size: 26px; font-weight: bold; font-family: 'Segoe UI'; padding: 10px;");
    layout->addWidget(title, 0, Qt::AlignHCenter);

    loginButton = new QPushButton("🔐 Login", this);
    signupButton = new QPushButton("📝 Signup", this);

    QString btnStyle = "font-size: 18px; font-family: 'Segoe UI'; padding: 10px 25px; border-radius: 8px; background-color: #2E8B57; color: white;";
    loginButton->setStyleSheet(btnStyle);
    signupButton->setStyleSheet(btnStyle);

    layout->addWidget(loginButton, 0, Qt::AlignHCenter);
    layout->addWidget(signupButton, 0, Qt::AlignHCenter);
}

QPushButton* WelcomePage::getLoginButton() const {
    return loginButton;
}

QPushButton* WelcomePage::getSignupButton() const {
    return signupButton;
}
