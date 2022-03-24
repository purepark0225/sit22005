class Simple
{
	private:
		int val;
		char* name;

	public:
		Simple(){
			val = 0;
			name = new char[10];
			strcpy(name, "cbchoi");
		~Simple(){delete[] name;} 		// 소멸자
		}

	Simple(const Simple & rhs)			// rhs : 오른쪽에 있는 것
	{		
		val = rhs.val;
		name = new char[10];
		strcpy(name.rhs.name);
	}
};