#include <iostream>

int main() {
	short b;
	char ch;
	float f;

	std::cout << "int : " << sizeof(int) << "/ short int : " << sizeof(b) << std::endl;
	std::cout << "char: " << sizeof(ch) << std::endl;
	std::cout << "double : " << sizeof(double) << std::endl;
}