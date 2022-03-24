#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf
// 따배씨++ 1.4 입출력 스트림과의 첫 만남 - cin, cout

int main()
{
	using namespace std;

	int x = 1024;
	double pi = 3.141592;

 	cout << "I love this lecture!" << endl;
 	cout << "x is " << x << "\npi is " << pi <<endl;

 	cout << "abc" << "\t" << "def" << endl; // tab 주기

 	cout << "\a"; // 오디오 소리("띵") 출력

 	//printf("I love this lecture!\n");	

	return 0;
}