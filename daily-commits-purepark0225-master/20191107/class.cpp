#include <iostream>	// in and out stream
#include <fstream>	// file stream

/*
1. 
int main(int argc, char* argv[])
{
	/*
	std::cout << argc << std::endl;
	for(int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}

	return 0;

	ex) docker restart 21300319
	argc : 3
	argv : "docker", "restart", "21300319"

	function signiture가 어떻게 생기는지?
	function의 개수, 타입, 순서가 달라야 함
	

}
*/

/* 
2. 
Parent - int var;			name 같음 : overide
		 void func(); 		name 다름 : feature added, extended

Child - int var;
		 void func(); 

*/


void print_function(std::ostream& out)	// ostream을 reference type으로 불러옴
{
	out << "SIT22005" << std::endl;
}


class Parent
{
private:
	int var;
public:
	void func(){
		int var = 10;	// 위 private의 var과 다른 것
		Parent::var = var; // class 안의 var에 func 안의 var을 assign
		func2();	// class scope : 같은 클래스 안에서 다른 함수를 부를 때는
					// name scope(::)를 쓰지 않아도 된다.
	};
	void func2(){
		std::cout << "Parent" << std::endl;
	};
};

class Child: public Parent	// public하게 Parent의 상속을 받음
{
private:
	
public:
	void func(){
		Parent::func();	// overide한 Parent의 함수 호출
		std::cout << "Child" << std::endl;
	};
};

int main()
{
	Parant p;
	Child c;
	Child* p_c = &c;

	p.func();
	std::cout << '------' << std::ednl;
	c.func();
	p_c -> func2();

	print_function(std::cout);
	std::ofstream fout;
	fout.open("output.log");
	print_function(fout);

	return 0;
}