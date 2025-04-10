#include "routespage.h"
#include <QVBoxLayout>
#include <QLabel>

RoutesPage::RoutesPage(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Routes Page");
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *label = new QLabel("🗺️ Routes Information Coming Soon!", this);
    layout->addWidget(label);
}
