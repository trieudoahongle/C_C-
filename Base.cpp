/*
 * Base.cpp
 *
 *  Created on: Jan 7, 2019
 *      Author: lqmnhut
 */
#ifndef BASE_H_
#define BASE_H_
//#include <stdio.h>
#include <string>
#include<cstring>
#include<iostream>
#include <sstream>

using namespace std;

class Foo {
public:
  int a;
  char *Name;
  Foo(int _a, char * name){
	  this->a = _a;
	  int size = strlen(name);
	  Name = new char[size+1];
	  strcpy(Name,name);
	//  cout << "input:" << name<< endl;
	//  cout << "output:" << Name<< endl;

  };
  ~Foo(){
	  delete []Name;
  };
  void increase(int i){
	  a += i;
  };
  virtual int getValue();
  void printMe();
};
void Foo::printMe(){
	//  printf("%d ", a);
	  std::cout <<a<<std::endl ;
  };
  int Foo::getValue(){
	  return this->a;
  };
  template <class T>
  string ToString (T input){
  	stringstream ss;
  	ss << input;
  	return ss.str();
  }
  
 class Child:public Foo {
	 public:
	     int age;
		
		 Child(int ag, int a, char * name):Foo(a, name){
			 age = ag;
		 };
		 ~Child(){};
		 int getValue(){
			 return this->age;
		 }

		 std::string toString(){
			 /*
			 cout << "name:"<< this->Name<<endl;

			 string s;
			 int i;
			// char * names = this->Name;
		//	int size = strlen(names);
			//char arr[size] = this->Name;
			cout <<"size:"<<size <<endl;
			 for(i=0;i<size;i++)
			 {
			 s[i]= this->Name[i];
			 cout<<s[i];
			 }
			 */
			 return "Name is :" + ToString((this->Name))
					 + "\nAge is :" + ToString(age);
		 }
 };


#endif /* BASE_H_ */
void printValue(Foo *f){
	//printf("\n%d\n",f->getValue());
	std::cout <<f->getValue()<<std::endl;
}
void printValue2(Child c){
	//printf("\n%d\n",c.getValue());
	std::cout <<c.getValue()<<std::endl;
}
void print1(std::string str){
	std::cout<<"print1"<<str<<std::endl ;
}
void print2(std::string str){
	std::cout<<"print2"<<str<<std::endl ;
}

int main(){
	std::cout <<"hello"<<std::endl ;
	//f.printMe();
	//return f.getValue();
	char name [] = "name abc";
	 Foo f(6,name);
	// char *Copy = new char[20];
	  strcpy(name,"aaabbbcccddd");
	 // printf("%d, %s\n",f.getValue(), f.Name);
	 Child c(22,33,name);
	 cout << c.toString()<<endl;
	 	 cout <<"----------";
	 printValue(&f);
	 printValue(&c);
	 printValue2(c);	

     //printValue2(f);
//	  printf("%d, %s\n",c.getValue(), c.Name);
	  void (*func)(std::string);
	  func = &print1;
	  func("hello");
	  func = &print2;
	  func("hello");
	return 1;
}

