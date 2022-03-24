// 따배씨 6.14 참조 변수 reference variable

#include <iostream>

using namespace std;

void doSomething(int &n)	 // &(refence)을 쓰게되면 아예 변수가 넘어감
{
	n = 10;
	cout << "In doSomething " << n << endl;
}

int main()
{
	int n = 5;

	cout << n << endl;

	doSomething(n);

	cout << n << endl;

	return 0;
}