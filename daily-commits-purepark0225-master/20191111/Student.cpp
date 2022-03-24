#include "Student.h"
#include <iostream>

Student::Student()
{
	std::cout << "Student" << std::endl;
}

Student::Student(int num)	// constructor with argument
{
	age = num;
}

int Student::speak(int num)
{
	std::cout << age << std::endl;
	switch(num)
	{
		case 1:
		{
			std::cout << "Hello world!" << std::endl;
		}
		break;
		case 2:
		{
			std::cout << "Bye, world!" << std::endl;
		}
		break;
	}
	return 0;
}