#include "my_gl.h"

MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
{
    xrot = yrot = zrot = 0.0;
    //added translation
    xTrans = yTrans = zTrans = 0.0;
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

    //translation
        glTranslatef(xTrans/40,0.0,0.0);
        glTranslatef(0.0,yTrans/40, 0.0);
        glTranslatef(0.0, 0.0, zTrans/40);

    glTranslatef(0,0,0);





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

void MyGL::resizeGL(int w, int h)
{
    //set viewport
    glViewport(0,0,w,h);

    //initialize projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /* multiply the current matrix by a perspective matrix
     * void glFrustum(GLdouble left, GLdouble right,GLdouble bottom,GLdouble top,GLdouble nearVal,GLdouble farVal);
     * left, right: Specify the coordinates for the left and right vertical clipping planes.
     * bottom, top: Specify the coordinates for the bottom and top horizontal clipping planes.
     * nearVal, farVal: Specify the distances to the near and far depth clipping planes. Both distances must be positive.
     */
    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

    //initialize modelview matrix
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

void MyGL::translation(float x, float y, float z){
    xTrans = x;
    yTrans = y;
    zTrans = z;
    update();
}




//#include "my_gl.h"

//MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
//{
//    xrot = yrot = zrot = 0.0;
//    //added translation
//    xTrans = yTrans = zTrans = 0.0;
//}

//void MyGL::initializeGL()
//{
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_LIGHT0);
//}

//void MyGL::paintGL()
//{
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();


//    glTranslatef(0.0, 0.0, -7.0);
//    glRotatef(xrot, 1.0, 0.0, 0.0);
//    glRotatef(yrot, 0.0, 1.0, 0.0);
//    glRotatef(zrot, 0.0, 0.0, 1.0);

//    //translation
//        glTranslatef(xTrans/40,0.0,0.0);
//        glTranslatef(0.0,yTrans/40, 0.0);
//        glTranslatef(0.0, 0.0, zTrans/40);

//    glTranslatef(0,0,0);





//    // tetrahedron
//    glBegin(GL_TRIANGLE_STRIP);
//    //magenta
//    glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(0, 1, 0);
//    //green
//    glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-0.5, 0, 0.5);
//    //red
//    glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0.5, 0, 0.5);
//    //blue
//    glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0, 0, -0.7);
//    //yellow
//    glColor3f(1.0f, 1.0f, 0.0f); glVertex3f(0, 1, 0);
//    //orange
//    glColor3f(1.0f, 0.5f, 0.0f); glVertex3f(-0.5, 0, 0.5);

//    glEnd();

//    glFlush();
//}

//void MyGL::resizeGL(int w, int h)
//{
//    //set viewport
//    glViewport(0,0,w,h);

//    //initialize projection matrix
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();

//    /* multiply the current matrix by a perspective matrix
//     * void glFrustum(GLdouble left, GLdouble right,GLdouble bottom,GLdouble top,GLdouble nearVal,GLdouble farVal);
//     * left, right: Specify the coordinates for the left and right vertical clipping planes.
//     * bottom, top: Specify the coordinates for the bottom and top horizontal clipping planes.
//     * nearVal, farVal: Specify the distances to the near and far depth clipping planes. Both distances must be positive.
//     */
//    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

//    //initialize modelview matrix
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();

//}

//void MyGL::setRotation(float x, float y, float z)
//{
//    xrot = x;
//    yrot = y;
//    zrot = z;
//    update();
//}

//void MyGL::translation(float x, float y, float z){
//    xTrans = x;
//    yTrans = y;
//    zTrans = z;
//    update();
//}


////MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
////{
////    xrot = yrot = zrot = 0.0;
////}

////void MyGL::initializeGL()
////{
////    glClearColor(0.0, 0.0, 0.0, 0.0);
////    glEnable(GL_DEPTH_TEST);
////    glEnable(GL_LIGHT0);
////}

////void MyGL::paintGL()
////{
////    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
////    glLoadIdentity();


////    glTranslatef(0.0, 0.0, -7.0);
////    glRotatef(xrot, 1.0, 0.0, 0.0);
////    glRotatef(yrot, 0.0, 1.0, 0.0);
////    glRotatef(zrot, 0.0, 0.0, 1.0);

////    glTranslatef(0,0,0);

////// tetrahedron
////    glBegin(GL_TRIANGLE_STRIP);
////       glColor3f(1, 0, 0); glVertex3f(0, 1, 0);

////       glColor3f(1, 1, 1); glVertex3f(-0.5, 0, 0.5);

////       glColor3f(0, 0, 1); glVertex3f(0.5, 0, 0.5);

////       glColor3f(0, 1, 0); glVertex3f(0, 0, -0.7);

////       glColor3f(1, 0, 1); glVertex3f(0, 1, 0);

////       glColor3f(1, 1, 1); glVertex3f(-0.5, 0, 0.5);
////    glEnd();

////    glFlush();

//////    glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads

//////    // Top face (y = 1.0f)
//////    // Define vertices in counter-clockwise (CCW) order with normal pointing out
//////    glColor3f(0.0f, 1.0f, 0.0f);     // Green
//////    glVertex3f(1.0f, 1.0f, -1.0f);
//////    glVertex3f(-1.0f, 1.0f, -1.0f);
//////    glVertex3f(-1.0f, 1.0f, 1.0f);
//////    glVertex3f(1.0f, 1.0f, 1.0f);

//////    // Bottom face (y = -1.0f)
//////    glColor3f(1.0f, 0.5f, 0.0f);     // Orange
//////    glVertex3f(1.0f, -1.0f, 1.0f);
//////    glVertex3f(-1.0f, -1.0f, 1.0f);
//////    glVertex3f(-1.0f, -1.0f, -1.0f);
//////    glVertex3f(1.0f, -1.0f, -1.0f);

//////    // Front face  (z = 1.0f)
//////    glColor3f(1.0f, 0.0f, 0.0f);     // Red
//////    glVertex3f(1.0f, 1.0f, 1.0f);
//////    glVertex3f(-1.0f, 1.0f, 1.0f);
//////    glVertex3f(-1.0f, -1.0f, 1.0f);
//////    glVertex3f(1.0f, -1.0f, 1.0f);

//////    // Back face (z = -1.0f)
//////    glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
//////    glVertex3f(1.0f, -1.0f, -1.0f);
//////    glVertex3f(-1.0f, -1.0f, -1.0f);
//////    glVertex3f(-1.0f, 1.0f, -1.0f);
//////    glVertex3f(1.0f, 1.0f, -1.0f);

//////    // Left face (x = -1.0f)
//////    glColor3f(0.0f, 0.0f, 1.0f);     // Blue
//////    glVertex3f(-1.0f, 1.0f, 1.0f);
//////    glVertex3f(-1.0f, 1.0f, -1.0f);
//////    glVertex3f(-1.0f, -1.0f, -1.0f);
//////    glVertex3f(-1.0f, -1.0f, 1.0f);

//////    // Right face (x = 1.0f)
//////    glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
//////    glVertex3f(1.0f, 1.0f, -1.0f);
//////    glVertex3f(1.0f, 1.0f, 1.0f);
//////    glVertex3f(1.0f, -1.0f, 1.0f);
//////    glVertex3f(1.0f, -1.0f, -1.0f);
//////    glEnd();  // End of drawing color-cube

//////    glFlush();
////}

////void MyGL::resizeGL(int w, int h)
////{
////    //set viewport
////    glViewport(0,0,w,h);

////    //initialize projection matrix
////    glMatrixMode(GL_PROJECTION);
////    glLoadIdentity();

////    /* multiply the current matrix by a perspective matrix
////     * void glFrustum(GLdouble left, GLdouble right,GLdouble bottom,GLdouble top,GLdouble nearVal,GLdouble farVal);
////     * left, right: Specify the coordinates for the left and right vertical clipping planes.
////     * bottom, top: Specify the coordinates for the bottom and top horizontal clipping planes.
////     * nearVal, farVal: Specify the distances to the near and far depth clipping planes. Both distances must be positive.
////     */
////    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

////    //initialize modelview matrix
////    glMatrixMode(GL_MODELVIEW);
////    glLoadIdentity();

////}

////void MyGL::setRotation(float x, float y, float z)
////{
////    xrot = x;
////    yrot = y;
////    zrot = z;
////    update();
////}


