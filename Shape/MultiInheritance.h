/*
 * MultiInheritance.h
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#ifndef SHAPE_MULTIINHERITANCE_H_
#define SHAPE_MULTIINHERITANCE_H_
#include <string>
#include<cstring>
using namespace std;
class MultiInheritance {
public:
	std::string name;
	MultiInheritance();
	MultiInheritance(std::string Name);
	virtual ~MultiInheritance();
	virtual void type();
	void basic();
};


#endif /* SHAPE_MULTIINHERITANCE_H_ */
