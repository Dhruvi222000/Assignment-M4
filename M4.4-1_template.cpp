/*
prg-1 Write a program of to swap the two values using template
*/

#include <iostream>
template<typename T>
void swapValues(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 6.28;

    std::cout << "\n\n\t Before swapping:" << std::endl;
    std::cout << "\n\n\t int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "\n\n\t double1 = " << double1 << ", double2 = " << double2 << std::endl;

    swapValues(int1, int2);
    swapValues(double1, double2);

    std::cout << "\n\n\t After swapping:" << std::endl;
    std::cout << "\n\n\t int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "\n\n\t double1 = " << double1 << ", double2 = " << double2 << std::endl;

   
}
