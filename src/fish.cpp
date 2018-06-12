/*
 * fish.cpp
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */
#include "fish.h"

Fish::Fish(void){
	fishtype =  std::string ("grouper");
    fcr = 3.15;
    pp = 300;
    fc = 0.164;
    swf = .3;
    cex = .2;
}

float Fish::get_fcr(void){
	return fcr;
}
float Fish::get_pp(void){
	return pp;
}
float Fish::get_fc(void){
	return fc;
}
float Fish::get_swf(void){
	return swf;
}
float Fish::get_cex(void){
	return cex;
}
