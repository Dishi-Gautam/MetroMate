#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QPushButton>

class LoginPage : public QWidget {
    Q_OBJECT // This is necessary for the signal/slot mechanism

public:
    LoginPage(QWidget *parent = nullptr);  // Constructor
    QPushButton* getLoginButton() const;  // Getter for the login button

signals:
    // Declare the signal here
    void goBackToWelcomePage();  // Signal to go back to WelcomePage

private:
    QPushButton *loginBtn;  // Login button
};

#endif // LOGINPAGE_H
