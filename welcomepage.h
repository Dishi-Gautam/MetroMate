#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>

class QPushButton;

class WelcomePage : public QWidget {
    Q_OBJECT

public:
    WelcomePage(QWidget *parent = nullptr);

signals:
    void goToDashboard();

private:
    QPushButton *enterButton;
};

#endif // WELCOMEPAGE_H
