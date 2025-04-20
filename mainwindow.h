#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

#include "welcomepage.h"
#include "loginpage.h"
#include "signuppage.h"
#include "farepage.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QStackedWidget *stack;
    WelcomePage *welcomePage;
    LoginPage *loginPage;
    SignupPage *signupPage;
    FarePage *farePage;

private slots:
    void showLoginPage();
    void showSignupPage();
    void showFarePage();
};

#endif // MAINWINDOW_H
