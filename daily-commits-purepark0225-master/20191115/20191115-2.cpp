/*
CStudent라는 클래스를 만들어 본다. CStudent 클래스는 이름(char name[20]),
학번(int number), 나이(int age)를 저장하기 위한 멤버 변수를 포함하고 있다.
그리고 생성자와 멤버 변수의 값을 변경하기 위한 멤버 함수, 데이터를 출력하기 위한 멤버함수가 필요하다
*/

#include <iostream>
#include <cstring>
using namespace std;

 
class CStudent
{
private:
  char name[20];
  int number;
  int age;

public:
  CStudent(char *str, int num, int n)
  {
    strcpy(name, str);
    number = num;
    age = n;
  }
  
  CStudent()
  {
    strcpy(name, "noname");
    number = 0;
    age = 0;
  }

  void SetName(char *str)
  {
    strcpy(name, str);
  }

  void SetNumber(int num)
  {
    number = num;
  }

  void SetAge(int n)
  {
    age = n;
  }

  void Print()
  {
    cout <<  "이름: " << name << endl<< "나이: " << age << endl << "학번: " << number << endl;
  }

};

 
int main(void)
{
  CStudent St1("홍길동", 11111111, 25);
  CStudent St2;

  St1.Print();
  St2.Print();

  St2.SetName("이순신");
  St2.SetNumber(22222222);

  St2.SetAge(30);
  St2.Print();

  return 0;
}