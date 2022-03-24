#include <iostream>
#include <cstring>
#include <stdlib.h>

int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter the expression. " << std::endl;
    std::cin.getline(buff, 1000);
    char* operand1 = strtok(buff, " \t\n");	// 공백, 탭, 엔터를 기준으로 문자열을 자름
    strtok(NULL, " \t\n");	// +를 따로 빼냄
    char* operand2 = strtok(NULL, " \t\n");	// 다음 숫자를 잘라서 포인터에 반환
    // strtok(대상문자열, 기준문자);
	// char *strtok(char *_String, char const *_Delimiter);
	// 자른 문자열을 반환, 더 이상 자를 문자열이 없으면 NULL을 반환 
	
    std::cout << atoi(operand1) + atoi(operand2) << std::endl;	// char *를 int로 변환해 출력

    return 0;
}