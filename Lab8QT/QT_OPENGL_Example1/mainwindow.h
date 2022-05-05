#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QOpenGLWindow>
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <QtOpenGL>
#include <glfw//Users/adrianposadas/Desktop/Labs/Lab8QT/QT_OPENGL_Example1>
//#include <GL/glu.h>

class MainWindow : public QOpenGLWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    //initializeGL() function should set up any required OpenGL resources and state
    virtual void initializeGL();
    //resizeGL() function is called whenever the widget has been resized
    virtual void resizeGL(int w, int h);
    // paintGL() is called whenever the window contents needs to be painted
    virtual void paintGL();

    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    /*
     * An OpenGL context represents many things.
     * A context stores all of the state associated with this instance of OpenGL.
    */
    QOpenGLContext *context;
    //QOpenGLFunctions provides cross-platform access to the OpenGL ES 2.0 API
    QOpenGLFunctions *openGLFunctions;


};
#endif // MAINWINDOW_H
