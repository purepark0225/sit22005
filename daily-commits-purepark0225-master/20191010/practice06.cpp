#include <iostream>
int main()
{
	for(int i = 0; i < 10; i++)
	{
		int num = rand() % 10;
		std::cout << num << std::endl;
	}
	return 0;
}