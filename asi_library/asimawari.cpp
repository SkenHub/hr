/*
 * asimawari.cpp
 *
 *  Created on: 2022/12/02
 *      Author: p1ing
 */

#include "asimawari.h"
#include "math.h"

double syutu[4];
double deg;
double sennkai;
double L;
double arufa;

void Asimawari::init(double lx,double ly,double R,double a,double b,double rx)
{
	rxjiku = rx;
	lxjiku = lx;
	lyjiku = ly;
	hannkei = R;
	tate = a;
	yoko = b;
}
double *Asimawari::omuni3(){

	sennkai = (rxjiku/127.5)*100;
	deg = atan(lyjiku/lxjiku);
	syutu[0] = -sin(deg)*lxjiku + cos(deg)*lyjiku + hannkei*sennkai;
	syutu[1] = -sin(deg + 120)*lxjiku + cos(deg + 120)*lyjiku + hannkei*sennkai;
	syutu[2] = -sin(deg + 240)*lxjiku + cos(deg + 240)*lyjiku + hannkei*sennkai;

	return &syutu[0];
}
double *Asimawari::omuni4(){

	sennkai = (rxjiku/127.5)*100;
	deg = atan(lyjiku/lxjiku);
	syutu[0] = -sin(deg)*lxjiku + cos(deg)*lyjiku + hannkei*sennkai;
	syutu[1] = -sin(deg + 90)*lxjiku + cos(deg + 90)*lyjiku + hannkei*sennkai;
	syutu[2] = -sin(deg + 180)*lxjiku + cos(deg + 180)*lyjiku + hannkei*sennkai;
	syutu[3] = -sin(deg + 270)*lxjiku + cos(deg + 270)*lyjiku + hannkei*sennkai;

	return &syutu[0];
}
double *Asimawari::mekanamu(){

	sennkai = (rxjiku/127.5)*100;
	L = sqrt(pow(yoko,2)+pow(tate,2))*cos(arufa);
	arufa = deg-atan(yoko/tate);
	syutu[0] = -lxjiku*sin(deg)+lyjiku*cos(deg)+L*sennkai;
	syutu[1] = -lxjiku*sin(deg)-lyjiku*cos(deg)+L*sennkai;
	syutu[2] = lxjiku*sin(deg)-lyjiku*cos(deg)+L*sennkai;
	syutu[3] = lxjiku*sin(deg)+lyjiku*cos(deg)+L*sennkai;

	return &syutu[0];
}
double Asimawari::dokusute(){



	return 0;
}
