#include <QApplication>
#include <QMainWindow>

#include "testy.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  
  testyAppWindow *window = new testyAppWindow;
  window->show();
  return app.exec();
}
