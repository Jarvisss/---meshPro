#include "myopenglwidget.h"

myOpenGLWidget::myOpenGLWidget(QWidget *parent) :
QOpenGLWidget(parent),eye_distance_(5.0)
{
	ptr_arcball_ = new CArcBall(width(), height());
	eye_goal_[0] = eye_goal_[1] = eye_goal_[2] = 0.0;
	eye_direction_[0] = eye_direction_[1] = 0.0;
	eye_direction_[2] = 1.0;
	
}
myOpenGLWidget::~myOpenGLWidget()
{
	delete[] ptr_arcball_;
	/*if (myMesh)
		delete[]myMesh;*/
}
void myOpenGLWidget::check_edge_state(int state){
	showWire = state == Qt::Checked;
	update();
}
void myOpenGLWidget::check_face_state(int state){
	showFace = state == Qt::Checked;
	update();
}
void myOpenGLWidget::check_point_state(int state){
	showPoint = state == Qt::Checked;
	update();
}
void myOpenGLWidget::check_texture_state(int state){
	show2DTexture = state == Qt::Checked;
	update();
}
void myOpenGLWidget::check_light_state(int state){
	showLight = state == Qt::Checked;
	update();
}
void myOpenGLWidget::check_axes_state(int state){
	showAxes = state == Qt::Checked;
	update();
}


void myOpenGLWidget::setWheelSpeed(int s){
	qDebug() << "ws:" << s;
	WheelSpeed = s*1.0 / 1000;
}

void myOpenGLWidget::setLightPositionX(int x)
{
	light_position[0] = x;
	update();
}

void myOpenGLWidget::setLightPositionY(int y)
{
	light_position[1] = y;
	update();
}

void myOpenGLWidget::setLightPositionZ(int z)
{
	light_position[2] = z;
	update();
}

void myOpenGLWidget::setLight()
{
	static GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	static GLfloat mat_shininess[] = { 50.0 };
	static GLfloat white_light[] = { 0.8, 0.8, 0.8, 1.0 };
	static GLfloat lmodel_ambient[] = { 0.3, 0.3, 0.3, 1.0 };

	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
}

void myOpenGLWidget::initMesh(MyMesh* themesh){
	myMesh = themesh;
	totalVertices = myMesh->n_vertices();
	//startTimer(100);
}

void myOpenGLWidget::render(){
	if (myMesh!=NULL){
		if (showFace)
			drawFace();
		if (showWire)
			drawEdge();
		if (showPoint)
			drawPoint();
		if (show2DTexture)
			draw2DTextureLines();
			
	}
		
	if (showAxes)
		drawAxes();
}

//void myOpenGLWidget::writeMesh(){
//	QString fileName = QFileDialog::getOpenFileName(this, tr("open file"), " ", tr("meshFile(*.obj *.off *.ply *.3ds);;Allfile(*.*)"));
//	QTextCodec *code = QTextCodec::codecForName("gb18030");
//	std::string filename = code->fromUnicode(fileName).data();
//
//	// 请求顶点法线 vertex normals
//	myMesh->request_vertex_normals();
//	//如果不存在顶点法线，则报错 
//	if (!myMesh->has_vertex_normals())
//	{
//		qDebug() << "error: no normal read" << endl;
//		return;
//	}
//	// 如果有顶点发现则读取文件 
//	OpenMesh::IO::Options opt;
//	if (!OpenMesh::IO::write_mesh(myMesh, filename, opt))
//	{
//		//qDebug() << "error: can't read file: " << filename << endl;
//		return;
//	}
//	else
//		qDebug() << "read success: " << endl;
//	std::cout << endl; // 为了ui显示好看一些
//	//如果不存在顶点法线，则计算出
//	if (!opt.check(OpenMesh::IO::Options::VertexNormal))
//	{
//		// 通过面法线计算顶点法线
//		myMesh->request_face_normals();
//		// mesh计算出顶点法线
//		myMesh->update_normals();
//		// 释放面法线
//		myMesh->release_face_normals();
//	}
//}
void myOpenGLWidget::drawPoint(){
	//glGenBuffers(2, uiVBO);
	glBegin(GL_POINTS);
	for (auto it = myMesh->vertices_begin(); it != myMesh->vertices_end(); ++it)
	{
		auto point = myMesh->point(it.handle()).data();
		glVertex3fv(point);
	}
	glEnd();
	glPointSize(1);
}


void myOpenGLWidget::draw2DTextureLines(){
	glBegin(GL_LINES);

	for (auto it = myMesh->halfedges_begin(); it != myMesh->halfedges_end(); ++it){
		auto frompt = myMesh->texcoord2D(myMesh->from_vertex_handle(it.handle())).data();
		auto topt = myMesh->texcoord2D(myMesh->to_vertex_handle(it.handle())).data();

		glVertex2fv(frompt);
		glVertex2fv(topt);
	}
	glEnd();
}
void myOpenGLWidget::drawEdge(){
	glBegin(GL_LINES);
	
	for (auto it = myMesh->halfedges_begin(); it != myMesh->halfedges_end(); ++it){
		auto frompt = myMesh->point(myMesh->from_vertex_handle(it.handle())).data();
		auto topt = myMesh->point(myMesh->to_vertex_handle(it.handle())).data();
		
		glVertex3fv(frompt);
		glVertex3fv(topt);
	}
	glEnd();

	
}
void myOpenGLWidget::drawFace(){
	
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture_[0]);
	qDebug() << " tex id = " << texture_[0];
	for (auto f_it = myMesh->faces_begin(); f_it != myMesh->faces_end(); ++f_it){
		glBegin(GL_TRIANGLES);
		for (auto fv_it = myMesh->fv_iter(*f_it); fv_it.is_valid(); ++fv_it){
			glTexCoord2fv(myMesh->texcoord2D(*fv_it).data());
			glNormal3fv(myMesh->normal(*fv_it).data());
			glVertex3fv(myMesh->point(*fv_it).data());
		}
		glEnd();
	}
	glDisable(GL_TEXTURE_2D);

}
void myOpenGLWidget::drawAxes()
{
	//x axis
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex3f(0, 0, 0);
	glVertex3f(0.7, 0.0, 0.0);
	glEnd();
	glPushMatrix();
	glTranslatef(0.7, 0, 0);
	glRotatef(90, 0.0, 1.0, 0.0);
	//glutSolidCone(0.02, 0.06, 20, 10);
	glPopMatrix();

	//y axis
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex3f(0, 0, 0);
	glVertex3f(0.0, 0.7, 0.0);
	glEnd();

	glPushMatrix();
	glTranslatef(0.0, 0.7, 0);
	glRotatef(90, -1.0, 0.0, 0.0);
	//glutSolidCone(0.02, 0.06, 20, 10);
	glPopMatrix();

	//z axis
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex3f(0, 0, 0);
	glVertex3f(0.0, 0.0, 0.7);
	glEnd();
	glPushMatrix();
	glTranslatef(0.0, 0, 0.7);
	//glutSolidCone(0.02, 0.06, 20, 10);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
}

void myOpenGLWidget::loadTexture(){
	qDebug() << "load" << endl;
	QString fileName = QFileDialog::getOpenFileName(this, tr("open file"), " ", tr("picturefile(*.jpg *.png *.bmp);;Allfile(*.*)"));
	qDebug() << fileName << endl;
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	std::string name = code->fromUnicode(fileName).data();
	qDebug() << name.c_str() << endl;
	if (name.length()==0){
		return;
	}
	cv::Mat I = cv::imread(name.c_str());
	imshow("opencv", I);
	p_width = I.cols;
	p_height = I.rows;
	int pixellength = p_width*p_height * 3;
	std::cout << p_width << endl;
	//GLubyte* pixels = (unsigned char*)malloc(sizeof(unsigned char)*I->imageSize);
	pixels = new GLubyte[pixellength];
	
	std::memcpy(pixels, I.data, pixellength*sizeof(GLubyte));
	qDebug() << pixels[0] << endl;
	qDebug() << pixels[1] << endl;
	qDebug() << pixels[2] << endl;
	glGenTextures(1, &texture_[0]);
	qDebug() << texture_[0] << endl;
	//std::cout << "222" << endl;
	glBindTexture(GL_TEXTURE_2D, texture_[0]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	//std::cout << "33" << endl;
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, p_width, p_height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels);
	free(pixels);
	is_load_texture = true;
}
void myOpenGLWidget::setBackGroundTexture(){
	//glLoadIdentity();
	
	glEnable(GL_TEXTURE_2D);
	glPushMatrix();
	//glTranslatef(0, 0, -10);

	glBindTexture(GL_TEXTURE_2D, texture_[0]);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f);
	glVertex2f(-1, -1);
	glTexCoord2f(1.0f, 0.0f);
	glVertex2f(1, -1);
	glTexCoord2f(1.0f, 1.0f);
	glVertex2f(1, 1);
	glTexCoord2f(0.0f, 1.0f);
	glVertex2f(-1,1);
	glEnd();
	glPopMatrix();

	qDebug() << "back ok" << endl;
	//float x_ratio = (float)this->width() / p_width;
	//float y_ratio = (float)this->height() / p_height;
	////glPixelZoom(x_ratio, y_ratio);
	//glDrawPixels(p_width, p_height, GL_BGR_EXT, GL_UNSIGNED_BYTE, pixels);
}
void myOpenGLWidget::initializeGL()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glShadeModel(GL_SMOOTH);

	glEnable(GL_DOUBLEBUFFER);
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);
	glEnable(GL_DEPTH_TEST);
	glClearDepth(1);

	light_position[0] = light_position[1] = light_position[2] = 1;
	light_position[3] = 0;
	setLight();
}
void myOpenGLWidget::paintGL()
{
	glShadeModel(GL_SMOOTH);
	
	if (showLight)
		setLight();
	else
	{
		glDisable(GL_LIGHTING);
		glDisable(GL_LIGHT0);
	}
	


	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	register GLfloat eyepos[3];
	for (int i = 0; i <= 2; ++i)
		eyepos[i] = eye_distance_ * eye_direction_[i];
	
	gluLookAt(eyepos[0], eyepos[1], eyepos[2],
		eye_goal_[0], eye_goal_[1], eye_goal_[2],
		0.0, 1.0, 0.0);
	
	glPushMatrix();
	
	glMultMatrixf(ptr_arcball_->GetBallMatrix());

	render();
	glPopMatrix();



}
void myOpenGLWidget::resizeGL(int w, int h)
{
	h = (h == 0) ? 1 : h;

	ptr_arcball_->reSetBound(w, h);

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0, GLdouble(w) / GLdouble(h), 0.001, 1000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}
void myOpenGLWidget::timerEvent(QTimerEvent * e)
{
	qDebug() << "time";
	update();
}
void myOpenGLWidget::mousePressEvent(QMouseEvent *event)
{
	switch (event->button())
	{
	case Qt::LeftButton:
		ptr_arcball_->MouseDown(event->pos());
		break;
	case Qt::MidButton:
		current_position_ = event->pos();
		break;
	default:
		break;
	}

	update();
}
void myOpenGLWidget::mouseMoveEvent(QMouseEvent *e)
{
	switch (e->buttons())
	{
		setCursor(Qt::ClosedHandCursor);
	case Qt::LeftButton:
		ptr_arcball_->MouseMove(e->pos());
		break;
	case Qt::MidButton:
		eye_goal_[0] -= 4.0*GLfloat(e->x() - current_position_.x()) / GLfloat(width());
		eye_goal_[1] += 4.0*GLfloat(e->y() - current_position_.y()) / GLfloat(height());
		current_position_ = e->pos();
		break;
	default:
		break;
	}

	update();
}
void myOpenGLWidget::wheelEvent(QWheelEvent * event)
{
	eye_distance_ += event->delta()*WheelSpeed;
	eye_distance_ = eye_distance_ < 0 ? 0 : eye_distance_;

	update();
}
void myOpenGLWidget::mouseDoubleClickEvent(QMouseEvent *e)
{
	switch (e->button())
	{
	case Qt::LeftButton:
		break;
	default:
		break;
	}
	update();
}
void myOpenGLWidget::mouseReleaseEvent(QMouseEvent *e)
{
	switch (e->button())
	{
	case Qt::LeftButton:
		ptr_arcball_->MouseUp(e->pos());
		setCursor(Qt::ArrowCursor);
		break;

	case Qt::RightButton:
		break;
	default:
		break;
	}
}
