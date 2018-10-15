#ifndef GITTEST_H
#define GITTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_gittest.h"

class gitTest : public QMainWindow
{
	Q_OBJECT

public:
	gitTest(QWidget *parent = 0);
	~gitTest();

private:
	Ui::gitTestClass ui;
};

#endif // GITTEST_H
