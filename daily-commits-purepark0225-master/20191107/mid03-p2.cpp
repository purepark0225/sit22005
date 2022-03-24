#include <iostream>
#include <cmath>

int matrix0[] = {1};
int matrix1[] = {1, 2, 
                3, 4};
int matrix2[] = {1, 2, 3, 
                4, 5, 6, 
                7, 8, 9};
int matrix3[] = {1, 2, 3, 4, 
                5, 6, 7, 8, 
                9, 10, 11, 12,
                13, 14, 15, 16};

void print_matrix(int* matrix, int item_count)
{
    std::cout << "Matrix Address: " << matrix << std::endl;
    std::cout << "Size of Array: " << item_count << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    
    // ---- Problematic Region Begin ---- //
    int i = 0, j = 0;
    item_count << item_count/4
    int sqrt_sz = (int)sqrt(item_count);    // 제곱근을 구해줌 ex) sqrt(9) = 3
                                            // i 가 sqrt_sz의 곱이면
                                            // 다음 줄로 넘어가서 출력해야 함
                                            // 각 matrix 1, 2, 3, 4
                                            // 1 -> 4, 4 -> 16, 9 -> 36, 16 -> 64
    for(; i < item_count; i++)
    {
        for(int j; j*sizeof(int) > sqrt_sz; j++){
            if(matrix[i] < 10)  // 10보다 작으면 앞에 0 붙여서 출력
                std::cout << "0" << matrix[i] << " ";

            else        // 10보다 크면 그냥 출력
                std::cout << matrix[i] << " ";  // 한 줄 출력하는 거
            
            j++

            if(j >= sqrt_sz)    // 0 > 1 / 0 > 2 / 0 > 3 / 0 > 4
            {
                std::cout << std::endl; // 다음 줄로
                j = 0;
            }    
    }
}
        // 코드 두 줄을 지워서 에러가 나오는 거임
        // 코드 두 줄을 넣으면 동작함
    // ---- Problematic Region End ---- //
}

int main()
{
   
    std::cout << "-- Matrix 00 --" << std::endl;
    print_matrix(matrix0, sizeof(matrix0));
    std::cout << "-- Matrix 01 --" << std::endl;
    print_matrix(matrix1, sizeof(matrix1));
    std::cout << "-- Matrix 02 --" << std::endl;
    print_matrix(matrix2, sizeof(matrix2));
    std::cout << "-- Matrix 03 --" << std::endl;
    print_matrix(matrix3, sizeof(matrix3));
    
    return 0;
}