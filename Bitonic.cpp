#include <iostream>
#include <algorithm>

void bitonicSequence(int array[], int sizeofArray) {
    int mid = sizeofArray / 2;                   
    std::sort(array, array + mid);               
    std::sort(array + mid, array + sizeofArray, std::greater<int>());   
}


void printArray(int array[], int sizeofArray) { 
    for (int x = 0; x < sizeofArray; x++) {
        std::cout << array[x] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int array[12] = { 5, 2, 1, 8, 9, 7, 6, 8, 2, 3, 0, 4 };       
    std::cout << "Initial array: ";
    printArray(array, 12);          
    bitonicSequence(array, 12);           
    std::cout << "Bitonic Sorted array: ";       
    printArray(array, 12);
    return 0;
}
