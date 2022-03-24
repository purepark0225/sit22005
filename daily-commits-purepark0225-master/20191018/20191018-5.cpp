// 따배씨 6.8 포인터와 정적 배열

// 포인터와 정적 배열(array) 는 같다
#include <iostream>

using namespace std;

void printArray(int array[]) // int array[] = int *array
{
	cout << sizeof(array) << endl; // 4
	cout << *array << endl;

	*array = 100;
 }

int main()
{
	

	int array[5] = {9, 7, 5, 3, 1};

	cout << sizeof(array) << endl;  // 20, 5 X 4(int) array의 크기

	int *ptr = array;

	cout << *ptr << " " << *(ptr + 1) << endl; // 5 7

	cout << sizeof(ptr) << endl; 	// 4(32bit기준) 포인터 변수 자체의 크기

	// cout << array[0] << " " << array[1] << endl;
	// cout << array << endl;		// array는 배열이 아니라 포인터, 가장 첫 번째 byte의 주소를 담음
	// cout << &(array[0]) << endl;

	// cout << *array << endl;

	// int *ptr = array;
	// cout << ptr << endl;
	// cout << *ptr << endl;

	// // cout << *array << endl; // 9

	// // char name[] = "jackjack";
	// // cout << *name << endl; // j

	printArray(array); // 4
	
	cout << array[0] << " " << *array << endl;

	return 0;
}