#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>
#include <QPushButton>

class SignupPage : public QWidget {
    Q_OBJECT  // <- This is essential for Qt signal/slot system

public:
    explicit SignupPage(QWidget *parent = nullptr);
    QPushButton* getSignupButton() const;

private:
    QPushButton *signupBtn;
};

#endif // SIGNUPPAGE_H
