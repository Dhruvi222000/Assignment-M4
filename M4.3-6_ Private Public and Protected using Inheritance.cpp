/*
prg-6 Write a C++ Program to show access to Private Public and Protected using Inheritance
*/

#include <iostream>
class Base 
{
  private:
      int privateVar;
 protected:
     int protectedVar;
 public:
     int publicVar;
    
    
    Base() : privateVar(1), protectedVar(2), publicVar(3) {}
};


class Derived : public Base
{
public:
    void accessBaseMembers()
   {
        
        std::cout << "\n\n\t  Protected member in Base class: " << protectedVar << std::endl;
        std::cout << "\n\n\t  Public member in Base class: " << publicVar << std::endl;
    }
};

int main()
{
    Derived derivedObj;
    derivedObj.accessBaseMembers();
    std::cout << "\n\n\t  Public member in Base class: " << derivedObj.publicVar << std::endl;

}
