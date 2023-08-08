QT += core gui \
    sql
    sqlite
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    container.cpp \
    controller.cpp \
    database.cpp \
    film.cpp \
    libro.cpp \
    main.cpp \
    messaggi.cpp \
    musica.cpp \
    oggetto.cpp \
    premi.cpp \
    storico.cpp \
    utente.cpp \
    v_app_a.cpp \
    v_app_u.cpp \
    v_imp_utente.cpp \
    v_login.cpp \
    v_main.cpp

HEADERS += \
    container.h \
    controller.h \
    database.h \
    film.h \
    libro.h \
    messaggi.h \
    musica.h \
    oggetto.h \
    premi.h \
    storico.h \
    utente.h \
    v_app_a.h \
    v_app_u.h \
    v_imp_utente.h \
    v_login.h \
    v_main.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    res.qrc
