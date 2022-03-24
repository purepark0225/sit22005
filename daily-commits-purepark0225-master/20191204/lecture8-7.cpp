/*
Destructor
- A special, user-defined class member function defined in class
- The function is invoked whenever an object of its class variable goes out of scope or
operator delete is applied to a class pointer
*/

class record {
public:
	char name[MAX];

private:
	int course1, course2;
	double avg;

public:	// always in public
	record(){...}
	~record(){...}	// must not specify a return type

	void print(void);
};

int main(){
	record myRecord;	// scalar variable
	...
	return 0;	// record::~record() invoked for myRecord
				// main 함수 scope를 벗어나는 순간에 정의되어 있는 모든 변수들은 해제, 공간 삭제
}