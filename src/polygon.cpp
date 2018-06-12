/*
 * polygon.cpp
 *
 *  Created on: May 29, 2018
 *      Author: ph01
 */


#include "polygon.h"

Vector2d::Vector2d(void){
	v2.resize(2);
	v2[0]=0;
	v2[1]=1;
	d=5;
}

Polygon::Polygon(void){

}

Polygon::Polygon(int n){
	vertices.resize(n);


}

int Polygon::size(void){
	return vertices.size();
}

void Polygon::print(void){
	std::cout << "print polygon\n";
	vertices.begin();
	std::vector < Vector2d > verttmp;
	vertices[0];
	vertices[0].v2;
	vertices[0].v2[0];
	//std::cout << vertices[0];

}



std::ostream& operator<<(std::ostream& os, const Polygon& m){
	os << "2";
	//for (std::vector<float>::iterator it = m.vertices.begin() ; it != m.vertices.end(); ++it)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//std::cout << m.vertices.begin();
	m;
	m.vertices.begin();
	std::vector< Vector2d >::iterator it;

	//for (std::vector<Vector2d>::iterator it = m.vertices.begin(); it != m.vertices.end(); ++it)
	//	std::cout << "zz\n";
	    //std::cout << ' ' << *it;


	//std::copy(begin(m.vertices), end(m.vertices), std::ostream_iterator<float>(std::cout, " "));

	//std::vector <Vector2d> vvi;

	//vector< vector<int> > vvi;
	//Then you need to use two iterators to traverse it, the first the iterator of the "rows", the second the iterators of the "columns" in that "row":

	//assuming you have a "2D" vector vvi (vector of vector of int's)
	//vector< vector<int> >::iterator row;
	//vector<int>::iterator col;
	//for (row = vvi.begin(); row != vvi.end(); row++) {
	//    for (col = row->begin(); col != row->end(); col++) {
	//        // do stuff ...
	//    }
	//}




	return os;
}


