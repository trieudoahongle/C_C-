// to_string example
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include <sstream>
#include <vector>

using namespace std;
// std::cout   -> cout

template <class T>
class Stack {
   private:
      vector<T> elems;    // elements

   public:
      void push(T const&);  // push element
      void pop();               // pop element
      T top() const;            // return top element

      bool empty() const {      // return true if empty.
         return elems.empty();
      }
};
template <class T>
string ToString (T input){
	stringstream ss;
	ss << input;
	return ss.str();
}
int main ()
{/*
 since C++11.
  std::string pi = "pi is " + std::to_string(3.1415926);
  std::string perfect = std::to_string(1+2+4+7+14) + " is a perfect number";
  std::cout << pi << '\n';
  std::cout << perfect << '\n';
  */

int i = 123;
float f = 456.3;

stringstream ss;

cout << ToString(i) +"\n" + ToString(f);
  return 0;
}
