constructor & destructors

#include <iostream>
using namespace std;

class record{
public:
	char *name;
private:
	int course1, course2;
	double avg;

public:
	record(char *str = "", int s1 = 100, int s2 = 100);
	~record();
	void print(void);
};

record::~record(){	// destructor
	delete []name;
}

record::record(char *str, int s1, int s2){
	name = new char[strlen(str)+1];	// constructor
	strcpy(name, str);
	course1 = s1; course2 = s2;
	avg = ((double)(s1+s2))/2;
}

void record::print(void){...}

int main(){
	record *myRecord = new record();
	record *yourRecord = new record("KIM", 90, 100);

	myRecord -> print();
	yourRecord -> print();

	delete myRecord, yourRecord;

	return 0;
}

/*
global : 모든 함수(클래스의 멤버 함수도 포함)
static : 클래스의 멤버들 + 모든 클래스에 공유되는 공간
local : 클래스의 멤버들
*/