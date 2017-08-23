#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H

#include <qopenglwidget.h>
#include <qopenglfunctions.h>
#include <qopengltexture.h>
#include <QMouseEvent>
#include <QFileDialog>
#include <qdebug.h>
#include <QString>
#include <qtextcodec.h>
#include <QtOpenGL\qgl.h>

#include <ArcBall.h>
#include <GL\freeglut.h>
#include <iostream>
#include <OpenMesh/Core/IO/MeshIO.hh>  // 读取文件
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh> // 操作文件 
#include <opencv2\opencv.hpp>
#include <math.h>
#include <Windows.h>
#include <string>



#define MAXSCALE 50
#define MINSCALE 0.02
#define RATIO 1.05

//#include <QGLWidget>
namespace Ui {
class myOpenGLWidget;
}


typedef OpenMesh::TriMesh_ArrayKernelT<> MyMesh;


class myOpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    explicit myOpenGLWidget(QWidget *parent = 0);
    ~myOpenGLWidget();

	void readMesh();
	void writeMesh();
	void loadTexture();
	void setBackGroundTexture();

	void setLight();
	void render();
	void drawPoint();
	void drawEdge();
	void drawFace();
	void drawAxes();
	//void initTexture(QString);
	
public slots:
	// slots for xyz-rotation slider
	void check_edge_state(int state);
	void check_face_state(int state);
	void check_point_state(int state);
	void check_texture_state(int state);
	void check_light_state(int state);
	void check_axes_state(int state);

signals:
	// signaling rotation from mouse movement

protected:
	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);
	void timerEvent(QTimerEvent *e);

	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseDoubleClickEvent(QMouseEvent *event);
	//key func here
	void wheelEvent(QWheelEvent *event);

private:

	int xRot;
	int yRot;
	int zRot;
	bool showFace = false;
	bool showWire = false;
	bool showPoint = true;
	bool is_load_texture=false;
	bool showTexture = true;
	bool showAxes = true;
	bool showLight = true;

	CArcBall	*ptr_arcball_;
	GLubyte		*pixels;
	int			p_width;
	int			p_height;
	GLfloat		eye_distance_;
	GLfloat		eye_goal_[3];
	GLfloat		eye_direction_[3];
	MyMesh		myMesh;
	double		scale;
	QOpenGLTexture *texture;
	GLuint		texture_[1];

	QPoint		current_position_;;
};

#endif // MYOPENGLWIDGET_H
