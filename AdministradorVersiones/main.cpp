/*
 * Main.cpp
 *
 *  Created on: 20 may. 2018
 *      Author: juanes
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
