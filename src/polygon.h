/*
 * polygon.h
 *
 *  Created on: May 29, 2018
 *      Author: ph01
 */

#ifndef POLYGON_H_
#define POLYGON_H_


#include <vector>
#include <iostream>

class Vector2d{
private:

public:
	std::vector <float> v2 {2};
	float d;
	Vector2d(void);
protected:
};




class Polygon{
private:

public:
	std::vector <Vector2d> vertices;
	Polygon(void);
	Polygon(int);
	int size(void);
	void print(void);
	friend std::ostream& operator<<(std::ostream& os, const Polygon& m);
protected:
};






#endif /* POLYGON_H_ */
