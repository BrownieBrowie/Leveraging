#include <iostream>
#include <algorithm>

void bitonicSequence(int arr[], int size) {
    int mid = size / 2;                   
    std::sort(arr, arr + mid);               
    std::sort(arr + mid, arr + size, std::greater<int>());   
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