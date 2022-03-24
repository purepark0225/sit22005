// 따배씨 6.9 포인터 연산과 배열 인덱싱

#include <iostream>

using namespace std;

int main()
{
	char name [] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(name[0])

	char *ptr = name;

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr + i); // ptr 대신 name을 적어도 됨
	}

	return 0;
}