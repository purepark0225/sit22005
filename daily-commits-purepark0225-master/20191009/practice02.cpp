// Practice Session

// Practice 02

#include <iostream>

int main()
{ // scope for main function
	int var = 0;
	std::cout << var << std::endl;
	{
		int var = 10;
		std::cout << var << std::endl;
	}
	std::cout << var << std::endl;
	return 0;
}