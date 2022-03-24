#include <iostream>

int main()
{
	char guess[3];
	std::cout << "Guess three number: ex(1 2 3)" << std::endl;
	std::cin >> guess[0] >> guess[1] >> guess[2];

	std::cout << guess[0] <<guess[1] << guess[2] << std::endl;
}