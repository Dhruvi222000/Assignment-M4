/*
prg-4 write a c++ programing to implement a class called cricle that has privte member variables for radius.
       include member fuction to calculate the circle's area and circumference....
*/

#include<iostream>
using namespace std;

 class circle
{
			private :
		int radius;
		int sum;
			public:
			int getdata();
			int putdata();
			
};
	int circle :: getdata()
	
		{
		float p=3.14;
		cout<<"\n\n\t Enter radius of circle :";
		cin>>radius;
		sum=radius;
		sum=p/radius*radius*radius;
		
		
		}
		int circle :: putdata()
		{
			cout<<"\n\n\t Area of circle :"<<sum;
			
		}
		main()
		{
			circle cls;
			cls.getdata();
			cls.putdata();
			
		}
		
