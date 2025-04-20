QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
    farepage.cpp \
    loginpage.cpp \
=======
    dashboard.cpp \
>>>>>>> 66c730e918da3accf179335aaee7268a415fdc68
    main.cpp \
    mainwindow.cpp \
    routespage.cpp \
    signuppage.cpp \
    welcomepage.cpp

HEADERS += \
<<<<<<< HEAD
    farepage.h \
    loginpage.h \
=======
    dashboard.h \
>>>>>>> 66c730e918da3accf179335aaee7268a415fdc68
    mainwindow.h \
    routespage.h \
    signuppage.h \
    welcomepage.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
