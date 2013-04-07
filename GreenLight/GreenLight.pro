#-------------------------------------------------
#
# Project created by QtCreator 2013-04-02T22:37:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GreenLight
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    light.cpp \
    coordinates.cpp

HEADERS  += mainwindow.h \
    light.h \
    coordinates.h

FORMS    += mainwindow.ui
