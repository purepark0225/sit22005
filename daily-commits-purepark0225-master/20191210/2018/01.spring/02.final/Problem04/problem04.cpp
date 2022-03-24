#include <iostream>
#include <cstring>
#include <stdlib.h>

class Person
{
private:
   char *name;
   int age;
public:
   Person(int _age, char *_name){
      age = _age;
      int len = strlen(_name)+1;
      name = new char[len];
      strcpy(name,_name);
   }
   char getName()
   {
      std::cout << name;
   }
   int getAge()
   {
      int _age = age;
      return _age;
   }

   virtual int setMoreInformation(){}
   virtual int printTypeAndName(){}
   virtual int printInformation(){}
};

class Professor: public Person
{
private:
   int salary;
   char department[100];
public:
   Professor(int age, char* name):Person(age, name){

   }
   int getSalary()
   {
      return salary;
   }
   virtual int setMoreInformation(){
      std::cout<<"Salary? ";
      std::cin>>salary;
      std::cout<<"Department? ";
      std::cin>>department;
   }
   virtual int printTypeAndName(){
      std::cout << "Professor" << " / " << getName() << std::endl;
   }
   virtual int printInformation(){
      std::cout << "Name" << " : " << getName() << std::endl;
      std::cout << "Age" << " : " << getAge() << std::endl;
      std::cout << "Salary" << " : " << getSalary() << std::endl;
      std::cout << "Department" << " : " << department << std::endl;
   }
};

class Student: public Person
{
private:
   int ID;
public:
   Student(int age, char* name):Person(age, name){}
   int getID()
   {
      return ID;
   }
   virtual int setMoreInformation(){
      std::cout<<"ID? ";
      std::cin>>ID;
   }
   virtual int printTypeAndName(){
      std::cout << "Student" << " / " << getName() << std::endl;
   }
   virtual int printInformation(){
      std::cout << "Name" << " : " << getName() << std::endl;
      std::cout << "Age" << " : " << getAge() << std::endl;
      std::cout << "ID" << " : " << getID() << std::endl;
   }
};

class GraduateStudent: public Student
{
public:
   GraduateStudent(int age, char* name):Student(age, name){}
   virtual int printTypeAndName(){
      std::cout << "GraduateStudent" << " / " << getName() << std::endl;
   }
   virtual int printInformation(){
      std::cout << "Name" << " : " << getName() << std::endl;
      std::cout << "Age" << " : " << getAge() << std::endl;
      std::cout << "ID" << " : " << getID() << std::endl;
   }
};


int main(){

   Person *list[100];
   int count = 0;

   while(true){
      int type;
      int age;
      char name[100];

       std::cout<<"Enter the type (0:Professor, 1:Student, 2:GraduateStudent, -1:End) "<<std::endl;
      std::cout<<">> ";
      std::cin>>type;

      if(type==-1) break;
      std::cout<<"Age? ";
      std::cin>>age;
      std::cout<<"Name? ";
      std::cin>>name;

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