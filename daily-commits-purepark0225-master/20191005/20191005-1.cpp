// 따배씨++ 1.6 키워드와 식별자 이름짓기

// Chapter1_6.cpp : Defines the entry point for

void MyFunction()	
{

}

Class MyClass
{
public:
	int m_variable;
}

int main()
{
	int n_apples;
	'''식별자 사이마다 주로 '-'를 넣는다.
	대문자는 잘 쓰지 않음
	'''
	int total;		// 가능
	int _orange;		// _를 변수명 앞에 쓰면 안됨
	int VALUE;		// 가능은 하나 대문자로는 잘 안씀
	int my variable name;		// 공백이 있으면 안됨. 공백 대신 _를 입력
	int TotalCustomers;		// 가능은 하나 변수명 보단느 주로 함수나 클래스명에 이처럼 사용
	int void;		// 안됨
	int numFruit;		// 가능
	int 2some;		// 안됨. 숫자가 변수명 제일 앞에 오면 안됨
	int meters_of_pipe		// 가능
}