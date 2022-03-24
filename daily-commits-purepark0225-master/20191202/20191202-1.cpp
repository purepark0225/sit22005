#include <iostream>

class base
{
public:
	base(int a):m_a(a){		// 할당과 동시에 초기화, int a처럼 arg로 받음
							
	}

protected:
	int m_a;	// m(member)

};

class base2: public base
{
public:
	base2(int a, int b):base(a), m_b(b){}	// base클래스를 상속받아 하는데, base에는 arg있기에
											// arg가 있는 base(10)을 할당과 동시에 초기화
protected:
	int m_b;
	
};