/*
prg-3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;

class person
{
	string name;
	int age;
	public:
		void print_info()
		{
			cout<<"\n\n\t Enter Student name :";
			cin>>name;
			cout<<"\n\n\t Enter Age of Student :";
			cin>>age;
		}
		void put_info()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Age :"<<age;
		}
	
	
};
class student
{
	float per;
	public:
		void print_per()
		{
			cout<<"\n\n\t Enter your Percentage :";
			cin>>per;
		}
		void put_per()
		{
			cout<<"\n\n\t Percentage :"<<per;
		}
	
};
class teacher : public person,public student
{
	double salary;
	public:
		void print_salary()
		{
			cout<<"\n\n\t Enter teacher's salary :";
			cin>>salary;
			
		}
		void put_salary()
		{
			cout<<"\n\n\t Teacher's Salary :"<<salary;
		}
};
main()
{
	teacher t;
	t.print_info();
	t.put_info();
	t.print_per();
	t.put_per();
	t.print_salary();
	t.put_salary();
}
