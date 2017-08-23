#ifndef PARAMESH_H
#define PARAMESH_H

#include <OpenMesh/Core/IO/MeshIO.hh>  // 读取文件
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh> // 操作文件 
#include <vector>
#include <Eigen/dense>

using namespace Eigen;
using std::vector;

typedef OpenMesh::TriMesh_ArrayKernelT<> MyMesh;

class paraMesh{
	MyMesh				*ptrMesh;
	int					type;

	vector<Vector3d>	bd_pts;
	vector<Vector3d>	in_pts;


public:
	/*
	type:
	1 uniform;
	2 minimum square;
	3 shape preserve;
	*/
	paraMesh(int, MyMesh*);
	~paraMesh();

	/* calculate parameterized surface according to different types of parameterization */
	void para();

	/*
	* calculate the border points and save into v_Border
	*/
	void calBorderPoints();

	/*
	* calculate the border points and save into v_Inner
	*/
	void calInnerPoints();

	/*
	* do the parameterize according to type
	*/
	void parameterize();

};

#endif PARAMESH_H