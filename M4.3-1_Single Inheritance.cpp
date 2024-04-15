/*
prg 1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)

*/


#include<iostream>
using namespace std;

class cricketer
{
	int data;
	int average;
	
	public :
		void getcri()
		{
			cout<<"\n\n\t Input data :";
			cin>>data;
			cout<<"\n\n\t Average data :";
			cin>>average;
		}
		
		
};

class batsman :  public  cricketer 
{


    int total_match;
	int total_run;
	int average_run;
	string best_per;
	
public:
		void getbat_n()
		{
			
			cout<<"\n\n\t Enter total match played :";
			cin>>total_match;
			cout<<"\n\n\t Enter total run :";
			cin>>total_run;
			cout<<"\n\n\t Enter average run :";
			cin>>average_run;
			cout<<"\n\n\t Performance :";
			cin>>best_per;
			
		}
		void printbat_n()
		{
			cout<<"\n\n\t Total Match :"<<total_match;
			cout<<"\n\n\t Total run :"<<total_run;
			cout<<"\n\n\t Average run :"<<average_run;
			cout<<"\n\n\t Performance :"<<best_per;
		
		
        }
    
};
main()
{
	batsman b;
	b.getcri();
	b.getbat_n();
	b.printbat_n();
}


