#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtOpenGL>
//#include <glut.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_x_rot_slider_valueChanged(int value);

    void on_y_rot_slider_valueChanged(int value);

    void on_z_rot_slider_valueChanged(int value);


    void on_pushButton_clicked(); //quit button


    //translate bar
//    void on_TranslateXbar_actionTriggered(int shift);

//    void on_TranslateYbar_actionTriggered(int shift);

//    void on_TranslateZbar_actionTriggered(int shift);

    void on_TranslateXbar_valueChanged(int value);
    void on_TranslateYbar_valueChanged(int value);
    void on_TranslateZbar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
