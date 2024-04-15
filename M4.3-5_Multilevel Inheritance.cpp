/*
prg-5.   Assume that the test results of a batch of students are stored in three different
         classes. Class Students are storing the roll number. Class Test stores the
         marks obtained in two subjects and class result contains the total marks
         obtained in the test. The class result can inherit the details of the marks
         obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;
class student 
{
	int rollno;

	public:
		int print_info()
		{
			cout<<"\n\n\t Enter Student Roll Number : ";
			cin>>rollno;
		}
		int put_info()
		{
			cout<<"\n\n\t Roll number :"<<rollno;
		}
};
class test
{
	int m1,m2;
	public:
		int print_marks()
		{
			cout<<"\n\n\t Enter marks of first subject :";
			cin>>m1;
			cout<<"\n\n\t Enter marks of second subject :";
			cin>>m2;
		}
		int put_marks()
		{
			cout<<"\n\n\t First subject marks ="<<m1;
			cout<<"\n\n\t Second suject marks ="<<m2;
		}
};
class result : public student,public test
{
	int total;
	public:
	int put_total()
	{

		cout<<"\n\n\t Total marks =";
	}
};
main()
{
	result r;
	r.print_info();
	r.print_marks();
	r.put_info();
	r.put_marks();
	r.put_total();
	
}
