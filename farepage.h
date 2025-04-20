#ifndef FAREPAGE_H
#define FAREPAGE_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

class FarePage : public QWidget {
    Q_OBJECT

public:
    FarePage(QWidget *parent = nullptr);

private:
    QComboBox *sourceStation;
    QComboBox *destinationStation;
    QComboBox *filterDropdown;

    QPushButton *getFareButton;

    QLabel *fareLabel;
    QLabel *timeLabel;
    QLabel *interchangeLabel;

    QTextEdit *routeDisplay;
};

#endif // FAREPAGE_H
