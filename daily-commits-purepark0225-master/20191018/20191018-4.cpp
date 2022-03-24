// 따배씨 6.7a 널 포인터 Null Pointer

#include <iostream>
#include <cstddef>

using namespace std;

coid doSomething(double *ptr) 
{
if (ptr != nullptr)
	{
		// do something useful
		cout << "address of pointer variable in doSomething() " << &ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double *ptr{nullptr}; // modern c++

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	//std::nullptr_t nptr;		// nptr에는 null pointer 밖에 못넣음

	cout << "address of pointer variable in main() "			 << &ptr << endl;
	return 0;

}