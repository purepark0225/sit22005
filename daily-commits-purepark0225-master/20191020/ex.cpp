#include <iostream>
#include "MyConstants.h"

//extern int a = 123;	// 외부연결을 위해 초기화를 해야함

void doSomething()
{
	using namespace std;
	
	cout << "In ex.cpp" << Constants::pi << endl;
}