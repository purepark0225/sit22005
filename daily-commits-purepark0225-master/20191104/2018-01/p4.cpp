#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <string>


  // 10부터 target_num까지 자리수의 합이 7인 홀수들의 개수를 구하는 함수
int main(int argc, char** argv)
{
        int target_num;
        std::cin >> target_num;
        int count = 0;
        
        for(int i = 10; i <= target_num; i++)       // 입력값만큼 반복 시행
        {
            int sum = 0;	// 자리수의 합 초기화
            std::string buf = std::to_string(i);    // char array로 변경
            
            for (int j = 0; j < buf.size();j++)     // char 하나하나 자리수 체크
            {
                if(i%2 != 0) 
                sum += buf[j] - '0';   // odd 이면 sum(자리수의 합) 증가
            }
            
            if(sum==7) {
            	count++;
            	std::cout << i << std::endl;	// 해당하는 숫자들 출력
            }
        }
        std::cout << count << std::endl;
    
    return 0;
}