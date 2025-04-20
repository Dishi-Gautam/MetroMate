#include "loginpage.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QGraphicsDropShadowEffect>

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
{
    setStyleSheet("background-color: #f4f4f4;");

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(20);
    layout->setContentsMargins(40, 60, 40, 60);

    QLabel *title = new QLabel("🔐 <span style='color:#2E8B57;'> Login to MetroMate </span>", this);
    title->setStyleSheet(R"(
        font-size: 26px;
        font-weight: 600;
        font-family: 'Segoe UI';
        padding: 10px;
        color: #333;
    )");
    layout->addWidget(title, 0, Qt::AlignHCenter);

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(12);
    shadow->setOffset(3, 3);
    shadow->setColor(QColor(0, 0, 0, 120));
    title->setGraphicsEffect(shadow);

    QLineEdit *username = new QLineEdit(this);
    username->setPlaceholderText("Enter Username");
    username->setStyleSheet(R"(
        font-size: 16px;
        padding: 8px;
        border-radius: 5px;
        background-color: #3a3a3a;
        color: #ffffff;
        border: 1px solid #666;
    )");
    layout->addWidget(username);

    QLineEdit *password = new QLineEdit(this);
    password->setPlaceholderText("Enter Password");
    password->setEchoMode(QLineEdit::Password);
    password->setStyleSheet(R"(
        font-size: 16px;
        padding: 8px;
        border-radius: 5px;
        background-color: #3a3a3a;
        color: #ffffff;
        border: 1px solid #666;
    )");
    layout->addWidget(password);

    loginBtn = new QPushButton("Login", this);
    loginBtn->setStyleSheet(R"(
        font-size: 17px;
        font-family: 'Segoe UI';
        padding: 10px 20px;
        background-color: #2E8B57;
        color: white;
        border-radius: 8px;
        border: none;
        transition: background-color 0.3s ease;
        width: 250px;
    )");
    loginBtn->setMaximumWidth(250);
    layout->addWidget(loginBtn, 0, Qt::AlignHCenter);

    // Add back button
    QPushButton *backBtn = new QPushButton("Back", this);
    backBtn->setStyleSheet(R"(
        font-size: 17px;
        font-family: 'Segoe UI';
        padding: 10px 20px;
        background-color: #FF6347;
        color: white;
        border-radius: 8px;
        border: none;
        transition: background-color 0.3s ease;
        width: 250px;
    )");
    backBtn->setMaximumWidth(250);
    layout->addWidget(backBtn, 0, Qt::AlignHCenter);

    connect(backBtn, &QPushButton::clicked, this, &LoginPage::goBackToWelcomePage);
}

QPushButton* LoginPage::getLoginButton() const {
    return loginBtn;
}
