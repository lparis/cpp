/*
**************************************************************** 
LParis 
Bank account class
g++ -std=c++11 -o BankAccount BankAccount.cpp
****************************************************************
*/

# include <iostream>
# include <iomanip>     
using namespace std;

// Default constructor
BankAccount();
{
	balance = 0;
	accountNumber = 0;
	ownerName = " ";
	interestRate = 0;
}

// Custom constructor
BankAccount(double bal, double irate, int acct, string name);
{
	balance = bal;
	accountNumber = acct;
	ownerName = name;
	interestRate = irate;
}

// getBalance() function returns current balance
double getBalance()
{
	return balance;
}

// deposit() method deposis specified amount to the account
void deposit(double depositAmount)
{
	balance += depositAmount;
}

//  withdraw() method withdraws specified amount
bool withdraw(double withdrawalAmount)
{
	if (balance < withdrawalAmount)
		return false;
	else
	    {
		    balance -= withdrawalAmount;
		    // balance = balance - withdrawalAmount;
	        return true;
		}	
}

// addInterest() method changes the balance in the account to balance * (1 + interestRate)
void addInterest()
{
	interest = balance * interestRate;
	balance += interest;
}

// displayAccountSummary() method displays accountNumber, ownerName, balance, interestRate.
void displayAccountSummary()
{
	cout << "Account Number: " << accountNumber << endl;
	cout << "Owner's Name: " << ownerName << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Interest Rate: " << interestRate << "%" << endl;
}