//따배씨 6.11 메모리 동적 할당 new와 delete

#include <iostream>

using namespace std;

int main()
{
	// int var;
	// var = 7; 밑과 동일한 결과

	int *ptr = new (std::nothrow) int{7};	// std::nothrow -> 오류를 발생시키지 않고 예외처리
	int *ptr2 = ptr;

	delete ptr;
	ptr = nullptr;
	// ptr2 = nullptr;
	// *ptr2

	return 0;
}