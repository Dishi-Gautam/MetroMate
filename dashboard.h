#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

class QPushButton;
class RoutesPage;

class Dashboard : public QWidget {
    Q_OBJECT

public:
    Dashboard(QWidget *parent = nullptr);

private:
    QPushButton *routesButton;
    RoutesPage *routesPage;
};

#endif // DASHBOARD_H
