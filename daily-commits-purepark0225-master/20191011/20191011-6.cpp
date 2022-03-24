// 따배씨 1.10 선언과 정의의 분리

#include <iostream>

using namespace std;

int add(int a, int b);	// forward declaration : 프로토타입을 이용해 앞에 실제 기능 수행하는 부분은 뒤에 둠
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << multiply(2, 5) << endl;
	cout << subtract(7, 2) << endl;

	return 0;
}

// definition
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}


