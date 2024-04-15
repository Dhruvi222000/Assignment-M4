/*
prg-10 Write a program to concatenate the two strings using Operator Overloading...
*/
#include<iostream>
using namespace std;

class cla

{
	string xuv,yow,zoo;
	public:
		void line(string aaa,string bbb)
		{
			xuv=aaa;
			yow=bbb;
	
		}
		void line(string aaa,string bbb,string ccc)
		{
			xuv=aaa;
			yow=bbb;
			zoo=ccc;
		
		}
};
main()
{
	cla c;
	cout<<"\n\n\t String 1 :"<<c.line<<(My Name Is Dhruvi,I Am From Ahmedabad);
	cout<<"\n\n\t String 2 :"<<c.line<<(My Name Is Dhruvi,I Am From Ahmedabad,I like to study);
	
}
