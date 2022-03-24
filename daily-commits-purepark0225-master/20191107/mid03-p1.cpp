#include <iostream>

#include "preprocess.h"

extern int size_x;
extern int dimension;

void swap_int(int * ptr1, int* ptr2);
void swap_array(int** ptr1, int** ptr2);

int main()
{
    int** numArray1;
    int** numArray2;
    
    init(&numArray1, &numArray2);
    
    std::cout << "Contents of Array1" << std::endl;
    print_array(numArray1); 

    std::cout << "Contents of Array2" << std::endl;
    print_array(numArray2);

    swap_array(numArray1, numArray2);
    std::cout << "Swap the Contents of the Array ... " << std::endl;

    std::cout << "Contents of Array1" << std::endl;
    print_array(numArray1); 

    std::cout << "Contents of Array2" << std::endl;
    print_array(numArray2);
}

void swap_int(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swap_array(int** arr1, int** arr2)
{
    for(int i = 0; i < dimension; i++)  // ptr[1][2] == ptr[1][2]
    {
        for(int j = 0; j < size_x; j++)
        {
            swap_int(arr1[i]+j, arr2[i]+j)  // &arr1[i][j]도 가능
        }
    }
}