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
    setStyleSheet("background-color: #1e1e1e; color: #FFFFFF;"); // Dark theme

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setSpacing(20);
    mainLayout->setContentsMargins(30, 30, 30, 30);

    QLabel *title = new QLabel("🛤 Plan Your Journey", this);
    title->setStyleSheet("font-size: 26px; font-weight: bold; font-family: 'Segoe UI'; color: #FFFFFF;");
    mainLayout->addWidget(title, 0, Qt::AlignHCenter);

    // Station input section
    QHBoxLayout *stationLayout = new QHBoxLayout();
    stationLayout->setSpacing(20);

    QLabel *fromLabel = new QLabel("📍 From:", this);
    QLabel *toLabel = new QLabel("🏁 To:", this);
    QString labelStyle = "font-size: 15px; color: white;";

    fromLabel->setStyleSheet(labelStyle);
    toLabel->setStyleSheet(labelStyle);

    sourceStation = new QComboBox(this);
    destinationStation = new QComboBox(this);

    sourceStation->addItem("Select Source Station");
    destinationStation->addItem("Select Destination Station");

    QList<QComboBox*> comboBoxes = {sourceStation, destinationStation};
    for (auto box : comboBoxes) {
        box->setStyleSheet(R"(
            QComboBox {
                font-size: 14px;
                padding: 6px;
                background-color: #333;
                color: white;
                border: 1px solid #555;
                border-radius: 4px;
            }
            QComboBox QAbstractItemView {
                background-color: #333;
                color: white;
                selection-background-color: #555;
            }
        )");
        box->setMinimumWidth(220);
    }

    stationLayout->addWidget(fromLabel);
    stationLayout->addWidget(sourceStation);
    stationLayout->addWidget(toLabel);
    stationLayout->addWidget(destinationStation);
    mainLayout->addLayout(stationLayout);

    // Get Fare button
    getFareButton = new QPushButton("Get Fare and Route", this);
    getFareButton->setStyleSheet(R"(
        QPushButton {
            font-size: 15px;
            font-weight: bold;
            background-color: #4CAF50;
            color: white;
            padding: 10px 20px;
            border-radius: 6px;
        }
        QPushButton:hover {
            background-color: #45a049;
        }
    )");
    mainLayout->addWidget(getFareButton, 0, Qt::AlignCenter);

    // Filter dropdown
    filterDropdown = new QComboBox(this);
    filterDropdown->addItem("🔍 Advanced Filter");
    filterDropdown->addItem("Minimum Interchange");
    filterDropdown->addItem("Minimum Time");
    filterDropdown->addItem("Minimum Distance");
    filterDropdown->setStyleSheet(R"(
        QComboBox {
            font-size: 14px;
            padding: 6px;
            background-color: #333;
            color: white;
            border-radius: 4px;
        }
    )");
    filterDropdown->setMinimumWidth(220);
    mainLayout->addWidget(filterDropdown, 0, Qt::AlignCenter);

    // Info labels
    fareLabel = new QLabel("💰 Fare: ₹ --", this);
    timeLabel = new QLabel("⏱ Estimated Time: -- mins", this);
    interchangeLabel = new QLabel("🔁 Interchanges: --", this);
    QString infoLabelStyle = "font-size: 15px; color: white; padding: 4px;";
    fareLabel->setStyleSheet(infoLabelStyle);
    timeLabel->setStyleSheet(infoLabelStyle);
    interchangeLabel->setStyleSheet(infoLabelStyle);

    mainLayout->addWidget(fareLabel);
    mainLayout->addWidget(timeLabel);
    mainLayout->addWidget(interchangeLabel);

    // Route section
    QLabel *routeLabel = new QLabel("📌 Route Details:", this);
    routeLabel->setStyleSheet("font-size: 17px; font-weight: 600; color: white;");
    mainLayout->addWidget(routeLabel);

    routeDisplay = new QTextEdit(this);
    routeDisplay->setReadOnly(true);
    routeDisplay->setPlaceholderText("Stations & interchanges will appear here...");
    routeDisplay->setStyleSheet("font-size: 14px; background-color: #2a2a2a; color: white; padding: 8px;");
    routeDisplay->setMinimumHeight(100);
    mainLayout->addWidget(routeDisplay);

    // Back button
    backBtn = new QPushButton("Back", this);
    backBtn->setStyleSheet(R"(
        QPushButton {
            font-size: 15px;
            background-color: #FF6347;
            color: white;
            padding: 10px 20px;
            border-radius: 6px;
        }
        QPushButton:hover {
            background-color: #FF4500;
        }
    )");
    mainLayout->addWidget(backBtn, 0, Qt::AlignCenter);

    connect(backBtn, &QPushButton::clicked, this, &FarePage::goBackToWelcomePage);
}
