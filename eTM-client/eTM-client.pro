QT += \
    network \
    widgets

HEADERS += \
    driversignup.h \
    include/sockettest.h \
    mainwin.h \
    signin.h \
    signup.h

SOURCES += \
    driversignup.cpp \
    mainwin.cpp \
    signin.cpp \
    signup.cpp \
    src/main.cpp \
    src/sockettest.cpp

INCLUDEPATH += \
    headers/ include \

OBJECTS_DIR = $$_PRO_FILE_PWD_/bin/
DESTDIR = $$_PRO_FILE_PWD_/bin/
