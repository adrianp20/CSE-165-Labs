/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "my_gl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    MyGL *openGLWidget;
    QLabel *rotate_x_label;
    QSlider *x_rot_slider;
    QPushButton *QuitButton;
    QLabel *rotate_y_label;
    QSlider *y_rot_slider;
    QLabel *rotate_z_label;
    QSlider *z_rot_slider;
    QLabel *TranslateXbar;
    QSlider *on_TranslateXbar_valueChanged;
    QLabel *TranslateYbar;
    QSlider *on_TranslateYbar_valueChanged;
    QLabel *TranslateZbar;
    QSlider *on_TranslateZbar_valueChanged;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(852, 699);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        openGLWidget = new MyGL(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(openGLWidget, 0, 0, 1, 3);

        rotate_x_label = new QLabel(centralWidget);
        rotate_x_label->setObjectName(QString::fromUtf8("rotate_x_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setItalic(true);
        rotate_x_label->setFont(font);

        gridLayout_2->addWidget(rotate_x_label, 1, 0, 1, 1);

        x_rot_slider = new QSlider(centralWidget);
        x_rot_slider->setObjectName(QString::fromUtf8("x_rot_slider"));
        x_rot_slider->setMinimum(0);
        x_rot_slider->setMaximum(360);
        x_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(x_rot_slider, 1, 1, 1, 1);

        QuitButton = new QPushButton(centralWidget);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QFont font1;
        font1.setBold(true);
        QuitButton->setFont(font1);

        gridLayout_2->addWidget(QuitButton, 1, 2, 2, 1);

        rotate_y_label = new QLabel(centralWidget);
        rotate_y_label->setObjectName(QString::fromUtf8("rotate_y_label"));
        rotate_y_label->setFont(font);

        gridLayout_2->addWidget(rotate_y_label, 2, 0, 1, 1);

        y_rot_slider = new QSlider(centralWidget);
        y_rot_slider->setObjectName(QString::fromUtf8("y_rot_slider"));
        y_rot_slider->setMinimum(0);
        y_rot_slider->setMaximum(360);
        y_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(y_rot_slider, 2, 1, 1, 1);

        rotate_z_label = new QLabel(centralWidget);
        rotate_z_label->setObjectName(QString::fromUtf8("rotate_z_label"));
        rotate_z_label->setFont(font);

        gridLayout_2->addWidget(rotate_z_label, 3, 0, 1, 1);

        z_rot_slider = new QSlider(centralWidget);
        z_rot_slider->setObjectName(QString::fromUtf8("z_rot_slider"));
        z_rot_slider->setMinimum(0);
        z_rot_slider->setMaximum(360);
        z_rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(z_rot_slider, 3, 1, 1, 1);

        TranslateXbar = new QLabel(centralWidget);
        TranslateXbar->setObjectName(QString::fromUtf8("TranslateXbar"));
        QFont font2;
        font2.setItalic(true);
        TranslateXbar->setFont(font2);

        gridLayout_2->addWidget(TranslateXbar, 4, 0, 1, 1);

        on_TranslateXbar_valueChanged = new QSlider(centralWidget);
        on_TranslateXbar_valueChanged->setObjectName(QString::fromUtf8("on_TranslateXbar_valueChanged"));
        on_TranslateXbar_valueChanged->setMinimum(0);
        on_TranslateXbar_valueChanged->setMaximum(360);
        on_TranslateXbar_valueChanged->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(on_TranslateXbar_valueChanged, 4, 1, 1, 1);

        TranslateYbar = new QLabel(centralWidget);
        TranslateYbar->setObjectName(QString::fromUtf8("TranslateYbar"));
        TranslateYbar->setFont(font2);

        gridLayout_2->addWidget(TranslateYbar, 5, 0, 1, 1);

        on_TranslateYbar_valueChanged = new QSlider(centralWidget);
        on_TranslateYbar_valueChanged->setObjectName(QString::fromUtf8("on_TranslateYbar_valueChanged"));
        on_TranslateYbar_valueChanged->setMinimum(0);
        on_TranslateYbar_valueChanged->setMaximum(360);
        on_TranslateYbar_valueChanged->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(on_TranslateYbar_valueChanged, 5, 1, 1, 1);

        TranslateZbar = new QLabel(centralWidget);
        TranslateZbar->setObjectName(QString::fromUtf8("TranslateZbar"));
        TranslateZbar->setFont(font2);

        gridLayout_2->addWidget(TranslateZbar, 6, 0, 1, 1);

        on_TranslateZbar_valueChanged = new QSlider(centralWidget);
        on_TranslateZbar_valueChanged->setObjectName(QString::fromUtf8("on_TranslateZbar_valueChanged"));
        on_TranslateZbar_valueChanged->setMinimum(0);
        on_TranslateZbar_valueChanged->setMaximum(360);
        on_TranslateZbar_valueChanged->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(on_TranslateZbar_valueChanged, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Begin OpenGL", nullptr));
        rotate_x_label->setText(QApplication::translate("MainWindow", "Rotate X:", nullptr));
        QuitButton->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        rotate_y_label->setText(QApplication::translate("MainWindow", "Rotate Y:", nullptr));
        rotate_z_label->setText(QApplication::translate("MainWindow", "Rotate Z:", nullptr));
        TranslateXbar->setText(QApplication::translate("MainWindow", "Translate X:", nullptr));
        TranslateYbar->setText(QApplication::translate("MainWindow", "Translate Y:", nullptr));
        TranslateZbar->setText(QApplication::translate("MainWindow", "Translate Z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
