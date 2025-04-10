#include "welcomepage.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

WelcomePage::WelcomePage(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("🚇 Welcome to MetroMate", this);
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(20);
    label->setFont(font);

    enterButton = new QPushButton("Enter Dashboard", this);
    layout->addWidget(label);
    layout->addWidget(enterButton);

    connect(enterButton, &QPushButton::clicked, this, &WelcomePage::goToDashboard);
}
