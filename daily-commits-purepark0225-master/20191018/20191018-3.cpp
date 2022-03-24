// 따배씨 6.7 포인터의 기본적인 사용법

#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d; // 4 X 4 = 16
};

int main() // 지역 변수는 '스택' 메모리를 사용하고 
{				// 동적 할당 메모리는 '힙' 메모리를 사용합니다
		int x = 5;
		double d = 123.0;

		cout << x << endl;
		cout << &x << endl; // & : address of operator
		cout << (int)&x << endl; // 10진수로 보기

		// de-reference operator (*)
		// de-reference는, 포인터가 "저쪽 주소에 가면 이 데이터가 있어요"라고
		// 간접적으로 가리키기만 하는 것에 대해서,
		// 그럼 거기에 진짜 뭐가 있는지 내가 들여다볼께"라며
		// 직접적으로 접근하겠다는 의미이다.

		cout << *(&x) << endl;

		//typedef int* pint;
		//pint ptr_x = &x, ptr_y = &x;

		int *ptr_x = &x, *ptr_y = &x;
		double *ptr_d = &d;
		// pointer가 타입을 알고 있어야 하는 것은 de-referencing할 때 가져올 타입을 헷갈리지 않기 위함

		cout << ptr_x << endl;
		cout << *ptr_x << endl;

		cout << ptr_d << endl;
		cout << *ptr_d << endl;

		cout << sizeof(x) << endl;
		cout << sizeof(d) << endl;
		cout << sizeof(&x) << endl;	<< " " << sizeof(ptr_x) << endl;
		cout << sizeof(&d) << endl; << " " << sizeof(ptr_d) << endl;

		// 집이 크다고 해서 주소가 큰 건 아님. 포인트도 값을 저장하기 위한 변수일 뿐

		Something ss;
		Something *ptr_s;

		cout << sizeof(Something) << endl;
		cout << sizeof(ptr_s) << endl; // 주소 크기는 4 byte로 같음

		return 0;
}			