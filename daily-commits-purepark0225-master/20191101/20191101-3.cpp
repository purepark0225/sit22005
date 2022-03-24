//따배씨 6.11 메모리 동적 할당 new와 delete

#include <iostream>

using namespace std;

int main()
{
	// memory leak

	while (true)
	{
		int *ptr = new int;	// delete를 꼭 해줘야 메모리 누수가 발생하지 않음
		cout << ptr << endl;	// 계속 출력하기 때문에 메모리가 계속 쌓임

		delete ptr;		// delete를 쓰면 받았다가 지워주기 때문에 메모리 누수가 발생하지 x
	}

	return 0;
}