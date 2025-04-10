#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    welcomePage = new WelcomePage(this);
    setCentralWidget(welcomePage);

    connect(welcomePage, &WelcomePage::goToDashboard, this, &MainWindow::showDashboard);
}

MainWindow::~MainWindow() {}

void MainWindow::showDashboard() {
    dashboard = new Dashboard(this);
    setCentralWidget(dashboard);
}
