/*
prg-11 Write a program to calculate the area of circle, rectangle and triangle
        using Function Overloading
        Rectangle: Area * breadth
        Triangle: ½ *Area* breadth
        Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;

class area
{
	int a,b,ar;
	float c;
	double d,e;
	public :
			  void calculate (int x, int y)
		  {
		  	a=x;
		  	b=y;
		  	cout<<"\n\n\t Enter value 1 :";
		  	cin>>a;
		  	cout<<"\n\n\t Enter value 2 :";
		  	cin>>b
		  	
		  	cout<<"\n\n\t Area of rectangle :"<<a*b;
		  	
		  }
		  
		  float calculate (int x, float y, int z)
		  {
		  	a=x;
		  	b=y;
		  	b=3.14;
		  	
		  
		cin>>b;
		
		cout<<"\n\n\t Area of rectangle :"<<a*b;
    	}
    	
    	 float calculate (int x, float y, int z)
	  {
		  	a=x;
		  	b=y;
		  	b=3.14;
		  	
		
		cout<<"\n\n\t Area of circle :"<<b*a*a;
    	}
    	
    	
    		double calculate (int x, float y, int z)
	  {
		  	a=x;
		  	b=y;
		  	c=v;
		  			
		cout<<"\n\n\t Area of triangle :"<<0.5+a*b;
    	}
    	
    	
    	
};

main()
{
	area v;
	v.calculate(12,12);
	v.calculate(12,1.2,11);
	v.calculate(12,11,3.4);

}
