#include <iostream>

int increase_variable(int var);

int main()
{
    int contents = 0;
    
    for(int i = 0; i < 10; i++) // 행 표시
    {
        for(int j = 0; j < 10; j++) // 열 표시
        {
            if((i %2) == (j %2))    // i를 2로 나눈 나머지와 j를 2로 나눈 나머지가 같으면
                                    // i와 j 둘다 똑같이 짝수거나 홀수이면
            {
                std::cout << contents << contents << contents;  // i를 3번 출력
            }
            else
            {
                for(int k = 0; k < 3; k++)  // 다르면 *을 3번 출력
                    std::cout << "*";
            }
        }
        contents = increase_variable(contents); // 행이 바뀔 떄마다 숫자가 늘어남
        std::cout << std::endl; // 다음 행으로 넘어감
    }
    return 0;
}

int increase_variable(int var)  // void 함수() 는 return 값이 없음을 나타내므로
                                // int를 출력해야 하기 때문에 함수 값을 int로 변환
                                // int 함수(void) 는 매개 변수를 사용하지 않음을 의미
{
    return var+1;
}