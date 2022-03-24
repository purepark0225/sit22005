//따배씨 6.12 메모리 동적 할당 배열

#include <iostream>

using namespace std;

int main()
{
	int fixedArray[] = {1, 2, 3, 4, 5};

	int *array = new int[5] {1, 2, 3, 4, 5};

	// resizing

	delete [] array;

	return 0;
}