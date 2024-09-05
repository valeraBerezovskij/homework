#include <iostream>

class A {
public:
	A() {
		std::cout << "ctor A" << std::endl;
	}
};

int main()
{
	A a;
}
