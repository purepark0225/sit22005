#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string>

class Person
{
public:
	char *name;
	int age;

public:
	string::std getName()
	{
		return name;
	}

	virtual void setMoreInformation();

 	void printTypeAndName()
 	{
 		// std::cout << type << "/" << name << std::endl;
 	}

	virtual void printInformation();
};

class Professor : public Person
{
private:
	int salary;
	char *department;

public:
	Professor(int _salary, const char* _department)
	{
		department = new char[strlen(_department)+1];
		salary = _salary;
		extern char *strcpy(department = _department);
	}

	int getSalary()
	{
		return salary;
	}

	virtual void setMoreInformation()
	{
		std::cout<<"Salary? ";
		std::cin>>salary;
		std::cout<<"Department? ";
		std::cin>>department;
	}

	void printTypeAndName();

	virtual void printInformation()
	{
		std::cout << "Name : " << name << std::endl;
		std::cout << "Age : " << age << std::endl;
		std::cout << "Salary : " << salary << std::endl;
		std::cout << "Department : " << department << std::endl;
	}
};


class Student : public Person
{
private: 
	int ID;

public:
	Student(int _age, const char* _name)
	{
		name = new char[strlen(_name)+1];
		_age = age;
		strcpy(name = _name);
	}

	int getID()
	{
		return ID;
	}

	virtual void setMoreInformation(const int _ID)
	{
		// std::cout<<"ID? ";
		// std::cin>>_ID;
		// ID = _ID;
	}

	void printTypeAndName();

	virtual void printInformation()
	{
		// std::cout << "Name : " << name << std::endl;
		// std::cout << "Age : " << age << std::endl;
		// std::cout << "ID : " << ID << std::endl;
	}
};

class GraduateStudent : public Student
{
public:
	printTypeAndName();
	virtual void printInformation();
};

Person::Person(int _age, const char* _name)
{
	name = new char[strlen(_name)+1];
	age = _age;
	strcpy(name, _name);
}


int main(){

	Person *list[100];
	int count = 0;

	while(true){
		static int type;
		int age;
		char name[100];

	    std::cout<<"Enter the type (0:Professor, 1:Student, 2:GraduateStudent, -1:End) "<<std::endl;
		std::cout<<">> ";
		std::cin>>type;

		if(type==-1) break;
		std::cout<<"Age? ";
		std::cin>>age;
		std::cout<<"Name? ";
		std::cin.getline(name, 100);

		if(type==0)
			list[count] = new Professor(age, name);
		if(type==1)
			list[count] = new Student(age, name);
		if(type==2)
			list[count] = new GraduateStudent(age, name);

		list[count++]->setMoreInformation();
		std::cout<<std::endl;
	}

	while(1){
		int num;

		std::cout<<"Choose one member (-1 : exit)"<<std::endl;

		for(int i=0; i<count; i++){
			std::cout<<"["<<i<<"]"<<" : ";
			list[i]->printTypeAndName();
		}
		std::cout<<">>";
		std::cin>>num;

		if(num==-1) break;
		list[num]->printInformation();
		std::cout<<std::endl;
	}
	
	return 0;
}
