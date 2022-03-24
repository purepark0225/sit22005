// 따배씨 4.1 지역 변수의 범위와 지속기간

#include <iostream>

namespace work1::work11::work111		// 이름 충돌을 막기 위해 다른 작업이라는 것을 얘기하기 위헤 namespace 사용
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
			
		
}

namespace work2
{
	int a = 1;
	void doSomething()	// 이름은 같은데 parameter가 다르면 다른 함수임
	{						
		a += 5;
		
	}
}
int main()
{
	using namespace std;

	int apple = 5;

	cout << apple << endl;

	{
		int apple2 = 1;		// scope 안에서만 존재
		cout << apple2 << endl;	// 이름을 다르게 짓는 것이 헷갈리지 않음
	}

	cout << apple << endl;

	work1::a;		// work1 안에 있는 변수 a, 함수 doSomething
	work1::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}