#include <iostream>

int main()
{
	int array[10];
	int* ptr = array;

	for (int i = 0; i < 10; i++)
		array[i] = i+1;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "array: "<< &(array[i]) << " " << array[i] 
		<< std::endl;

		std::cout << "Ptr  : " << ptr + i << " " << *(ptr + i)		
		<< std::endl;
	}
	return 0;
}	
