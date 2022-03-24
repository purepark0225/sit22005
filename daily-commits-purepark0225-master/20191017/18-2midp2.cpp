#include <iostream>

int matrix0[5][5];
int matrix1[5][5];
int matrix2[5][5];
int matrix3[5][5];

void print_matrix(int* matrix)
{
    int i = 0, j = 0;
    for(; i < 25; i++, j==4? j=0: j++)
    {
        if(matrix[i] < 10) // 10이하이면 앞에 0을 붙이고 값을 넣음
            std::cout << "0" << matrix[i] << " ";
        else // 10이상이면 두글자니까 그냥 값만
            std::cout << matrix[i] << " ";
            
        if(j == 4) // 다음 줄로 넘어감
            std::cout << std::endl;
    }
}

int main()
{
    //////////////////////////////////////
    /// Problematic Region
    
    // Matrix Initialization
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matrix1[i][j] = i*5 + j;
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matrix2[i][j] = i*5 + j;
        }
    }
    //////////////////////////////////////
    
    std::cout << "-- Matrix 00 --" << std::endl;
    print_matrix((int*)matrix0);
    std::cout << "-- Matrix 01 --" << std::endl;
    print_matrix((int*)matrix1);
    std::cout << "-- Matrix 02 --" << std::endl;
    print_matrix((int*)matrix2);
    std::cout << "-- Matrix 03 --" << std::endl;
    print_matrix((int*)matrix3);
    
    return 0;
}
