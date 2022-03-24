// 따배씨 6.10 C언어 스타일의 문자열 심볼릭 상수

#include <iostream>

using namespace std;

const char* getName()
{
	return "Jackjack";
}

int main()
{
	//char name [] = "Jack Jack";
	const char *name = getName();	// const 가 메모리를 없애지 않고 출력할 수 있도록 도와줌
	const char *name2 = getName()

	cout << (uintptr_t)name << endl;	// 내용이 똑같으면 주소가 같음
	cout << (uintptr_t)name2 << endl;	// 내용이 다르면 주소가 다름
}