// 따배씨 1.11 헤더파일 만들기

#include <iostream>
#include "add.h" // 하부 파일(Myheaders)에 있다면 Myheaders/"add.h" 이런 식으로 작성

using namespace std;

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

