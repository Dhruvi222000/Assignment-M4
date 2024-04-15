/*
prg-2  Write a C++ Program to find Area of Rectangle using inheritance..
*/

#include<iostream>
using namespace std;

class Rectangle
{
	int l;
	int w;
	int a;
	
	public:
		void putvalue()
		{
			cout<<"\n\n\t Enter value of length :";
			cin>>l;
			cout<<"\n\n\t Enter value of width :";
			cin>>w;
			cout<<"\n\n\t"<<l*w
			<<a;
		
		
		}
	
};
class area : public Rectangle
{
	public:
		void getvalue()
		{
	cout<<"\n\n\t Area of rectangle ";
	
		}
	
};
main()
{
	area r;

	r.putvalue();
	
	r.getvalue();
}
