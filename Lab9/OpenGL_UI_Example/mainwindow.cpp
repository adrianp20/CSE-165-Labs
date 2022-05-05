#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_x_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_y_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_z_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}



void MainWindow::on_pushButton_clicked()
{

}


//void MainWindow::on_TranslateXbar_actionTriggered(int shift)
//{
//    Q_UNUSED(shift);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->shift(),
//                ui->TranslateYbar->shift(),
//                ui->TranslateZbar->shift()
//                );
//}


//void MainWindow::on_TranslateYbar_actionTriggered(int shift)
//{
//    Q_UNUSED(shift);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->value(),
//                ui->TranslateYbar->value(),
//                ui->TranslateZbar->value()
//                );
//}


//void MainWindow::on_TranslateZbar_actionTriggered(int action)
//{
//    Q_UNUSED(action);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->value(),
//                ui->TranslateYbar->value(),
//                ui->TranslateZbar->value()
//                );
//}


void MainWindow::on_TranslateXbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}


void MainWindow::on_TranslateYbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}


void MainWindow::on_TranslateZbar_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->translation(
                ui->TranslateXbar->value(),
                ui->TranslateYbar->value(),
                ui->TranslateZbar->value()
                );
}

//#include "mainwindow.h"
//#include "ui_mainwindow.h"
//#include "my_gl.h"

//MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

//void MainWindow::on_x_rot_slider_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->setRotation(
//                ui->x_rot_slider->value(),
//                ui->y_rot_slider->value(),
//                ui->z_rot_slider->value()
//                );
//}

//void MainWindow::on_y_rot_slider_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->setRotation(
//                ui->x_rot_slider->value(),
//                ui->y_rot_slider->value(),
//                ui->z_rot_slider->value()
//                );
//}

//void MainWindow::on_z_rot_slider_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->setRotation(
//                ui->x_rot_slider->value(),
//                ui->y_rot_slider->value(),
//                ui->z_rot_slider->value()
//                );
//}



//void MainWindow::on_pushButton_clicked()
//{

//}


////void MainWindow::on_TranslateXbar_actionTriggered(int shift)
////{
////    Q_UNUSED(shift);
////    ui->openGLWidget->translation(
////                ui->TranslateXbar->shift(),
////                ui->TranslateYbar->shift(),
////                ui->TranslateZbar->shift()
////                );
////}


////void MainWindow::on_TranslateYbar_actionTriggered(int shift)
////{
////    Q_UNUSED(shift);
////    ui->openGLWidget->translation(
////                ui->TranslateXbar->value(),
////                ui->TranslateYbar->value(),
////                ui->TranslateZbar->value()
////                );
////}


////void MainWindow::on_TranslateZbar_actionTriggered(int action)
////{
////    Q_UNUSED(action);
////    ui->openGLWidget->translation(
////                ui->TranslateXbar->value(),
////                ui->TranslateYbar->value(),
////                ui->TranslateZbar->value()
////                );
////}


//void MainWindow::on_TranslateXbar_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->value(),
//                ui->TranslateYbar->value(),
//                ui->TranslateZbar->value()
//                );
//}


//void MainWindow::on_TranslateYbar_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->value(),
//                ui->TranslateYbar->value(),
//                ui->TranslateZbar->value()
//                );
//}


//void MainWindow::on_TranslateZbar_valueChanged(int value)
//{
//    Q_UNUSED(value);
//    ui->openGLWidget->translation(
//                ui->TranslateXbar->value(),
//                ui->TranslateYbar->value(),
//                ui->TranslateZbar->value()
//                );
//}
