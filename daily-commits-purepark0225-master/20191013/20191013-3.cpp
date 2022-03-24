// 따배씨 6.4 배열과 선택 정렬 selection sort

#include <iostream>

using namespace std;
// selection sort : 배열 앞부터 하나씩 가면서 가장 작은 숫자를 찾은 후 그 숫자와 시작 숫자를 바꾸는 것
// 				    작은 숫자는 앞으로, 큰 숫자는 뒤로 밀려남

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}
int main()
{
	/*			value    index
	3 5 2 1 4	  1		   3
	1 5 2 3 4	  2		   2
	1 2 5 3 4	  3		   3
	1 2 3 5 4	  4		   4
	1 2 3 4 5	  5		   4
	*/

	const int length = 5;

	int array[length] = {3, 5, 2, 1, 4};

	printArray(array, lenght);

	for (int startIndex = 0; startIndex < length -1; ++startIndex)	
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex)
	{
		if(array[smallestIndex] > array[currentIndex])
		{
			smallestIndex = currentIndex;
		}
	}

	// swap two values in the array
	// std::swap(array[smallestIndex], );
	{		
		int temp = array[smallestIndex];
		array[smallestIndex] = array[startIndex];
		array[startIndex] = temp
	}
}

	return 0;
}
