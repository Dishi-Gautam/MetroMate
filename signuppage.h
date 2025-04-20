#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>
#include <QPushButton>

class SignupPage : public QWidget {
    Q_OBJECT  // This is essential for Qt signal/slot system

public:
    explicit SignupPage(QWidget *parent = nullptr);
    QPushButton* getSignupButton() const;

signals:
    void goBackToWelcomePage();  // Declare the signal to go back to the welcome page

private:
    QPushButton *signupBtn;  // Signup button
};

#endif // SIGNUPPAGE_H
