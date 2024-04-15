/*
prg-7 Write a C++ program to implement a class called Date that has private
       member variables for day, month, and year. Include member functions to
        set and get these variables, as well as to validate if the date is valid...
*/

#include <iostream> 
using namespace std;
class Date 
{ 
  private: 
    int day; 
    int month; 
    int year; 

  public:
    
    Date(int d, int m, int y): day(d), month(m), year(y) {}

    
    void setDate(int d, int m, int y) 
	{
      day = d; 
      month = m; 
      year = y; 
    }

    
    int getDay() const
   {
      return day; 
	  
   }

    
    int getMonth() const 
	{
      return month; 
    }

    
    int getYear() const
   {
      return year; 
   }

    
    bool isValidDate() const
  {
    
      if (month < 1 || month > 12)
        return false;

      
      if (day < 1 || day > 31)
        return false;

      
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

      if (month == 2)
   {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   {
          if (day > 29)
            return false;
   } 
	   else
	 {
          if (day > 28)
            return false;
     }
     }

      
      return true;
    }
};

int main()
 {
  
  Date date(0, 0, 0);

  
  int day, month, year; 
  std::cout << "\n\n\t  Input day: "; 
  std::cin >> day; 
  std::cout << "\n\n\t  Input month: "; 
  std::cin >> month; 
  std::cout << "\n\n\t  Input year: ";
  std::cin >> year; 

  date.setDate(day, month, year); 

  
  std::cout << "\n\n\t  Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl; 

    if (date.isValidDate())
    std::cout << "\n\n\t  The date is valid." << std::endl; 
  else
    std::cout << "\n\n\t  The date is invalid." << std::endl; 


}
