#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QPushButton>

class LoginPage : public QWidget {
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    QPushButton* getLoginButton() const;

private:
    QPushButton *loginBtn;
};

#endif // LOGINPAGE_H
