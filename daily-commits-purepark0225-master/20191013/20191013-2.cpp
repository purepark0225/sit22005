// 따배씨 6.3 배열과 반복문

#include <iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = {84, 92, 76, 81, 56};

	const int num_students = sizeof(scores) / size(int);

	int max_score = 0
	int min_score = inf
	int total_score = 0;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		//max_score = (max_score < scores[i]) ? scores[i] : max_score; scores[i] 값이 더 크다면 전자 아니면 후자
		//min_score = (min_score > scores[i]) ? scores[i] : min_score;
		if(max_score < scores[i]) max_score = scores[i];
		if(min_score > scores[i]) min_score = scores[i];
	}
	
	double avg_score = static_cast<double>(total_score) / num_students;
	// static_cast<바구려고 하는 타입>(대상) : 형변환에 대한 타입 오류를 잡아준다
	cout << max_score << endl;

	/*
	int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;
	

	int total_score = score0 + score1 + score2 + score3 + score4 ;
	*/
	
	// Note : double(total_score) / num_students != double(total_score / num_students);
}