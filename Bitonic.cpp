#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

void bitonicSequence(int array[], int sizeofArray) {
    int mid = sizeofArray / 2;                   
    std::sort(array, array + mid);               
    std::sort(array + mid, array + sizeofArray, std::greater<int>());   
}

int main()
{
    srand(time(NULL));
    int array[12] = { rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10, 
                     rand() % 10};      
   std::cout << "Initial array: ";
    for (int x : array) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    bitonicSequence(array, 12);           
    std::cout << "Bitonic Sorted array: ";       
    for (int x : array) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
