/*
**************************************************************** 
LParis 
****************************************************************
*/

# include <iostream>
using namespace std;

int main()
{
    // Create an object of BankAccount called myAccount
    // Use custom constructor to create account
    BankAccount myAccount(1000.50, 0.05, 1111, "John John"); 
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.addInterest();
    myAccount. displayAccountSummary();

    return 0;
}