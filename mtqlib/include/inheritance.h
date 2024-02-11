//This header is a exercise that demonstrated

#ifndef __INHERITANCE_H__
#define __INHERITANCE_H__

#include <iostream>

class A {
public:
	int _a;
	A() { _a = 0; std::cout << "Class A Constructor \n"; printA();} 

	A(int n) { _a = n; std::cout << "Class A Constructor \n"; printA(); }

	void printA() { std::cout << "A == " << _a << std::endl; }

	// deve ser virtual para sempre ser chamada na destruição de objeto derivado
    // até mesmo quando referenciado por variavel base (sem o virtual,  neste caso não seria chamado)
	virtual ~A() { std::cout << "Class A Destructor \n"; }

};
class B : public A {
public:
	int _b;

	B() { _b = 0; std::cout << "Class B Constructor \n"; printB(); }
	B(int n) { _b = n; std::cout << "Class B Constructor \n"; printB(); }

	void printB() { std::cout << "B == " << _b << std::endl; }
	~B() { std::cout << "Class B Destructor" << std::endl; }

};

#endif
