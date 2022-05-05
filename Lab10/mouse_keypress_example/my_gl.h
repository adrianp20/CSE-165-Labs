#ifndef MyGL_H
#define MyGL_H


#include <QtWidgets>
#include <QtOpenGL>
//#include <GL/glu.h>

class MyGL : public QOpenGLWidget
{
    Q_OBJECT
public:
    float x_mov, y_mov, xrot, yrot, zrot;
    explicit MyGL(QWidget *parent = 0);

    void setRotation(float x, float y, float z);
    void setTranslation(float x, float y);
    void setTranslationMouse(float x, float y);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);


};

#endif // QGLBEGIN_H
