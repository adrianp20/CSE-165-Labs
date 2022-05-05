#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QOpenGLWindow()
{

    /*
     * Sets the surfaceType of the window.
     * Specifies whether the window is meant for raster rendering with QBackingStore,
     * or OpenGL rendering with QOpenGLContext.
     */
    setSurfaceType(QWindow::OpenGLSurface);

    /*
     * QSurfaceFormat class represents the format of a QSurface.
     * The QSurface class is an abstraction of renderable surfaces in Qt
     */
    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CompatibilityProfile); //Sets the desired OpenGL context profile.
    format.setVersion(2,1); //Sets the desired major and minor OpenGL versions.
    setFormat(format);

    context = new QOpenGLContext;
    context->setFormat(format);
    context->create(); // create context
    context->makeCurrent(this);

    openGLFunctions = context->functions();

}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    resizeGL(this->width(),this->height());
}

void MainWindow::resizeGL(int w, int h)
{
    /*
     * glMatrixMode sets the current matrix mode. mode can assume one of four values:
     * GL_MODELVIEW: Applies subsequent matrix operations to the modelview matrix stack.
     * GL_PROJECTION:Applies subsequent matrix operations to the projection matrix stack.
     * GL_TEXTURE: Applies subsequent matrix operations to the texture matrix stack.
     * GL_COLOR: Applies subsequent matrix operations to the color matrix stack.
     */
    glMatrixMode(GL_PROJECTION);

    //glLoadIdentity() replace the current matrix with the identity matrix
    glLoadIdentity();

    //The viewport is the user visible area.glViewport(x,y,w,h) sets the viewport
    glViewport(0,0,w,h);

    qreal aspectratio = qreal(w)/qreal(h);

    /* glOrtho — multiply the current matrix with an orthographic matrix
     * describes a transformation that produces a parallel projection
     */
    glOrtho(-1*aspectratio, 1*aspectratio,-1,1,1,-1);

}

void MainWindow::paintGL()
{
    //removing previous frame
    // glClearColor() specify clear values for the color buffers
    //glClearColor(0.5f,0.5f,0.5f,0.0f); // set background to grey
    glClearColor(1.0, 0.0f, 0.0f, 0.0f); // red

    //clear buffers to preset values.
    //GL_COLOR_BUFFER_BIT: Indicates the buffers currently enabled for color writing.
    glClear(GL_COLOR_BUFFER_BIT);

    //Draw a quad
    glBegin(GL_QUADS);

    // vertex should be given in anti-clockwise order
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.5f,-0.5f);
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.5f,-0.5f);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.5f,0.5f);
    glColor3f(1.0f,0.5f,0.0f);
    glVertex2f(-0.5f,0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(-0.4f, -0.4f);
    glColor3f(1.0, 0.0f, 0.0f);

    glVertex2f(0.8f, -0.1f);
    glColor3f(0.0, 1.0f, 0.0f);

    glVertex2f(-0.1f, -0.8f);
    glColor3f(0.0, 0.0f, 1.0f);

    glEnd();

    /* glFlush() forces all the issued command to be executed
    *  as quickly as they are accepted by rendering engine
    */
    glFlush();

}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    resizeGL(this->width(),this->height());
    this->update();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    paintGL();
}

