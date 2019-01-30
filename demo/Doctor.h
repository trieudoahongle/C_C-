/*
 * Doctor.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef DEMO_DOCTOR_H_
#define DEMO_DOCTOR_H_

#include "Student.h"

namespace demo {

class Doctor: public Student {
public:
	Doctor();
	virtual ~Doctor();
};

} /* namespace demo */

#endif /* DEMO_DOCTOR_H_ */
