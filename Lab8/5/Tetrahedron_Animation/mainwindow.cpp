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

    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(UpdateAnimation()));

    timer -> start(100);

    rotation = 0;

}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    glEnable(GL_DEPTH_TEST);

    resizeGL(this->width(),this->height());
}

void MainWindow::resizeGL(int w, int h)
{
    // set the viewport
    glViewport(0,0,w,h);
    qreal aspectratio = qreal(w) / qreal(h);

    // initialize projection matrix

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //gluPerspective(75, aspectratio, 0.1, 400000000);
    gluPerspective(70, w / h, 1, 1000);


    // initialize Model View Matrix

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MainWindow::paintGL()
{

    glClearColor(0.39f, 0.58f, 0.93f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // reset model view matrix

    // glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // 3D Transformation

    glTranslatef(0.0, 0.0, -3);
   // glRotatef(rotation, 1.0, 1.0, 1.0);
    glRotatef(rotation, 0.0f, 1.0f, 0.0f);

    //glBegin(GL_TRIANGLES);

//    // front tri
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(1.0f, -1.0f, 1.0f);
//    glVertex3f(-1.0f, -1.0f, 1.0f);

//    // right tri
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(1.0f, -1.0f, -1.0f);
//    glVertex3f(1.0f, -1.0f, 1.0f);

//    // Left
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(-1.0f, -1.0f, 1.0f);
//    glVertex3f(0.0f, -1.0f, -1.0f);

    glBegin(GL_TRIANGLE_STRIP);
       glColor3f(1, 0, 0); glVertex3f(0, 1, 0);

       glColor3f(1, 1, 1); glVertex3f(-0.5, 0, 0.5);

       glColor3f(0, 0, 1); glVertex3f(0.5, 0, 0.5);

       glColor3f(0, 1, 0); glVertex3f(0, 0, -0.7);

       glColor3f(1, 0, 1); glVertex3f(0, 1, 0);

       glColor3f(1, 1, 1); glVertex3f(-0.5, 0, 0.5);
    glEnd();

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

void MainWindow::UpdateAnimation() {
    rotation += 10;

    this->update();
}

