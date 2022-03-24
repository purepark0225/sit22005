#include <iostream>

int main()
{
	for(int i = 0; i < 3; i++)
	{
		int num = rand() % 10;
		new int num = num;
		std::cout << num << std::endl;
	}

	char guess[3];
	std::cout << "Guess three number: ex(1 2 3)" << std::endl;
	std::cin >> guess[0] >> guess[1] >> guess[2];

	if (num = guess){
		std::cout << "correct" << std::endl;
	}

	std::cout << guess[0] << guess[1] << guess[2] << std::endl;
	return 0;
}
