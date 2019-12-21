#-------------------------------------------------
#
# Project created by QtCreator 2016-12-23T20:04:07
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT+=opengl


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChartShow_new
TEMPLATE = app


SOURCES += main.cpp\
        chartshow.cpp \
    tthread.cpp \
    mousefilter.cpp \
    ChartGL.cpp

HEADERS  += chartshow.h \
    tthread.h \
    mousefilter.h \
    ChartGL.h \
    perevorot.h

FORMS    += chartshow.ui

RESOURCES += \
    resources.qrc
