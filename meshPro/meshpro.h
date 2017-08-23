#ifndef MESHPRO_H
#define MESHPRO_H

#include <QtWidgets/QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QLabel>
#include <QImage>
#include <opencv2\opencv.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include "ui_meshpro.h"
#include "myOpenGLWidget.h"


using namespace cv;

namespace Ui {
	class MainWindow;
}


class meshPro : public QMainWindow
{
	Q_OBJECT

public:
	meshPro(QWidget *parent = 0);
	~meshPro();

private:
	Ui::meshProClass ui;
	QMenu* menu[10];
	QAction* act[10];
	Mat image;


private slots:
	void triggerMenu(QAction* act);
};

#endif // MESHPRO_H
