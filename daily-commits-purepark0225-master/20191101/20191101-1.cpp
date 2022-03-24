//따배씨 6.11 메모리 동적 할당 new와 delete

#include <iostream>

using namespace std;

int main()
{
	// int var;
	// var = 7; 밑과 동일한 결과

	int *ptr = new int;	// int만큼 OS에서 메모리를 받아온 다음, 그 메모리의 주소를 알려주기 때문에 포인터로 받아야함
						// new int (7) or new int {7} 이렇게 초기화도 가능
	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;	
	ptr = nullptr;

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}	
	
	return 0;
}