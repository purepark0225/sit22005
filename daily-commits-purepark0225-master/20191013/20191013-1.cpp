// 따배씨 6.1 배열 기초 [1 of 2] array

#include <iostream>


int main()
{
	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int variable

	cout << sizeof(one_student_score) << endl; // 4 bite
	cout << sizeof(student_scores) << endl;	// 20 bite

	one_student_score = 100;

	student_scores[0] = 100;	// student_scores의 1번째 element
	student_scores[1] = 80;		// 2nd element
	student_scores[2] = 90;		// 3rd
	student_scores[3] = 50;		// 4th
	student_scores[4] = 0;		// 5th

	return 0;
}