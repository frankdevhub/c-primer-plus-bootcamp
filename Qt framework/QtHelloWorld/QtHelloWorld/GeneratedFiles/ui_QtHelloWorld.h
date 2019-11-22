/********************************************************************************
** Form generated from reading UI file 'QtHelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHELLOWORLD_H
#define UI_QTHELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtHelloWorldClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtHelloWorldClass)
    {
        if (QtHelloWorldClass->objectName().isEmpty())
            QtHelloWorldClass->setObjectName(QStringLiteral("QtHelloWorldClass"));
        QtHelloWorldClass->resize(600, 400);
        centralWidget = new QWidget(QtHelloWorldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 150, 66, 12));
        QtHelloWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtHelloWorldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QtHelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtHelloWorldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtHelloWorldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtHelloWorldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtHelloWorldClass->setStatusBar(statusBar);

        retranslateUi(QtHelloWorldClass);

        QMetaObject::connectSlotsByName(QtHelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtHelloWorldClass)
    {
        QtHelloWorldClass->setWindowTitle(QApplication::translate("QtHelloWorldClass", "QtHelloWorld", nullptr));
        label->setText(QApplication::translate("QtHelloWorldClass", "Hello World", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtHelloWorldClass: public Ui_QtHelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHELLOWORLD_H
