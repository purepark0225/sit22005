// 따배씨 6.10 C언어 스타일의 문자열 심볼릭 상수

#include <iostream>

using namespace std;


int main()
{
	//char name [] = "Jack Jack";
	int int_arr[5] = {1, 2, 3, 4, 5,};
	char char_arr[] = "Hello, World!";
	const char *name = "Jack Jack";	// const 가 메모리를 없애지 않고 출력할 수 있도록 도와줌

	cout << int_arr << endl;	
	cout << char_arr << endl;
	cout << name << endl;	// 문자의 포인터는 c스타일의 문자의 배열일 가능성이 높다 -> null이 나올 때까지 문자를 끝까지 출력해줌

	char c = 'Q';
	cout << &c << endl;	// 메모리 주소(포인터)가 cout에 들어가니까 문자열인가보다 해서
						// null이 나올 때까지 계속 출력되면서 이상하게 나옴

	return 0;
}