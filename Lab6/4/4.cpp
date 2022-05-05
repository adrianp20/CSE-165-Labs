/*
Starting from this week we will be learning the Qt framework, which is a cross-platform ap-
plication development framework in C++. This will help you improve your object oriented
programming skills and prepare you for the final project.
The task for this week is to install the Qt framework and create your first Hello World GUI
app. Qt is a commercial product, however it has a free open source license, so we will be
using it in this course. The first task is to install the framework on your machine. Follow this
link to download it for your specific operating system (we tested it on Windows, MacOS,
and Ubuntu 20.04.1, and it run without any issues). On that page navigate to Downloads
for open source users, and at the bottom you can find the link named Download the
Qt Online Installer. For Windows and MacOS, just open the downloaded installer file,
and follow the installation. For Linux machines, first make the downloaded installer file
executable and run it. We used the following command for that:
chmod +x qt-unified-linux-x64-4.0.1-1-online.run ./qt-unified-linux-x64-4.0.1-1-online.run
More instructions for installing on Ubuntu can be found here.
Once you have installed the Qt framework, run the Qt Creator IDE and follow this Beginner
tutorial.
The tutorial is quite long, so for this week complete only up to the chapter about Qt class
hierarchy. Design your own pretty button from the tutorial, and submit the main.cpp file
of your pretty button example.
*/

// all code from other QT IDE ** Working **

#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QFont font("Courier");

    QPushButton button;
    button.setText("My Text");
    button.setToolTip("A tooltip");
    button.setFont(font);

    QIcon icon("/Users/adrianposadas/Downloads/SettingsLogo.png");
    button.setIcon(icon);
    button.setIcon(QIcon::fromTheme("face-smile"));
    button.show();

    return app.exec();
}
