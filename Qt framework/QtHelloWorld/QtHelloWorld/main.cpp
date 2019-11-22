#include "QtHelloWorld.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtHelloWorld w;
	w.show();
	return a.exec();
}
