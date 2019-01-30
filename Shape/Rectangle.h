/*
 * Rectangle.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef SHAPE_RECTANGLE_H_
#define SHAPE_RECTANGLE_H_

#include "Line.h"


class Rectangle: virtual public Line {
public:
	Rectangle();
	virtual ~Rectangle();
	void print();
	virtual void type();
};


#endif /* SHAPE_RECTANGLE_H_ */
