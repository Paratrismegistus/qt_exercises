#include <QtGui>

#include "testy.h"

testyAppWindow::testyAppWindow()
{
  setupUi(this);
  connect(messageButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

void testyAppWindow::on_pushButton_clicked()
{
  label->setText("Hello World!");
}
