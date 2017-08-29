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
	act[2] = new QAction("Parameterize", this);
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
		readMesh();
		update();
	}
	if (act->text() == "Parameterize"){
		// for uniform parameter
		// test...
		if (is_loaded){
			newwidget = new myOpenGLWidget();
			
			pMesh = new paraMesh(2, &myMesh);
			pMesh->para();
			
			newwidget->initMesh(pMesh->getMesh());
			newwidget->show2DTexture = true;
			newwidget->showFace = false;
			newwidget->showPoint = false;
			newwidget->loadTexture();
			newwidget->show();
			newwidget->update();
		}
		
	}

}

void meshPro::readMesh(){
	QString fileName = QFileDialog::getOpenFileName(this, tr("open file"), " ", tr("meshFile(*.obj *.off *.ply *.3ds);;Allfile(*.*)"));
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	std::string filename = code->fromUnicode(fileName).data();

	// ���󶥵㷨�� vertex normals
	myMesh.request_vertex_normals();
	myMesh.request_vertex_texcoords2D();
	//��������ڶ��㷨�ߣ��򱨴� 
	if (!myMesh.has_vertex_normals())
	{
		qDebug() << "error: no normal read" << endl;
		return;
	}
	//if (!myMesh.has_vertex_texcoords2D())
	//{
	//	qDebug() << "error: no tex read" << endl;
	//	return;
	//}
	//// ��������������ȡ�ļ� 
	OpenMesh::IO::Options opt = 0x0000;
	if (!OpenMesh::IO::read_mesh(myMesh, filename,opt))
	{
		//qDebug() << "error: can't read file: " << filename << endl;
		return;
	}
	else
		qDebug() << "read success: " << endl;

	std::cout << endl; // Ϊ��ui��ʾ�ÿ�һЩ
	//��������ڶ��㷨�ߣ�������
	if (!opt.check(OpenMesh::IO::Options::VertexNormal))
	{
		// ͨ���淨�߼��㶥�㷨��
		myMesh.request_face_normals();
		// mesh��������㷨��
		myMesh.update_normals();
		// �ͷ��淨��
		myMesh.release_face_normals();
	}
	ui.myWidget->initMesh(&myMesh);
	is_loaded = true;
}

