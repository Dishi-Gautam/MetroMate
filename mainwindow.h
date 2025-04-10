#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "welcomepage.h"
#include "dashboard.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    WelcomePage *welcomePage;
    Dashboard *dashboard;

private slots:
    void showDashboard();
};

#endif // MAINWINDOW_H
