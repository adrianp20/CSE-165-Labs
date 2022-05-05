#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T13:59:13
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MYGL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    my_gl.cpp

HEADERS  += mainwindow.h \
         /opt/homebrew/Cellar/glfw/3.3.6/include/GLFW \
    freeglut.h \
    freeglut_ext.h \
    freeglut_std.h \
    freeglut_ucall.h \
    glut.h \
    my_gl.h

FORMS    += mainwindow.ui
QT += core gui opengl widgets
#LIBS    += -l/opt/homebrew/Cellar/glfw/3.3.6/libglfw.3.3.dylib
#LIBS += -l/opt//usr/local/Cellar/freeglut/3.2.2
