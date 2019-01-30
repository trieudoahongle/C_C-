/*
 * MultiInheritance.cpp
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#include "MultiInheritance.h"
#include "iostream"
#include <string>
#include<cstring>

using namespace std;


MultiInheritance::MultiInheritance() {
	// TODO Auto-generated constructor stub
	cout << "Base constructor" <<endl;

}

MultiInheritance::~MultiInheritance() {
	// TODO Auto-generated destructor stub
	cout << "Base destructor" <<endl;
}
MultiInheritance::MultiInheritance(std::string Name) {
	// TODO Auto-generated destructor stub
	this->name = Name;
	cout << "Base destructor" <<endl;
}
void MultiInheritance::type(){
	cout << "Base class Type"<<endl;
}

void MultiInheritance::basic(){
	cout << "Base class"<<endl;
}
class child1:  public MultiInheritance {
public:
	child1() {
		cout << "child1 constructor" << endl;

	}
	child1(std::string Name) :
			MultiInheritance(Name) {
		cout << "child1 constructor" << endl;

	}
	~child1() {
		cout << "child1 destructor" <<endl;
	}
	virtual void type() {
		cout << "Child1 class" << endl;
	}
	virtual void basic() {
		cout << "Child1 basic" << endl;
	}
};

class child2:  public MultiInheritance {
public:
	child2()
			 {
		cout << "child2 constructor" <<endl;

	}
	child2(std::string Name) :
				MultiInheritance(Name) {
			cout << "child1 constructor" << endl;

		}
	~child2() {
		cout << "child2 destructor" <<endl;
	}
	virtual void type() {
		cout << "Child2 class" << endl;
	}
	virtual void basic() {
		cout << "Child2 basic" << endl;
	}

};

class all :  public child1,  public child2{

public:
	all() {
		cout << "all constructor" <<endl;
	}
	all(std::string Name):child1(Name), child2(Name) {

			cout << "all constructor" <<endl;
		}
	~all() {
		cout << "all destructor" <<endl;
	}
	void type() {
		cout << "all class" << endl;
	}
	void basic() {
		cout << "all basic" << endl;
	}

};

void genericFunction(MultiInheritance multi){
	cout<< multi.name << " -> \n";
      multi.type();
      multi.basic();
    cout <<"------------\n";
}

void genericFunction(child2 multi){
      multi.type();
      multi.basic();
    cout <<"------------\n";
}
void genericPointer(MultiInheritance *multi){
	  cout<< multi->name << " -> \n";
      multi->type();
      multi->basic();
      cout <<"------------\n";
}


void genericPointer(child1 *multi){
	  cout<< multi->name << " -> \n";
      multi->type();
      multi->basic();
      cout <<"------------\n";
}

int main(){
	MultiInheritance *p = new MultiInheritance("name");
	MultiInheritance m;
	child1 c1("c1");
	child2 c2("c2");
	all a("a");
	m.type();
	c1.type();
	c2.type();
	a.type();
	cout <<"--genericFunction----------\n";
	genericFunction(m);
	genericFunction(c1);
	genericFunction(c2);
	genericFunction(a);

	cout <<"--genericPointer--------\n";
	genericPointer(p);
	genericPointer(&m);
	genericPointer(&c1);
	genericPointer(&c2);
	genericPointer(&a);

	cout <<"--END--------\n";

	return 1;
}
