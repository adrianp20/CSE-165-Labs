#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setTitle("2D Graphics tutorial");
    w.resize(640,480);
    w.show();
    return a.exec();
}
