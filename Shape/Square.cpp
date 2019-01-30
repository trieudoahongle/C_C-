/*
 * Square.cpp
 *
 *  Created on: Jan 25, 2019
 *      Author: lqmnhut
 */

#include "Square.h"
#include <string>
#include<cstring>
#include<iostream>
#include <sstream>



Square::Square() {
	// TODO Auto-generated constructor stub

}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

void Square::print() {
	// TODO Auto-generated destructor stub
	std::cout <<" Square ";
}

void Square::type() {
	// TODO Auto-generated destructor stub
	std::cout <<"Square type ";
}

void showType(Line base){
	std::cout <<"\n----type------\n";
	base.type();
}

void showTypePointer(Line *base){
	std::cout <<"\n-----pointer-----\n";
	base->type();
}


int main(){
	std::cout <<"----------\n";
	Line line;
	line.type();
	std::cout <<"\n";
	line = *(new Square());
	line.type();
	std::cout <<"\n";

	Square square;
	//square.print();
	square.type();
	showType(square);

	Rectangle r;
	showType(r);

	showTypePointer(&square);
	showTypePointer(&r);

	return 1;
}
