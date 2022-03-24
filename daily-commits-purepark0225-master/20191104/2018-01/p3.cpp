#include <iostream>

int main()
{   
    int lines = 7;
    
    for(int i = 0;i < lines;i++)    // 숫자별 라인
    {
        for(int blank = 0;blank < lines - i;blank++)    // 숫자가 커질수록 빈칸이 작아져라
        {
            std::cout<< " ";
        }
        for(int k = 0;k <= 2*i;k++) // 숫자 * 2 + 1 만큼 출력
        {   
            if(k%2*i == i){         // 만약 k를 2로 나눈 나머지(0 or 1) * i = (0 or i) 가 i와 같다면 -> 번갈아가며 i와 *을 출력
                if(i == 0)          // i가 0이라면(첫 번째 줄)
                {
                    std::cout<< "*";
                }
                else{
                    std::cout<<i;
                }
            }
            else
            {
            std::cout<< "*";
            }
        }
        std::cout<<std::endl;
    }
}
