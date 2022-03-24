#include <iostream>

int level = 0;

void contents(int* arg, int start, int size)
{
    int i;
    for(i = 0; i < size; i++)
        std::cout << arg[start+i] << " ";
    std::cout << std::endl;
}

void display(int* arg, int start, int size)
{
    int i = 0;
    if(level == 0){
        contents(arg, start, size);
    } else {
        for(i = 0; i < level; i++)
            std::cout << "\t";
            
        contents(arg, start, size);
    }
}

/////////////////////////////////////////////////////////////////
// Problematic Region
int* merge(int* arg, int lstart, int lsize, int rstart, int rsize)
{
    int* array = new int[lsize + rsize];
    int array_idx = 0, i = 0, j = 0;
    
    while(i < lsize && j < rsize){
        if(lsize < rsize)
        {
            array[array_idx++] = arg[lstart + i];
            i += 1;
        } else {
            array[array_idx++] = arg[rstart + j];
            j += 1;
        }
    }
    
    while(i < lsize){
        array[array_idx++] = arg[lstart + i];
        i += 1;
    }
    
    while(j < rsize){
        array[array_idx++] = arg[rstart + j];
        j += 1;
    }
    
    for(array_idx = 0; array_idx < lsize + rsize; array_idx++){
        arg[array_idx] = array[array_idx];
    }
    
    delete [] array;
    return arg;
}

int* mergesort(int* arg, int start, int size)
{
    int mid, *left, *right, *result;
 
    mid = size/2;

    level += 1;
    if(size < 2){
        display(arg, start, size);
        level -= 1;
        return arg;
    }
    
    display(arg, start, size);
    
    left = mergesort(arg, start, size);
    right = mergesort(arg, mid, size);
    // result = merge(arg, left[0], sizeof(left), right[0], sizeof(right));  // 여길 잘 모르겠다..
    
    display(arg, start, size);
    level -= 1;
    
    return result;
}
/////////////////////////////////////////////////////////////////

int main()
{
    level -= 1;
    int L[] = {23, 2, 8, 6, 17, 11, 20, 7, 12, 1, 15};
    mergesort(L, 0, 11);
    return 0;
}