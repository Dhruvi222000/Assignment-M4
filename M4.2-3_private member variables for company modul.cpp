/*
prg-3  write a c++ program to create a class called car that has private member variables for company modul and balance.
        include memberfunction to get and set these variables...
*/

#include<iostream>
using namespace std;

class car 
{
	private :
		string company,model;
		int year;
		
	public :
		  void getdata();
		  void putdata();
};

void car   ::  getdata()
{
	      cout<<"\n\n\t   Enter company name :";
	      cin>>company;
	      cout<<"\n\n\t   Enter model of car :";
	      cin>>model;
	      cout<<"\n\n\t   Enter year  :";
	      cin>>year;
}

void car   ::  putdata()
{
	      cout<<"\n\n\t   company    :"<<company;
	      cout<<"\n\n\t   model of car :"<<model;
	      cout<<"\n\n\t   year  :" <<year;
}

main()
{
	car cr;
	cr.getdata();
	cr.putdata();
}
