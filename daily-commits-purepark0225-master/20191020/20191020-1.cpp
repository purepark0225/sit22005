// 따배씨 4.2 전역 변수, 정적 변수, 내부연결, 외부연결

#include <iostream>	
#include "MyConstants.h"

using namespace std;

/*

	int g_x; // external linkage 초기화가 안된 전역변수를 설정하는거다
	static int g_x; // internal linkage. 다른 cpp파일에서 이 변수로 접근 불가. 초기화가 안된 정적 변수이다.
	const int g_x;	// 초기 값을 설정해서 초기화를 해야 함

	extern int g_z;
	extern const int g_z;	// 어느 한 곳에서 초기화가 되어있어야 함

	int g_y(1);	// 초기화가 된 전역 변수
	static int g_y(1);	// 다른 cpp파일에서 접근이 불가한 정적 변수를 초기화까지 한 경우
	const int g_y(1); 	// 일반적인 선언. 같은 파일 안에서만 접근하는 것

	extern int g_w(1);	// 초기화도 하고 전역변수이기도 하고 다른 cpp파일에서 접근도 가능, 다른 곳에서도 초기화를 하면 안됨
	extern const int g_w(1); // 초기화가 제대로 됐고, 외부에서도 접근 가능


*/

// forward declaration

// void doSomething();	// extern 생략 가능
				// 어딘가 다른 파일에 doSomething 이라는 몸체가 존재한다
							// 이름이 같으면 안됨
// void doSomething1()
// {
// 	// int a = 1; 	// 이 함수 안에서만 작동
// 	static int a = 1;	// a라는 변수가 메모리를 os에서 받음.
// 						// 함수로 다시 들어간다면 이것을 재사용하며, 다시 반복하지 않음
// 						// 그렇기에 처음에 초기화를 반드시 해야한다.
// 	++a;
// 	cout << a << endl;
// }


int main()
{
	cout << "In main.cpp file " << Constants::pi << endl;
	
	doSomething();

	return 0;
}

// internal linking : 
// external linkage : 다른 cpp파일에 있는 변수를 부르는 것