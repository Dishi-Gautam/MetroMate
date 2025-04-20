QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    farepage.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    routespage.cpp \
    signuppage.cpp \
    welcomepage.cpp

HEADERS += \
    farepage.h \
    loginpage.h \
    mainwindow.h \
    routespage.h \
    signuppage.h \
    welcomepage.h

FORMS += \
    mainwindow.ui
