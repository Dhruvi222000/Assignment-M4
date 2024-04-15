/*
prg -5  Write a C++ program to create a class called Triangle that has private
       member variables for the lengths of its three sides. Implement member
       functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;

class triangle 
{
	private :
		
		int s1,s2,s3,iso,equ,i;
		
	public :
		int getdata();
		int putdata();
};
int triangle :: getdata()
{
	cout<<"\n\n\t Enter 1 side of triangle :";
	cin>>s1;
	cout<<"\n\n\t Enter 2 side of triangle :";
	cin>>s2;
	cout<<"\n\n\t Enter 3 side of triangle :";
	cin>>s3;
	
	if(s1==s2==s3)
	{
	
		cout<<"\n\n\t Triangle is equilateral";
	}
	else 
	{
		
		cout<<"\n\n\t Triangle is isosceles";
	}
	
	
}
int triangle :: putdata()
{
	
}
main()
{
	triangle t;
	t.getdata();
	t.putdata();
}
