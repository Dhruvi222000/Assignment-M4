/*
prg-7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance
*/


#include<iostream>
using namespace std;

class a
{
	public:
		a()
		{
			cout<<"\n\n\t Class a is called.";
		}
};
class b
{
	public:
		b()
		{
			cout<<"\n\n\t Class b is called.";
		}
};
class derived : public a,public b
{
	public:
		derived()
		{
			cout<<"\n\n\t Derived class is called.";
		}
};
main()
{
	derived d;
}
