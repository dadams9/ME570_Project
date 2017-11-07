//-------------------------------------------------------
// Filename: main.cpp
//
// Description:  The cpp file for ME570 Project.
//
// Creator:  Professor Corey McBride for MEEN 570 - Brigham Young University
//
// Creation Date: 9/25/2017
//
// Owner: Corey McBride
//-------------------------------------------------------
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
