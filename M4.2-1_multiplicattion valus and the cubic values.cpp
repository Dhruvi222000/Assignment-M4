/*
prg-1 Writw  a program to find the multiplicattion valus and the cubic values using inline fuction...
*/

#include<iostream>
using namespace std;

class number
{
	int a;
	
	     public : 
	     number()
	     {
	     	cout<<"\n\n\t Enter a number :";
	     	cin>>a;
	     	
		 }
		 
		 inline void multi()
		 {
		 	cout<<"\n\n\t Multiplited value :"<<a*a;
		 }
		 
		 inline void cubic()
		 {
		 	cout<<"\n\n\t cublic value :"<<a*a*a;
		 }
};

main()
{
	number n;
	n.multi();
	n.cubic();
}
