#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    stack = new QStackedWidget(this);

    welcomePage = new WelcomePage;
    loginPage = new LoginPage;
    signupPage = new SignupPage;
    farePage = new FarePage;

    stack->addWidget(welcomePage);
    stack->addWidget(loginPage);
    stack->addWidget(signupPage);
    stack->addWidget(farePage);

    setCentralWidget(stack);
    setFixedSize(600, 500);

    connect(welcomePage->getLoginButton(), &QPushButton::clicked, this, &MainWindow::showLoginPage);
    connect(welcomePage->getSignupButton(), &QPushButton::clicked, this, &MainWindow::showSignupPage);

    connect(loginPage->getLoginButton(), &QPushButton::clicked, this, &MainWindow::showFarePage);
    connect(signupPage->getSignupButton(), &QPushButton::clicked, this, &MainWindow::showFarePage);
}

MainWindow::~MainWindow() {}

void MainWindow::showLoginPage() {
    stack->setCurrentWidget(loginPage);
}

void MainWindow::showSignupPage() {
    stack->setCurrentWidget(signupPage);
}

void MainWindow::showFarePage() {
    stack->setCurrentWidget(farePage);
}
