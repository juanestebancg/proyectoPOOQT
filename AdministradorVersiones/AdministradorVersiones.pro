#-------------------------------------------------
#
# Project created by QtCreator 2018-06-06T06:09:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdministradorVersiones
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Controlador.cpp \
    Programa.cpp \
    Subversion.cpp \
    Version.cpp

HEADERS  += mainwindow.h \
    Controlador.h \
    Programa.h \
    Subversion.h \
    Version.h

FORMS    += mainwindow.ui

CONFIG  += c++11
