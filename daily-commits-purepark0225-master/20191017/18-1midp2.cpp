#include <iostream>

int numArray[3][3] = { 11, 22, 33, 44, 55, 66, 77, 88, 99};
int num[3] = {1, 2, 3};

void swap_int(int* const ptr1, int* const ptr2);


int main()
{
    std::cout<<"Array[1][2] is ";
    std::cout<<numArray[1][2]<<std::endl;

    std::cout << "Swap Array[0][0] and Array[2][0] " << std::endl;
    std::cout << "Before : Array[0][0] = " << *(*(numArray)) << ", Array[2][0] = " << **(numArray+2) << std::endl;
    swap_int(*numArray, *(numArray+2));
    std::cout << "After : Array[0][0] = " << *(*(numArray)) << ", Array[2][0] = " << **(numArray+2) <<std::endl;
    std::cout << "&numArray : " << &numArray << std::endl;
    std::cout << "numArray : " << numArray << std::endl; // numArray
    std::cout << "*(numArray+1) : " << *(numArray+1) << std::endl;
	std::cout << "*(*(numArray+1)) : " << *(*(numArray+1)) << std::endl;


	std::cout<<num<<std::endl;
	std::cout<<*num<<std::endl;

	// 1차원 배열은 *num, 2차원 배열은 **numArray를 통해 값을 꺼낼 수 있다.
	// 배열의 주소는 배열의 첫 번째 값의 주소와 같다
	// &numArray == numArray == *numArray(2차원배열이라서 *하나로는 값을 못꺼냄)
	// *(numArray+1) : 해당 열의 다음 행의 주소 ex)[2][0] *(numArray+2)
	// **(numArray+1) : 해당 열의 다음 행의 값 ex)[2][0] **(numArray+2)
	// *(numArray)+1 : 해당 행의 다음 열의 주소 ex)[0][2] *(numArray)+2
	// *(*(numArray)+1) : 해당 행의 다음 열의 값 ex)[0][2] *(*(numArray)+2))

    
}

void swap_int(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}