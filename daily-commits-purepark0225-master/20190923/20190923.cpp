#include <iostream>
#include <cstring>

/*
array -> 동일한 데이터 타입으로 메모리공간을 쪼개서 사용한다.
struct -> 메모리 공간을 다양한 데이터 타입으로 쪼개서 사용한다.
*/
struct student
{
	int sid;
	char name[20];
	int score;
	char grade;
};

int main()
{
	std::cout << "Hello, World" << std::endl;
	int array[10];
	for( int i = 0; i < 10; i++)
	{
		array[i] = i * 10;
	}
	for( int i = 0; i < 10; i ++)
	{
		std::cout <<"i:" << i << ", Array[i]:" 
				<< array[i] << std::endl;
	}
	struct student stu1;
	stu1.sid = 10;
	strcpy(stu1.name, "aaa");
	stu1.score = 100;
	stu1.grade = 'A';

	std::cout << "sid:" << stu1.sid << std::endl;
	std::cout << "name:" << stu1.name << std::endl;
	std::cout << "score:" << stu1.score << std::endl;
	std::cout << "grade:" << stu1.grade << std::endl;

	return 0;
}
