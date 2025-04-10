#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

class QPushButton;
class FarePage;
class RoutesPage;

class Dashboard : public QWidget {
    Q_OBJECT

public:
    Dashboard(QWidget *parent = nullptr);

private:
    QPushButton *fareButton;
    QPushButton *routesButton;
    FarePage *farePage;
    RoutesPage *routesPage;
};

#endif // DASHBOARD_H
