#include "signuppage.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

SignupPage::SignupPage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(20);

    QLabel *title = new QLabel("📝 <span style='color:#2E8B57;'> Signup for MetroMate </span>", this);
    title->setStyleSheet(R"(
        font-size: 24px;
        font-weight: 600;
        font-family: 'Segoe UI';
        padding: 10px;
        color: #333;
    )");
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
    signupBtn->setStyleSheet(R"(
        font-size: 17px;
        font-family: 'Segoe UI';
        padding: 10px 20px;
        background-color: #32CD32;  /* Green background */
        color: white;
        border-radius: 6px;
        transition: background-color 0.3s ease;
        width: 250px; /* Set fixed width */
    )");

    // Button Hover and Press effects
    signupBtn->setStyleSheet(R"(
        QPushButton {
            font-size: 17px;
            font-family: 'Segoe UI';
            padding: 10px 20px;
            background-color: #32CD32;
            color: white;
            border-radius: 6px;
            transition: background-color 0.3s ease;
            width: 250px;
        }
        QPushButton:hover {
            background-color: #28a745;
        }
        QPushButton:pressed {
            background-color: #1e7e34;
        }
    )");

    // Add a Back button
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

    // Connect the back button to emit goBackToWelcomePage signal
    connect(backBtn, &QPushButton::clicked, this, &SignupPage::goBackToWelcomePage);

    layout->addWidget(username);
    layout->addWidget(email);
    layout->addWidget(password);
    layout->addWidget(signupBtn, 0, Qt::AlignHCenter);
     layout->addWidget(backBtn, 0, Qt::AlignHCenter);
}

QPushButton* SignupPage::getSignupButton() const {
    return signupBtn;
}
