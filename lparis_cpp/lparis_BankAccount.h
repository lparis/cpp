/*
**************************************************************** 
LParis 
Bank account class definition.
g++ -std=c++11 -o lparis_BankAccount lparis_BankAccount.h
****************************************************************
*/

# ifndef ACCOUNT_H
# define ACCOUNT_H

// BankAccount class definition
class BankAccount
{
	private:
		double balance;			// Account balance
		double interestRate;	// Interest rate for the period
		int accountNumber;		// Account number
		string ownerName;		// Account owner
	public: 
		BankAccount();								// Default constructor sets the initial balance to 0, accountNumber to 0, ownerName to an empty string, interestRate to 0
		BankAccount(double, double, int, string); 	// Other constructor that takes initial balance, accountNumber, and the ownerName at the time of object creation
		double getBalance();						// Function that returns the curretn balance
		void deposit(double);						// Method that takes in a deposit of a specified amount and adds to the balance
		void withdraw(double);						// Method that withdraws specified amount and subtracts from balance
		void addInterest();							// Method that adds interest to balance using balance*(1+interestRate)
		displayAccountSummary();					// Method that displays accountNumber, ownerName, balance, interestRate.
};

# endif