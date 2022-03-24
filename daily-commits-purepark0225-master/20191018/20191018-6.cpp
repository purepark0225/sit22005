// 따배씨 6.8 포인터와 정적 배열
// array이가 struct나 class 안에 있을 경우, 
// 포인터로 강제 변환되지 않고 array 자체가 간다

#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = {9, 7, 5, 3, 1};
}

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl; // 20
}

int main()
{
	MyStruct ms;
	cout << ms.array[0] << endl; // 9
	cout << sizeof(ms.array) << endl; // 20

	doSomething(ms);

	return 0;
}