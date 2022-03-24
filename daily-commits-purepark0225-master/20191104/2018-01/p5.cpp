#include <iostream>
#include <cstring>
#include <stdlib.h>

void solution01(char* buff)
{
	char buff2[101];	// 100글자 + 마지막이라는 걸 뜻하는 \0까지 총 101개를 넣을 수 있음
	int idx = 0;		// 자리 수

	for(int i = 0; i < strlen(buff); i++)	// 입력받은 string buff의 길이만큼
	{										// 하나 하나 살펴보며 해당하는 문자가 아니면
		if(buff[i] != 'a')					// buff2와 buff의 인덱스를 일치시켜서 buff2에 저장
			if(buff[i] != 'A')
				if(buff[i] != 'e')
					if(buff[i] != 'E')
						if(buff[i] != 'i')
							if(buff[i] != 'I')
								if(buff[i] != 'o')
									if(buff[i] != 'O')
										if(buff[i] != 'u')
											if(buff[i] != 'U')
											{
												buff2[idx] = buff[i];
												idx += 1;
											}

	}
	buff2[idx] = '\0';	// 마지막이라는 것을 알려주는 문자
	std::cout << buff2 << std::endl;	// 해당하는 문자들을 제외한 string 출력
}

void solution02(char* buff)
{
	char buff2[101];
	int idx = 0;

	for(int i = 0; i < strlen(buff); i++)
	{
		switch(buff[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				break;
			default:
			buff2[idx] = buff[i];
			idx += 1;
		}
	}
	buff2[idx] = '\0';
	std::cout << buff2 << std::endl;
}


int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter a string " << std::endl;
    std::cout << ">>";
    std::cin >> buff;

    solution01(buff);
    solution02(buff);
    

    return 0;
}