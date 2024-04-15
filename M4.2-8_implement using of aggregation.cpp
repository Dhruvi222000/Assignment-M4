/*
PRG-8 Write a C++ program to implement a class called Student that has private
      member variables for name, class, roll number, and marks. Include
      member functions to calculate the grade based on the marks and display
      the student's information. Accept address from each student implement
      using of aggregation....
*/

#include<iostream>
using namespace std;

class student
{
	string name;
	int clas;
	int rollno;
	int marks;
	
	public:
		void getmarks();
		void putmarks();
		
};
void student :: getmarks()
{
	cout<<"\n\n\t Enter student name :";
	cin>>name;
	cout<<"\n\n\t Enter student class :";
	cin>>clas;
	cout<<"\n\n\t Enter student roll nnumber :";
	cin>>rollno;
	cout<<"\n\n\t Enter student marks :";
	cin>>marks;
	
	if(marks>=95)
	{
		cout<<"\n\n\t Grade : A+";
	}
	else if(marks>=85)
	{
		cout<<"\n\n\t Grade : A";
	}
	else if(marks>=75)
	{
		cout<<"\n\n\t Grade : B";
	}
	else if(marks>=60)
	{
		cout<<"\n\n\t Grade : C";
	}
	else if(marks>=40)
	{
		cout<<"\n\n\t Grade : D";
	}
	else
	{
		cout<<"\n\n\t Fail....";
	}
	
}
void student :: putmarks()
{
	cout<<"\n\n\t Name :"<<name;
	cout<<"\n\n\t Class :"<<clas;
	cout<<"\n\n\t Roll number :"<<rollno;
	cout<<"\n\n\t Marks :"<<marks;
	
}
main()
{
	student s;
	s.getmarks();
	s.putmarks();
}
