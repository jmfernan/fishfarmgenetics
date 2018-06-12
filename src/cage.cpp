/*
 * cage.cpp
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */

#include "cage.h"

#include <string>




Cage::Cage(void){
	cagetype = std::string ("box");
	sizex=3;
	sizey=3;
	sizez=3;
}
float Cage::getarea(void){
    if (cagetype.compare(  std::string ("box") )==0)
		return sizex*sizey;
	return -1;
}

float Cage::getvolume(void){
    if (cagetype.compare(  std::string ("box") )==0)
    	return sizex*sizey*sizez;
	return -1;
}

float Cage::getdepth(void){
    if (cagetype.compare(  std::string ("box") )==0)
    	return sizez;
	return -1;
}


