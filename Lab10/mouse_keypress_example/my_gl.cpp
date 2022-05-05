#include "my_gl.h"
#include <QDebug>

MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
{
    xrot = yrot = zrot = x_mov = y_mov = 0.0;
}

void MyGL::initializeGL()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
}

void MyGL::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0, 0.0, -7.0);
    glRotatef(xrot, 1.0, 0.0, 0.0);
    glRotatef(yrot, 0.0, 1.0, 0.0);
    glRotatef(zrot, 0.0, 0.0, 1.0);

    glTranslatef(x_mov, y_mov, 0);

    // tetrahedron
    glBegin(GL_TRIANGLE_STRIP);
    //magenta
    glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(0, 1, 0);
    //green
    glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-0.5, 0, 0.5);
    //red
    glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0.5, 0, 0.5);
    //blue
    glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0, 0, -0.7);
    //yellow
    glColor3f(1.0f, 1.0f, 0.0f); glVertex3f(0, 1, 0);
    //orange
    glColor3f(1.0f, 0.5f, 0.0f); glVertex3f(-0.5, 0, 0.5);

    glEnd();

    glFlush();

}

void MyGL::setTranslation(float x, float y){
    this->x_mov = x;
    this->y_mov = y;
    update();
}

void MyGL::setTranslationMouse(float x, float y){
    this->x_mov = x;// - 5.0f;
    this->y_mov = y;// - 5.0f;
    update();
}

void MyGL::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MyGL::setRotation(float x, float y, float z)
{
    xrot = x;
    yrot = y;
    zrot = z;
    update();
}


