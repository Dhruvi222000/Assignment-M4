/*
prg-12.Write a program to swap the two numbers using friend function
without using third variable

*/
#include<iostream>
using namespace std;

class swapping
{
	int n1,n2;
	public :
		void getdata(int x,int y)
		{
			n1=x;
			n2=y;
		}
		friend void swapvalue(swapping D)
		{
			D.n1=D.n1+D.n2;
			D.n2=D.n1+D.n2;
			D.n1=D.n1-D.n2;
			
			cout<<"\n\n\t n1 ="<<D.n1;
			cout<<"\n\n\t n2 ="<<D.n2;
			
		}
};
main()
{
	swapping s;
	s.getdata(10,20);
	swapvalue(s);
}
