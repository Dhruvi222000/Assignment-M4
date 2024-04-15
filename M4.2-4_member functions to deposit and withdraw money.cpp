/*
prg-4 Write a C++ program to implement a class called Bank Account that has
      private member variables for account number and balance. Include
      member functions to deposit and withdraw money from the account...
*/

#include <iostream>
class BankAccount
 {
      private:
       int accountNumber;
       double balance;

public:
    
        BankAccount(int accNumber, double initialBalance) 
	{
        accountNumber = accNumber;
        balance = initialBalance;
    }

    
    void deposit(double amount)
   {
        balance += amount;
        std::cout << "\n\n\t Deposited $" << amount << " into account number " << accountNumber << std::endl;
    }

    
    void withdraw(double amount)
	 {
        if (amount > balance)
	 {
            std::cout << "/n/n/t  Insufficient funds!" << std::endl;
     }
		else
     {
            balance -= amount;
            std::cout << "\n\n\t  Withdrawn $" << amount << " from account number " << accountNumber << std::endl;
    }
    }

    
        double getBalance()
   {
        return balance;
   }
};

int main()
{
    
    BankAccount myAccount(12345, 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    std::cout << "\n\n\t  Current balance: $" << myAccount.getBalance() << std::endl;

  
}
