// 따배씨 1.7 지역 범위

#include <iostream>
using namespace std;

int main()
{
	int x = 0;	// 같은 scope안에 식별자가 같은 2가지 변수를 저장하지 못함
	
	cout << x << " " << &x << endl;


	{
		int x = 1;	// 중괄호 영역 안에 다시 영역이 생기면 저장되는 메모리가 다름

		cout << x << " " << &x << endl;

	}

	{
		int x = 3;
		cout << x << " " << &x << endl;
	}
	
		cout << x << " " << &x << endl;
}

