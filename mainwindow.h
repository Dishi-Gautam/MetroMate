#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

class WelcomePage;
class LoginPage;
class SignupPage;
class FarePage;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showLoginPage();
    void showSignupPage();
    void showFarePage();
    void showWelcomePage();  // ✅ This line was missing

private:
    QStackedWidget *stack;
    WelcomePage *welcomePage;
    LoginPage *loginPage;
    SignupPage *signupPage;
    FarePage *farePage;
};

#endif // MAINWINDOW_H
