/********************************************************************************
** Form generated from reading UI file 'testyWindow.ui'
**
** Created: Sat Aug 1 20:41:14 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTYWINDOW_H
#define UI_TESTYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testyAppWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *messageButton;

    void setupUi(QMainWindow *testyAppWindow)
    {
        if (testyAppWindow->objectName().isEmpty())
            testyAppWindow->setObjectName(QString::fromUtf8("testyAppWindow"));
        testyAppWindow->resize(800, 600);
        centralwidget = new QWidget(testyAppWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 90, 321, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        messageButton = new QPushButton(widget);
        messageButton->setObjectName(QString::fromUtf8("messageButton"));

        verticalLayout->addWidget(messageButton);

        testyAppWindow->setCentralWidget(centralwidget);

        retranslateUi(testyAppWindow);

        QMetaObject::connectSlotsByName(testyAppWindow);
    } // setupUi

    void retranslateUi(QMainWindow *testyAppWindow)
    {
        testyAppWindow->setWindowTitle(QApplication::translate("testyAppWindow", "Testy", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        messageButton->setText(QApplication::translate("testyAppWindow", "Display Message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testyAppWindow: public Ui_testyAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTYWINDOW_H
