/*
 * farm.c
 *
 *  Created on: May 28, 2018
 *      Author: ph01
 */

#include "farm.h"
#include <math.h>

Farm::Farm(float x0, float y0, float reinolds, float meandepth, float meanvel, float maxhs, int ncages0, Cage cage0, Fish fish0){
    isactive = false;
    ws = 0.04;
    vis = .000001;    //#1*10**(-6)#m2s-1
    g = 9.81;         //#ms-2
    s = 2.65;
    dwmax = 4;        //#gC/m2day     Unists here defines all the weight units

    cage = cage0;
    fish = fish0;
    ncages = ncages0;
    x = x0;
    y = y0;
    re = reinolds;
    wsstar = pow(ws,3.0)/((s-1)*g*vis);
    ratiodwew = -.42*log10(re)+0.16*log10(wsstar)+2.83;
    ewmax = dwmax/ratiodwew;
    cfeed = ewmax/(fish.get_swf()+(1-fish.get_swf())*fish.get_cex());
    bm = cfeed*fish.get_pp()/(fish.get_fcr()*fish.get_fc());
    production = ncages*cage.getarea()*bm;
    sd = bm/cage.getdepth();
}

float Farm::distancetonode(Farm othernode){
	return pow(pow(x-othernode.x,2)+pow(y-othernode.y,2),.5);
}

bool Farm::inside_polygon(float *points){

    /*
     *
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


	return true;
}

float Farm::equivalent_radio_node(void){
    float area = ncages * cage.getarea();
    return pow(area/3.141592,.5);
}


/*
 *
    class Node(object):



*
*/


