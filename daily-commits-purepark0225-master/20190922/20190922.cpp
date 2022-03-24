#include <iostream>

/*
array -> 동일한 데이터 타입으로 메모리공간을 쪼개서 사용한다.
struct -> 메모리 공간을 다양한 데이터 타입으로 쪼개서 사용한다.
*/

int main()
{
	std::cout << "Hello" << std::endl;
	int array[10];
	for( int i = 0; i < 10; i++)
	{
		array[i] = i * 10;
	}
	for( int i = 0; i < 10; i ++)
	{
		std::cout <<"i:" << i << ", Array[i]:" 
				<< array[i] << std::endl;
	}
	
	return 0;
}
