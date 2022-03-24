// 따배씨 6.6 C언어 스타일의 배열 문자열

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!"
	char dest[50];
	strcpy(dest, 50, source); // 복사할 곳, 최대 복사할 사이즈, 원본

	// cout << source << endl;
	// cout << dest << endl;

	//strcat() : 한 문자열 뒤에 어떤 문자열을 붙여주기
	//strcmp() : 두 문자열이 동일한 지 비교

	// strcat(dest, source);

	// 	cout << source << endl;
	//  	cout << dest << endl;

	cout << strcmp(source, dest) << endl; 		// 같으면 0, 다르면 -1 출력

	if (strcmp(source, dest) == 0)
	{
		
	}

	return 0;
}