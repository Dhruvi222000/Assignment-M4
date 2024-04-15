/*
prg-2 Write a program of addition, subtrsction, division, multiplication using constructor.....
*/

#include<iostream>
using namespace std;

class num
{
	int a,b;
	 public :
	 	void getdata();
	 	
	 	num()
	 	{
	 		a=15;
	 		b=5;
		 }
 };
 
      void num :: getdata()
      {
      	cout<<"\n\n\t Addition :"<<a+b;
      	cout<<"\n\n\t subtrsction :"<<a-b;
      	cout<<"\n\n\t division :"<<a/b;
      	cout<<"\n\n\t multiplication :"<<a*b;
	  }
	  
main()
{
	num n;
	n.getdata();
}
	  
