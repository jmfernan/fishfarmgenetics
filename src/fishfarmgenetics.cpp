//============================================================================
// Name        : fishfarmgenetics.cpp
// Author      : jose manuel fernandez jaramillo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "cage.h"
#include "fish.h"
#include "farm.h"
#include "polygon.h"


int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Cage cage;
	cout << cage.getarea() << " m2\n";
	Fish fish;
	cout << fish.get_pp() << " --\n";

	Polygon polygon(4);

	//polygon.reserve(10);
	//polygon[0][0]=0;
	//cout << "aaa" << polygon.capacity();
	cout << "aaa " << polygon.size()<<"\n";
	polygon.print();
	cout << polygon;



	return 0;
}
