#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QOpenGLWindow()
{
    setSurfaceType(QWindow::OpenGLSurface);

    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);

    context = new QOpenGLContext;
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);

    openGLFunctions = context->functions();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(UpdateAnimation()));
    timer->start(100);
    rotation = 0;

}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    //glEnable — enable or disable server-side GL capabilities
    glEnable(GL_DEPTH_TEST);
    resizeGL(this->width(),this->height());
}

void MainWindow::resizeGL(int w, int h)
{
    //set viewport
    glViewport(0,0,w,h);
    qreal aspectratio = qreal(w)/qreal(h);

    //initialize projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /* Sets up a perspective projection matrix
     * void gluPerspective(	GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
     * fovy: Specifies the field of view angle, in degrees, in the y direction.
     * aspect: Specifies the aspect ratio that determines the field of view.
     * zNear: Specifies the distance from the viewer to the near clipping plane (always positive)
     * zfar: Specifies the distance from the viewer to the far clipping plane (always positive).
     */
    gluPerspective(75,aspectratio, 0.1, 400000000);

    //initialize modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MainWindow::paintGL()
{
    //removing previous frame
    glClearColor(0.5f,0.5f,0.5f,1.f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Reset modelview matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //3D transformation

    glTranslatef(0.0f,0.0f,0.5f);
    glRotatef(rotation,1.0f,1.0f,1.0f);

    // FRONT
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f); //red
        glVertex3f( 0.5f, -0.5f, -0.5f);
        glVertex3f(0.5f, 0.5f, -0.5f);
        glVertex3f(-0.5f, 0.5f, -0.5f);
        glVertex3f(-0.5f, -0.5f, -0.5f);
     glEnd();

     // BACK
     glBegin(GL_POLYGON);
        glColor3f(0.0f, 1.0f, 0.0f); //Blue
        glVertex3f(0.5f, -0.5f, 0.5f);
        glVertex3f(0.5f, 0.5f, 0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);
        glVertex3f(-0.5f, -0.5f, 0.5f);
    glEnd();

        // RIGHT
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); //Green
        glVertex3f(0.5f, -0.5f, -0.5f);
        glVertex3f(0.5f, 0.5f, -0.5f);
        glVertex3f(0.5f, 0.5f, 0.5f);
        glVertex3f(0.5f, -0.5f, 0.5f);
    glEnd();

        // LEFT
     glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.0f); //yellow
        glVertex3f(-0.5f, -0.5f, 0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);
        glVertex3f(-0.5f, 0.5f, -0.5f);
        glVertex3f(-0.5f, -0.5f, -0.5f);
     glEnd();

     // TOP
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.5f, 0.0f); //orange
        glVertex3f(0.5f, 0.5f, 0.5f);
        glVertex3f(0.5f, 0.5f, -0.5f);
        glVertex3f(-0.5f, 0.5f, -0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);
    glEnd();

    // BOTTOM
   glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.5f, 0.5f); // dark green
       glVertex3f(0.5f, -0.5f, -0.5f);
       glVertex3f(0.5f, -0.5f, 0.5f);
       glVertex3f(-0.5f, -0.5f, 0.5f);
       glVertex3f(-0.5f, -0.5f, -0.5f);
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

void MainWindow::UpdateAnimation()
{
    rotation+=10;
    this->update();
}

