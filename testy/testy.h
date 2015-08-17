#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_testyWindow.h"

class testyAppWindow : public QMainWindow, public Ui::testyAppWindow
{
  Q_OBJECT
  
 public:
  testyAppWindow();
  

 public slots:
   void on_pushButton_clicked();


};

#endif
