#include "dashboard.h"
#include "farepage.h"
#include "routespage.h"
#include <QVBoxLayout>
#include <QPushButton>

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    fareButton = new QPushButton("Fare", this);
    routesButton = new QPushButton("Routes", this);

    layout->addWidget(fareButton);
    layout->addWidget(routesButton);

    connect(fareButton, &QPushButton::clicked, this, [this]() {
        farePage = new FarePage;
        farePage->show();
    });

    connect(routesButton, &QPushButton::clicked, this, [this]() {
        routesPage = new RoutesPage;
        routesPage->show();
    });
}
