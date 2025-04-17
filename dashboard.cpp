#include "dashboard.h"
#include "routespage.h"
#include <QVBoxLayout>
#include <QPushButton>

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    routesButton = new QPushButton("Routes", this);
    layout->addWidget(routesButton);
    connect(routesButton, &QPushButton::clicked, this, [this]() {
        routesPage = new RoutesPage;
        routesPage->show();
    });
}
