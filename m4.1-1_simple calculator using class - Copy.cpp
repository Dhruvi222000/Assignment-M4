// program--1 Wap to create simple calculator using class....

#include<iostream>
using namespace std;
class calc
{
	int x,y;
	public :
		 void getin();
		 void arthematic();
};

 void calc ::getin()
 {
 	cout<<"\n\n\t Enter Number 1 :";
 	cin>>x;
 	cout<<"\n\n\t Enter Number 2:";
 	cin>>y;
 }
 
 void calc :: arthematic()
 {
 	cout<<"\n\n\t Addition :"<<x+y;
 	cout<<"\n\n\t sbtraction :"<<x-y;
 	cout<<"\n\n\t multiplion :"<<x*y;
 	cout<<"\n\n\t division:"<<x/y;
 }
 
 main()
 {
 	calc obj;
 	obj.getin();
 	obj.arthematic();
 }
