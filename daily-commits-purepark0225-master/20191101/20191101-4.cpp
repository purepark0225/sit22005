//따배씨 6.12 메모리 동적 할당 배열

#include <iostream>

using namespace std;

int main()
{

	int length;

	cin >> length;

	//int array[length];
	int *array = new int[length](0);	// 0으로 초기화, {11, 22, 33, 44} -> 순서대로 들어감

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete [] array;	// 연속되는 긴 사이즈의 메모리를 죽이는 것이기 때문에 []를 기입

	return 0;
}