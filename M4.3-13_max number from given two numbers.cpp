/*
prg-13.Write a program to find the max number from given two numbers
        using friend function
*/

#include<iostream>
using namespace std;

class max_n
{
	int a,b;
	
	friend void findmax(max_n x)
	{
		if(x.a>x.b)
		cout<<"\n\n\t"<<x.a<<" is maximum....";
		else
		cout<<"\n\n\t"<<x.b<<" is maximum....";
	}
	public:
		void getdata(int s,int t)
		{
			a=s;
			b=t;
		}
};
main()
{
	int g,h;
	cout<<"\n\n\t Input number 1 :";
	cin>>g;
	cout<<"\n\n\t Input number 2 :";
	cin>>h;
	max_n o;
	o.getdata(g,h);
	findmax(o);
}
