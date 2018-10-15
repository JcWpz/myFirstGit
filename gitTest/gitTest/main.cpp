#include "gittest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	gitTest w;
	w.show();
	return a.exec();
}
