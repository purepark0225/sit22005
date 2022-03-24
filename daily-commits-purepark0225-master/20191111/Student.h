#ifndef	_STUDENT_H
#define _STUDENT_H
#pragma once	// 딱 한번만 추가되는 것을 보장

class Student
{

	int age;	// private(6-9번째 줄)

public:
	Student();	// 생성자 : 아주 특별한 function
				// default constructor
	Student(int num);	// function overloading		

				// 클래스 타입과 이름이 동일하고 리턴값은 없다
				// public(10-16번째 줄)
				

	int speak(int option);

private:		// private(17-21번째 줄)


};
#endif