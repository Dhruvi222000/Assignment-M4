/*
prg-4. Write a C++ Program display Student Mark sheet using Multiple inheritance...
*/

#include<iostream>
using namespace std;

class student
{
	string name;
	int rollno;
	public:
		void print_info()
		{
			cout<<"\n\n\t Enter student name :";
			cin>>name;
			cout<<"\n\n\t Enter Roll number :";
			cin>>rollno;
		}
		void put_info()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Roll number :"<<rollno;
		}
};
class techer
{
	int m,s,e,h;
	public:
		void print_marks()
		{
			cout<<"\n\n\t Enter marks of Mathematics :";
			cin>>m;
			cout<<"\n\n\t Enter marks of Science :";
			cin>>s;
			cout<<"\n\n\t Enter marks of English :";
			cin>>e;
			cout<<"\n\n\t Enter marks of Hindi :";
			cin>>h;
		}
		void put_marks()
		{
			cout<<"\n\n\t Mathematics ="<<m;
			cout<<"\n\n\t Science ="<<s;
			cout<<"\n\n\t English ="<<e;
			cout<<"\n\n\t Hindi ="<<h;
		}
};
class total : public techer,public techer 
{
	int total;
	public :
		void print_total()
		{
			
			cout<<"\n\n\t Total marks =";
			cin>>total;
		}
		void put_total()
		{
			cout<<"\n\n\t Total ="<<total;
		}
};
main()
{
	total t;
	t.print_info();
	t.print_marks();
	t.print_total();
	t.put_info();
	t.put_marks();
	t.put_total();
}
