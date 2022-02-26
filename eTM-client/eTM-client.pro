QT += \
    network \
    widgets

HEADERS += \
    include/mainwin.h \
    include/signin.h \
    include/signup.h \
    include/sockettest.h

SOURCES += \
    src/main.cpp \
    src/mainwin.cpp \
    src/signin.cpp \
    src/signup.cpp \
    src/sockettest.cpp

INCLUDEPATH += \
    headers/ include \

OBJECTS_DIR = $$_PRO_FILE_PWD_/bin/
DESTDIR = $$_PRO_FILE_PWD_/bin/
