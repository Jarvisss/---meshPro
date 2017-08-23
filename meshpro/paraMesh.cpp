#include "paraMesh.h"

paraMesh::paraMesh(int t, MyMesh* p){
	type = t;
	ptrMesh = p;
}

paraMesh::~paraMesh(){

}

void paraMesh::para(){
	calBorderPoints();
	calInnerPoints();
	parameterize();
}

void paraMesh::calBorderPoints(){

}

void paraMesh::calInnerPoints(){

}

void paraMesh::parameterize(){

}

