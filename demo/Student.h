/*
 * Student.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef DEMO_STUDENT_H_
#define DEMO_STUDENT_H_

#include "Human.h"

namespace demo {

class Student: public Human {
public:
	Student();
	virtual ~Student();
};

} /* namespace demo */

#endif /* DEMO_STUDENT_H_ */
