// deep copy constructor

#include <iostream>
using namespace std;

class record{
public:
	char *name;
	char *tel;
	recprd(char *, char *);
	record(const record &);
	~record();
	void modifyTel(char *_tel);
	void print(void);
};

record::record(char *_n, char *_tel)	// 1, 3째 줄 - 공간 할당, 2, 4째 줄 - 값 복사
{
	name = new char[strlen(_n)+1];	// null character 도 저장할 수 있게 +1
	strcpy(name, _n);	
	tel = new char[strlen(_tel)+1];
	strcpy(tel, _tel);
}

record::record(const record & _record){	// deep copy
	name = new char[strlen(_record.name)+1];
	strcpy(name, _record.name);
	tel = new char[strlen(_record.tel)+1];
	strcpy(tel, _record.tel);
}

record::~record(){
	delete name, tel;
}

void record::modifyTel(char *_tel){
	delete tel;
	tel = new char[strlen(_tel)+1];
	strcpy(tel, _tel); 
}

void record::print(void){
	cout << name;
	cout << " : " << tel << endl;
}

int main() {
	record myRecord("KIM", "6565");
	record hisRecord(myRecord);
	myRecord.modifyTel("5454");
	myRecord.print();
	hisRecord.print();
	return 0;
}

/*

- Shallow copy problem
두 개의 point variable이 같은 공간을 가리키게 되는 것
destructor에서 각각의 공간을 삭제하는 경우 문제가 생길 수 있다

- 이러한 shallow copy problem을 해결하기 위해 deep copy 수행
1. copy constructor를 재정의하는 방법
2. assign operator를 재정의하는 방법

- deep copy
pointer valiable : 주소값을 저장하는 공간
주소공간에서 원래 가리키는 데이터 object가 있었다는 뜻
data object의 주소가 가리키는 곳에 데이터가 있으니까 그 데이터만큼 별도의 공간을 할당해주고,
그 값을 복사해준다.

default constructor -> 주소값을 복사
deep copy constructor -> 주소가 가리키는 데이터를 복사

*/