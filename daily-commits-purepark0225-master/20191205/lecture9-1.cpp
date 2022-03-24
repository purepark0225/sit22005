// Example of operator overloading

class ChangePockerClass
{
public:
	ChangePockerClass():quarters(0), dimes(0)
	{}

	ChangePockerClass(int q, int d):	// colon은 초기화 구문으로 할당과 동시에 초기화를 함
		quarters(q), dimes(d)
	{}

	void setQuarters(int var)	// 값 설정
	{
		quarters = val;
	}

	void setDimes(int val)
	{
		dimes = val;
	}

	int getQuarters()	// 값 반환
	{
		return quarters;
	}

	int getDims()
	{
		return dimes;
	}

private:
	int quarters;
	int dimes;
}

int main()
{
	ChangePockerClass c1;
	ChangePockerClass c2;
	ChangePockerClass c3;
	c1.setQuarters(5);
	c1.setDimes(7);
	c2.setQuarters(3);
	c2.setDimes(8);

	c3 = c1 + c2;

	return 0;
}
13분