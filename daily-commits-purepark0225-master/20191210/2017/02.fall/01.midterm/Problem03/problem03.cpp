#include <iostream>

void increase_variable(int var);

int main()
{
    int contents = 0;
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if((i %2) == (j %2))
            {
                increase_variable(contents);
                std::cout << contents << contents << contents;
            }
            else
            {
                for(int k = 0; k < 3; k++)
                    std::cout << "*";
            }
        }
    }
    return 0;
}

void increase_variable(int var)
{
    var++;
}