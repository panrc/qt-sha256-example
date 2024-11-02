#-------------------------------------------------
#
# Project created by QtCreator 2024-11-02T09:39:13
#
#-------------------------------------------------

QT       += core gui

TARGET = testsha256
TEMPLATE = app

SOURCES += main.cpp \
           mainwindow.cpp \
           sha256.c \
           sha256wrapper.cpp

HEADERS  += mainwindow.h \
            sha256.h \
            sha256wrapper.h

FORMS    += mainwindow.ui
