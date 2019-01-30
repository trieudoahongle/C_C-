/*
 * Engineer.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef DEMO_ENGINEER_H_
#define DEMO_ENGINEER_H_

#include "Student.h"

namespace demo {

class Engineer: public Student {
public:
	Engineer();
	virtual ~Engineer();
};

} /* namespace demo */

#endif /* DEMO_ENGINEER_H_ */
