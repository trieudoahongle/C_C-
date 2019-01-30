/*
 * Parallelogram.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef SHAPE_PARALLELOGRAM_H_
#define SHAPE_PARALLELOGRAM_H_

#include "Line.h"


class Parallelogram: virtual public Line {
public:
	Parallelogram();
	virtual ~Parallelogram();
	void type();
};



#endif /* SHAPE_PARALLELOGRAM_H_ */
