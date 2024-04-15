/*
prg-5 Write a C++ program to create a class called Rectangle that has private
       member variables for length and width. Implement member functions to
       calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;

class rectangle
{
	private :
		int l,w;
	public:
		int getdata();
		int putdata();
		
		
};

int rectangle :: getdata()
{
	cout<<"\n\n\t Enter Lenght of rectangle :";
	cin>>l;
	cout<<"\n\n\t Enter width of rectangle :";
	cin>>w;
 } 
 int rectangle :: putdata()
 {
 	int sum;
 	sum=l*w;
 	cout<<"\n\n\t Area of reactangle : "<<sum;
 	int p,t;
 	p=l+w;
 	t=p*2;
 	
 	cout<<"\n\n\t Perimeter of reactangle :"<<t;
 }
main()
{
	rectangle rlc;
	rlc.getdata();
	rlc.putdata();
}
