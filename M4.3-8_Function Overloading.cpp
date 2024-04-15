/*
prg-8.  Write a program to Mathematic operation like Addition, Subtraction,
        Multiplication, Division Of two number using different parameters and
        Function Overloading
*/

#include<iostream>
using namespace std;

class Mathematic
{
	int a,b;
	float c;
	double d,e;
	
	public:
		void cal(int x,int y)
		{
			a=x;
			b=y;
			cout<<"\n\n\t Addition ="<<a+b;
		}
		float cal(int x,int y,float z)
		{
			a=x;
			b=y;
			c=z;
			
			return a-b;
		}
		double cal(double x,double y,int v,int t)
		{
		d=x;
		e=y;
		return d*e;
		}
		int cal(int x,int y,float v,double t,int b)
		{
			a=x;
			b=y;
			return a/b;
		}
		
};
main()
{
	Mathematic m;
	m.cal(10,50);
	cout<<"\n\n\t Subtraction :"<<m.cal(5,12,6.6);
	cout<<"\n\n\t Multiplication :"<<m.cal(55,77,8,9);
	cout<<"\n\n\t Division :"<<m.cal(12,3,56.2,78,4);
	
}
