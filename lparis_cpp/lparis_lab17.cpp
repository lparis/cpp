/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab17.cpp
****************************************************************

Purpose:    Bank account class.
g++ -std=c++11 -o lparis_lab13 lparis_lab13.cpp
*/

# include <iostream>
using namespace std;

// BankAccount class declaration
class BankAccount
{
	private:
		double balance;			// Account balance
		double interestRate;	// Interest rate for the period
		double interest;
		int accountNumber;		// Account number
		string ownerName;		// Account owner
	public: 
		// BankAccount();

		BankAccount(double, double, int, string);
		// {
		// 	balance = bal;
		// 	interestRate = iRate;
		// 	interestRate = 0;
		// 	transactions = 0;
		// }

		void addInterest()
		{
			interest = balance * interestRate;
			balance += interest;
		}
		void deposit(double depositAmount)
		{
			balance += depositAmount;
			// transactions++;
		}
		bool withdraw(double withdrawalAmount)
		{
			if (balance < withdrawalAmount)
				return false;
			else
			{
				balance -= withdrawalAmount;
				// transactions++;
				return true;
			}
			double withdraw;
			balance = balance - withdrawalAmount;
		}
		double getBalance() const
		{
			return balance;
		}
		void displayAccountSummary();
};

int main()
{
    // Create an object of BankAccount called myAccount
    BankAccount myAccount(1000.50, 0.05, 1111, "John John"); 
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.addInterest();
    myAccount. displayAccountSummary();

    return 0;
}