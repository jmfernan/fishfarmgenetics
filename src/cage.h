/*
 * cage.h
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */

#ifndef CAGE_H_
#define CAGE_H_
#include <string>
class Cage {
private:
	std::string cagetype;
	float sizex, sizey, sizez;
public:
	Cage(void);
	float getarea(void);
	float getvolume(void);
	float getdepth(void);
protected:

};




#endif /* CAGE_H_ */
