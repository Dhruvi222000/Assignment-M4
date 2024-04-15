/*
prg-2 Write a program of to sort the array using templates
*/

#include <iostream>
template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size)
 {
    for (int i = 0; i < size - 1; ++i)
 {
        for (int j = 0; j < size - i - 1; ++j)
 {
            if (arr[j] > arr[j + 1])
 {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
   void printArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
 {
        std::cout << arr[i] << " ";
   }
    std::cout << std::endl;
}

int main()
{
    int intArr[] = {5, 2, 9, 1, 3};
    double doubleArr[] = {3.5, 2.1, 9.8, 5.2, 1.7};
    char charArr[] = {'e', 'd', 'a', 'c', 'b'};
    
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    
    bubbleSort(intArr, intSize);
    bubbleSort(doubleArr, doubleSize);
    bubbleSort(charArr, charSize);
    
    std::cout << "\n\n\t   Sorted integer array: ";
    printArray(intArr, intSize);
    
    std::cout << "\n\n\t  Sorted double array: ";
    printArray(doubleArr, doubleSize);
    
    std::cout << "\n\n\t  Sorted char array: ";
    printArray(charArr, charSize);
    
}
