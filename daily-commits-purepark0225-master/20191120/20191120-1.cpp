#include <iostream>
#include <cstring>

using namespace std;

class record {
public:
	char *name;
	char *tel;
	record(const char *, const char *);
	record(const record &);
	~record();
	void modifyTel(const char *_tel);
	void print(void);
};

record::record(const char *_n, const char *_tel)
{
	name = new char[strlen(_n)+1];
	strcpy(name, _n);
	tel = new char[strlen(_tel)+1];
	strcpy(tel, _tel);
}

record::record(const record &_record)	// deep copy
{
	name = new char[strlen(_record.name)+1];
	strcpy(name, _record.name);
	tel = new char[strlen(_record.tel)+1];
	strcpy(tel, _record.tel);
}

record::~record()
{
	delete name, tel;
}

void record::modifyTel(const char *_tel)
{
	delete tel;
	tel = new char[strlen(_tel)+1];
	strcpy(tel, _tel);
}

void record::print(void)
{
	cout << name;
	cout << " : " << tel << endl;
}

int main() 
{
	record myRecord("Kim", "6565");
	record hisRecord(myRecord);
	myRecord.modifyTel("5454");
	myRecord.print();
	hisRecord.print();
	return 0;
}