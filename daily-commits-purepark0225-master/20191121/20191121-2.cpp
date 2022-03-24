// ch8 p.8
// Initialization of Class Objects as Members

#include <iostream>
using namespace std;

#define MAX 10

class record {
public:
	int id;
	int score;
	record(int i = 0, int s = 100);
	void print(void);
};

record::record(int i, int s)
{
	id = i; score = s;
}

void record::print(void){
	cout << id;
	cout << " : " << score << endl;
}

int main(){
	record myRecord(20090001, 70);
	myRecord.print();
	return 0;
}