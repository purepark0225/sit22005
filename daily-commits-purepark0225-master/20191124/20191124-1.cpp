#include <iostream>
#include <cstring>
using namespace std;

int count = 1;

class student {
	char name[20];
	int age;

public:
	student(const char* _name, int _age){	// λ¬Έμμμ converting a string constant to 'char*
		strcpy(name, _name);
		age = _age;
		cout << count++ << "th student" << endl;
	}
};	// class definition

int main()
{
	student s1("Kim", 20);
	student s2("Seo", 29);

	return 0;
}