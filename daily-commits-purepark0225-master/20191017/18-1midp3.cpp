#include <iostream>

int main()
{   
    int lines = 7;
    
    for(int i = 0;i < lines;i++)
    {
        for(int blank = 0;blank < lines - i;blank++)	// 숫자가 커질수록 빈칸이 적어져라
        {
            std::cout<< " ";
        }
        for(int k = 0;k <= 2*i;k++)
        {   
            if(k%2*i == i){
                if(i == 0)
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