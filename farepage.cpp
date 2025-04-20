#include "farepage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QTextEdit>

FarePage::FarePage(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Delhi Metro Fare & Route");

    // Main layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setSpacing(20);

    // Title
    QLabel *title = new QLabel("🛤 Plan your Journey", this);
    title->setStyleSheet("font-size: 26px; font-weight: bold; font-family: 'Segoe UI'; padding: 15px;");
    mainLayout->addWidget(title, 0, Qt::AlignHCenter);

    // Station selection layout
    QHBoxLayout *stationLayout = new QHBoxLayout();
    stationLayout->setSpacing(15);

    QLabel *fromLabel = new QLabel("📍 From:", this);
    fromLabel->setStyleSheet("font-size: 16px; font-family: 'Segoe UI';");
    sourceStation = new QComboBox(this);
    sourceStation->addItem("Select Source Station");
    sourceStation->setStyleSheet("font-size: 16px; padding: 5px;");

    QLabel *toLabel = new QLabel("🏁 To:", this);
    toLabel->setStyleSheet("font-size: 16px; font-family: 'Segoe UI';");
    destinationStation = new QComboBox(this);
    destinationStation->addItem("Select Destination Station");
    destinationStation->setStyleSheet("font-size: 16px; padding: 5px;");

    stationLayout->addWidget(fromLabel);
    stationLayout->addWidget(sourceStation);
    stationLayout->addSpacing(30);
    stationLayout->addWidget(toLabel);
    stationLayout->addWidget(destinationStation);
    mainLayout->addLayout(stationLayout);

    // Get Fare & Route Button
    getFareButton = new QPushButton(" Get Fare and Route", this);
    getFareButton->setStyleSheet(
        "font-size: 16px; font-weight: bold; font-family: 'Segoe UI'; "
        "background-color: #1E90FF; color: white; padding: 10px 20px; "
        "border-radius: 8px; margin-top: 30px;"
        );
    mainLayout->addWidget(getFareButton, 0, Qt::AlignCenter);

    // Advanced Filter Dropdown (below button)
    filterDropdown = new QComboBox(this);
    filterDropdown->addItem("🔍 Advanced Filter");
    filterDropdown->addItem("Minimum Interchange");
    filterDropdown->addItem("Minimum Time");
    filterDropdown->addItem("Minimum Distance");
    filterDropdown->setStyleSheet(
        "font-size: 14px; font-family: 'Segoe UI'; padding: 4px 8px; "
        "max-width: 200px; margin-top: -10px;"
        );
    mainLayout->addWidget(filterDropdown, 0, Qt::AlignCenter);

    // Info Labels
    fareLabel = new QLabel("💰 Fare: ₹ --", this);
    timeLabel = new QLabel("⏱ Estimated Time: -- mins", this);
    interchangeLabel = new QLabel("🔁 Interchanges: --", this);

    QString labelStyle = "font-size: 17px; font-family: 'Segoe UI'; padding: 6px;";
    fareLabel->setStyleSheet(labelStyle);
    timeLabel->setStyleSheet(labelStyle);
    interchangeLabel->setStyleSheet(labelStyle);

    mainLayout->addWidget(fareLabel);
    mainLayout->addWidget(timeLabel);
    mainLayout->addWidget(interchangeLabel);

    // Route Label
    QLabel *routeLabel = new QLabel("📌 Route Details:", this);
    routeLabel->setStyleSheet("font-size: 18px; font-weight: 600; font-family: 'Segoe UI'; margin-top: 10px;");
    mainLayout->addWidget(routeLabel);

    // Route Display Box
    routeDisplay = new QTextEdit(this);
    routeDisplay->setReadOnly(true);
    routeDisplay->setPlaceholderText("Stations & interchanges will appear here...");
    routeDisplay->setStyleSheet("font-size: 15px; font-family: 'Segoe UI'; padding: 8px; min-height: 100px;");
    mainLayout->addWidget(routeDisplay);
}
