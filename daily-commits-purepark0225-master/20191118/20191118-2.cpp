#include <iostream>


void doSomething()
{
using namespace std;

#ifdef LIKE_APPLE		// 전처리기 : 정의가 되어있으면 실행
	cout << "APPLE" << endl;	// 전처리기 안에서는 매크로로 인한 교체를 안함
#endif

#ifndef LIKE_APPLE		// 정의가 안되어있으면 실행
						// 아니면 else로 해도 됨
		cout << "Orange" << endl;
#endif
}