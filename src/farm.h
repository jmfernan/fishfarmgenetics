/*
 * farm.h
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */

#ifndef FARM_H_
#define FARM_H_


//float hause=2;

#include <string>
#include "fish.h"
#include "cage.h"

class Farm {
private:
	Cage cage;
	Fish fish;
	bool isactive;
	int ncages;
	float ws, vis,g,s,dwmax,x,y,re,wsstar,ratiodwew,ewmax,cfeed,bm,production,sd;
public:
	Farm(float x, float y, float reinolds, float meandepth, float meanvel, float maxhs, int ncages, Cage cage0, Fish fish0);
	float distancetonode( Farm otherfarm);
	bool inside_polygon(float *points);
	float equivalent_radio_node(void);
protected:

};

/*

    def inside_polygon(self, points):
        """
        Return True if a coordinate (x, y) is inside a polygon defined by
        a list of verticies [(x1, y1), (x2, x2), ... , (xN, yN)].

        Reference: http://www.ariel.com.au/a/python-point-int-poly.html
        """
        n = len(points)
        inside = False
        p1x, p1y = points[0]
        for i in range(1, n + 1):
            p2x, p2y = points[i % n]
            if self.y > min(p1y, p2y):
                if self.y <= max(p1y, p2y):
                    if self.x <= max(p1x, p2x):
                        if p1y != p2y:
                            xinters = (self.y - p1y) * (p2x - p1x) / (p2y - p1y) + p1x
                        if p1x == p2x or self.x <= xinters:
                            inside = not inside
            p1x, p1y = p2x, p2y
        return inside

*/

#endif /* FARM_H_ */
