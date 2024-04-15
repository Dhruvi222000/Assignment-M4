/*
prg-6 Write a C++ program to implement a class called Employee that has
      private member variables for name, employee ID, and salary. Include
      member functions to calculate and set salary based on employee
     performance. Using of constructor
*/

#include<iostream>
using namespace std;
class employee
{
     	int id,salary;
	    string name;
	    
	public :
 	     employee();
 	
};

employee ::	employee()
 {
		int i;
		if(i<=20000)
		{
			cout<<"\n\n\t Average";
		}
		else if(i<=40000)
		 {
			cout<<"\n\n\t Good";
		}
		else if(i<=60000)
		{
			cout<<"\n\n\t Very good";
		}
		else
		{
			cout<<"\n\n\t Excellent";
		}
main()
	{
		employee e[5];
				for(int f=0;f<5;f++)
			{
				cout<<"\n\n\t Employee id :"<<e[f];
				cout<<"\n\n\t Employee name :"<<e[f];
			}	
				for(int f=0;f<5;f++)
			{
				cout<<"\n\n\t Id :";
				cout<<"\n\n\t Name :";
			}
	
	}
