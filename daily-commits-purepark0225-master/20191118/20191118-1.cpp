// 따배씨 1.14 전처리기와의 첫 만남

#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER "Hello, World!"	// define(매크로) : 코드에서 MY_NUMBER를 만나면 9로 교체함
#define YOU 3333
#define MAX(a, b) (((a)>(b)) ? (a) : (b))	// 둘 중의 큰 것을 출력
											// 각각 싸는 이유는 무엇을 넣을지 모르기 때문에

#define LIKE_APPLE	// 정의가 되어있는 파일 안에서만 효력이 있음

void doSomething;

int main()
{
	cout << MY_NUMBER << endl;
	cout << YOU << endl;

	cout << MAX(1, 2) << endl;
	cout << std::max(1+3, 2) << endl;

	doSomething();

	return 0;
}