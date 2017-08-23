#include "meshpro.h"
#include "QDebug"
#include "QMessageBox"
#include "qlayout.h"
#include "QTextCodec"

#include "iostream"


meshPro::meshPro(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	menu[0] = new QMenu("File", this);

	menu[3] = new QMenu("Open", this);
	menu[3]->addAction("OpenImg");
	menu[3]->addAction("OpenMesh");
	menu[0]->addAction("New");
	menu[0]->addMenu(menu[3]);
	menu[0]->addAction("Save");
	menu[0]->addAction("Exit");

	act[0] = new QAction("Undo", this);
	act[0]->setShortcut(Qt::CTRL | Qt::Key_Z);
	//act[0]->setStatusTip("Undo");

	act[1] = new QAction("Copy", this);
	act[1]->setShortcut(Qt::CTRL | Qt::Key_V);
	//act[1]->setCheckable(true);

	menu[1] = new QMenu("Edit");
	menu[1]->addAction(act[0]);
	menu[1]->addAction(act[1]);

	menu[2] = new QMenu("Tools");
	act[2] = new QAction("Smooth", this);
	act[2]->setEnabled(false);
	menu[2]->addAction(act[2]);
	


	ui.menuBar->addMenu(menu[0]);
	ui.menuBar->addMenu(menu[1]);
	ui.menuBar->addMenu(menu[2]);

	ui.is_show_point->setChecked(true);


	connect(ui.menuBar, SIGNAL(triggered(QAction*)), this, SLOT(triggerMenu(QAction*)));
}

meshPro::~meshPro()
{

}

void meshPro::triggerMenu(QAction* act)
{

	if (act->text() == "Exit")
	{
		qDebug() << "Exit";
		exit(0);
	}

	if (act->text() == "OpenImg")
	{
		ui.myWidget->loadTexture();	
		update();
	}
	if (act->text() == "OpenMesh")
	{		
		ui.myWidget->readMesh();
		update();
	}
	if (act->text() == "Smooth"){
		
		//displayMat(image, ui.imgLabel);
	}

}

