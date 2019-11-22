#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtHelloWorld.h"

class QtHelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	QtHelloWorld(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtHelloWorldClass ui;
};
