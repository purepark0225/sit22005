// Constructors with arg and default values.

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
	record(char *str = "", int s = 100);
	void print(void);
};

record::record(char *str, int score){	// implicitly call with default values
	strcpy(name, str);					// (default constructor)
	course1 = course2 = score;
	avg = score;
}

void record::print(void){...}

int main() {
	record myRecord;
	record yourRecord = record("KIM", 90);
	record hisRecord  = "LEE"; // shorthand notation, same as record hisRecord = record("LEE");
								// 잘 사용하지 않음
	myRecord.print();
	yourRecord.print();
	hisRecord.print();

	return 0;
} 