#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent* event){
    float x_m = ui->openGLWidget->x_mov;
    float y_m = ui->openGLWidget->y_mov;
    float x_r = ui->openGLWidget->xrot;
    float y_r = ui->openGLWidget->yrot;
    float z_r = ui->openGLWidget->zrot;
    float x_inc = 0.0, y_inc = 0.0, x_rot = 0.0, y_rot = 0.0, z_rot = 0.0;

    if (event->key() == Qt::Key_Up) {
        y_inc = +0.05f;
    }

    if (event->key() == Qt::Key_Down) {
        y_inc = -0.05f;
    }

    if(event->key() == Qt::Key_Left){
        x_inc = -0.05f;
    }

    if(event->key() == Qt::Key_Right){
        x_inc = +0.05f;
    }

    if(event->key() == Qt::Key_W){
        x_rot = +5.0f;
    }

    if(event->key() == Qt::Key_S){
        x_rot = -5.0f;
    }

    if(event->key() == Qt::Key_A){
        y_rot = -5.0f;
    }

    if(event->key() == Qt::Key_D){
        y_rot = +5.0f;
    }

    if(event->key() == Qt::Key_Q){
        z_rot = -5.0f;
    }

    if(event->key() == Qt::Key_E){
        z_rot = +5.0f;
    }
    ui->openGLWidget->setTranslation(x_m + x_inc, y_m + y_inc);
    ui->openGLWidget->setRotation(x_r + x_rot, y_r + y_rot, z_r + z_rot);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    float xAtRelease = event->x();
    float yAtRelease = event->y();

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

//    float x = ui->label->x();
//    float y = ui->label->y();

//    ui->label->move(QPoint(x + dx, y + dy));

    // allows us to drag single ui shape instead of two labels
    float x = ui->openGLWidget->x();
    float y = ui->openGLWidget->y();

    //ui->openGLWidget->move(QPoint(x + dx, y + dy));
   // ui->openGLWidget->move(QPoint(x + dx, y + dy));
    ui->openGLWidget->setTranslationMouse(x + dx, y + dy);

    lastX = event->x();
    lastY = event->y();

}
