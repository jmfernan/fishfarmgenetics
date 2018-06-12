/*
 * fish.h
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */

#ifndef FISH_H_
#define FISH_H_

#include <string>
class Fish{
private:
	std::string fishtype;
	float fcr, pp, fc, swf, cex;
public:
	Fish(void);
	float get_fcr(void);
	float get_pp(void);
	float get_fc(void);
	float get_swf(void);
	float get_cex(void);
protected:
};



#endif /* FISH_H_ */
