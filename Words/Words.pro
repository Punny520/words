#-------------------------------------------------
#
# Project created by QtCreator 2022-06-24T09:34:36
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += core gui network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Words
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        word_start_window.cpp \
    word_main_meun.cpp \
    word_login_window.cpp \
    word_register_window.cpp \
    word_training_leve.cpp \
    word_training_kind.cpp \
    word_choose.cpp \
    qtsql.cpp \
    word_choose_training.cpp \
    getrand.cpp \
    word_summary.cpp \
    word_spell_training.cpp \
    word_test.cpp \
    word_words_book.cpp \
    myinf.cpp \
    something_in_need.cpp \
    word_admin.cpp \
    word_admin_menu.cpp \
    word_password_change.cpp \
    cnetworkdetectionthread.cpp \
    widget.cpp

HEADERS += \
        word_start_window.h \
    word_main_meun.h \
    word_login_window.h \
    word_register_window.h \
    word_training_leve.h \
    word_training_kind.h \
    word_choose.h \
    qtsql.h \
    word_choose_training.h \
    getrand.h \
    word_summary.h \
    word_spell_training.h \
    word_test.h \
    word_words_book.h \
    myinf.h \
    something_in_need.h \
    word_admin.h \
    word_admin_menu.h \
    word_password_change.h \
    cnetworkdetectionthread.h \
    widget.h

FORMS += \
        word_start_window.ui \
    word_main_meun.ui \
    word_login_window.ui \
    word_register_window.ui \
    word_training_leve.ui \
    word_training_kind.ui \
    word_choose.ui \
    word_choose_training.ui \
    word_summary.ui \
    word_spell_training.ui \
    word_test.ui \
    word_words_book.ui \
    myinf.ui \
    word_admin.ui \
    word_admin_menu.ui \
    word_password_change.ui \
    widget.ui

RESOURCES += \
    word_res.qrc
