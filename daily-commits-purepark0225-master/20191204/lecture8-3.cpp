// Constructor with arguments

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
	record();				// overloading
	record(char* int);
	record(char*, int, int);
	void print(void);
};

record::record(){
	strcpy(name, "");
	course1 = course2 = 100;
	avg = 100;
}

record::record(char* str, int score){
	strcpy(name, str);
	course1 = course2 = score;
	avg = score;
}

record::record(char *str, int score1, int score2){
	strcpy(name, str);
	course1 = score1;
	course2 = score2;
	avg = ((double)(course1 + course2))/2.0;
}

void record::print(void){...}

int main() {
	record myRecord;
	record yourRecord = record("KIM", 80, 100);
	record hisRecord("LEE", 70);	// shorthand notation
									// same as record hisRecord = record("LEE", 70)

	myRecord.print();
	yourRecord.print();
	hisRecord.print();

	return 0;
}