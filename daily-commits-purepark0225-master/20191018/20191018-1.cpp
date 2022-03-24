// 따배씨 6.6 C언어 스타일의 배열 문자열

#include <iostream>

using namespace std;

int main()
{
	char myString[] = "string";		// 문자열의 마지막을 표현하는 \0 이 맨 마지막에 이씅ㅁ

	for(int i = 0; i < 7; i++)
	{
		cout << myString[i] << endl;
	}


	char myString1[255];

	cin >> myString1;		// JackJack

	myString1[0] = "A";		// AackJack

	myString1[4] = '\0';	// JackJack -> Jack : cout은 \0까지만 출력함

	cout << myString1 << endl;	

	cin.getline(myString1, 255);		// 빈칸을 넣은 string을 출력하기 위함

	int idx = 0;
	while (true)		// 입력값의 한 글자마다 아스키 코드를 보기 위함
	{
		if (myString[ix] == '\0') break;

		cout << myString1[idx] << " " << (int)myString1[idx] << endl;	// (int)는 아스키 코드를 보여줌
		idx++;		
	}

	return 0;
}