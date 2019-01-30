/*
 * Square.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef SHAPE_SQUARE_H_
#define SHAPE_SQUARE_H_

#include "Parallelogram.h"
#include "Rectangle.h"


class Square: public Rectangle, public Parallelogram {
public:
	Square();
	virtual ~Square();
	void print();
	void type();
};



#endif /* SHAPE_SQUARE_H_ */
