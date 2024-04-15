/*
prg-6. Write a C++ program to create a class called Person that has private
        member variables for name, age and country. Implement member
       functions to set and get the values of these variables....
*/

#include<iostream>
using namespace std;

	class person
   {
		private :
			string name;
			int age;
			string country;
		public :
			 int setdata();
			 int getdata();
		 
	};
	int person :: setdata()
	{
		cout<<"\n\n\t Enter your name :";
		cin>>name;
		cout<<"\n\n\t Enter your age :";
		cin>>age;
		cout<<"\n\n\t Enter your country :";
		cin>>country;
	}
	int person :: getdata()
	{
		cout<<"\n\n\t Name :"<<name;
		cout<<"\n\n\t Age :"<<age;
		cout<<"\n\n\t Country :"<<country;
	}
main()
	{
	person p;
	p.setdata();
	p.getdata();
	}
