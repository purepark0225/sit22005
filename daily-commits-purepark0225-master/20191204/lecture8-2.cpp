/*

Constuctor

- class의 이름과 같은 함수
- return 값이 없다.
- default constructor로 사용할 때는 꼭 public에 만들어야 함
- default constructor를 private에 생성하고 다른 생성자를 정의하게 되면 그 해당 생성자만을 이용해서 객체를 생성하게끔 강제할 수 있다.

*/
// Default constructor with no argument

#include <iostream>
using namespace std;
#define MAX 10

class record{
public:
	char name[MAX];

private:  
	int course1, course2;
	double avg;

public:
	record();	// without supplying an argument -> Default constructor
	void print(void);
};

void record::print(void){...}

record::record(){		// class, scope resolution, constructor
	strcpy(name, "");
	course1 = course2 = 100;
	avg = 100;
}

int main(){
	record myRecord = record::record();	// Same initialization
	record hisRecord = record();		// 명시적으로 기본 생성자 호출
	record herRecord;					// 기본생ㅓㅇ자

	/*
	- Wrong case

	record yourRecord = {"HONG GD", 100, 100};
	yourRecord.print();

	record myRecord = record::record();
	myRecord.print();

	*/
	return 0;
}