/*
 * asimawari.h
 *
 *  Created on: 2022/12/02
 *      Author: p1ing
 */

#ifndef ASIMAWARI_H_
#define ASIMAWARI_H_
#include "math.h"

class Asimawari{

private:
	double rxjiku;
	double lxjiku;
	double lyjiku;
	double hannkei;
	double yoko;
	double tate;

public:
	void init(double lx,double ly,double R,double a,double b,double rx);
	double *omuni3(void);
	double *omuni4(void);
	double *mekanamu(void);
	double dokusute(void);
};
#endif /* ASIMAWARI_H_ */
