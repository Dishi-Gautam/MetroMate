#include "farepage.h"
#include <QVBoxLayout>
#include <QLabel>

FarePage::FarePage(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Fare Page");
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *label = new QLabel("💸 Fare Information Coming Soon!", this);
    layout->addWidget(label);
}
