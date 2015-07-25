TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sha256.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    sha256.h

