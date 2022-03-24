#include <iostream>
#include <sstream>

#define ARRAY_SIZE 100

int subTail_idx = 0;    // 임시 저장할 인덱스
int subTail[ARRAY_SIZE];    // 임시 저장할 array

int subSoFar_idx = 0;   // 합이 최대인 부분을 저장할 인덱스
int subSoFar[ARRAY_SIZE];   // 합시 최대인 부분을 저장할 array

int get_max(int num1, int num2) // 두 숫자를 비교해 최대값 구하기
{
    if(num1 <= num2)
        return num2;
    else
        return num1;
}

void reset(int* array, int* array_idx)  // array와 index 비우기
{
    for(int i = 0; i < ARRAY_SIZE; i++)
        array[i] = 0;
        
    *array_idx = 0;
}

void append(int* array, int value, int* array_idx)  // array 뒤에 값을 넣기
{
    array[(*array_idx)++] = value;
}

void assign(int* array1, int* array1_idx, int* array2, int* array2_idx) // array1의 값과 주소 array2와 똑같이 만들기
{
    for(int i = 0; i < *array2_idx; i++)
    {
        array1[i] = array2[i];
    }
    
    *array1_idx = *array2_idx;
}

void max_sub(int* arg, int size)
{
    int MaxTail = 0; 
    int MaxSoFar = 0;

    
    for(int i = 0; i < size; i++)   // 앞에서부터 차례대로 하나씩 더해보면서 합이 최대인 구간을 구해보기
    {
        MaxTail = MaxTail + arg[i]; // 합을 구할 구간에 하나씩 값을 더해봄
        if(MaxTail < 0)     // 구간의 합이 0보다 작으면
        {
            reset(subTail, &subTail_idx);   // 임시 저장한 array와 주소 초기화
        }
        else
        {
            append(subTail, arg[i], &subTail_idx);  // 0보다 크면 계속 임시 저장
        }

        if(MaxSoFar < MaxTail)  // 구간의 합이 0보다 크면 -> 현재 구한 구간의 합이 전에 구했던 구간의 합보다 크면
        {
            MaxSoFar = MaxTail; // maxSoFar에 구간의 합 저장
            assign(subSoFar, &subSoFar_idx, subTail, &subTail_idx); // 합이 최대인 구간을 임시 저장했던 array와 주소를 저장
        }
    }    
}

int main()
{
    int lst[] = {31, -41, 59, 26, -53, 58, 97, 12, -93, -23, 84};
    max_sub(lst, 10);
    
    std::stringstream sstream;
    
    int max_val = 0;
    sstream << "seq:{";
    for(int i = 0; i < (subSoFar_idx); i++)
    {
        max_val += subSoFar[i]; // 구간의 합
        sstream << subSoFar[i] << ", "; // 구간의 원소들을 표시
    }
        
    sstream << "}";
    
    std::cout << sstream.str() << ", " <<  max_val << std::endl;
    return 0;
}