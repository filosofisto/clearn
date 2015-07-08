TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += /usr/include/c++/5.1.1

SOURCES += main.cpp \
    stack.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    stack.h

