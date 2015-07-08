TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    container.cpp \
    vectorcontainer.cpp \
    vector.cpp \
    listcontainer.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    container.h \
    vectorcontainer.h \
    vector.h \
    listcontainer.h

