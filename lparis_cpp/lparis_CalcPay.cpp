/*	LParis
    g++ -std=c++11 -o lparis_CalcPay lparis_CalPay.cpp
    Purpose:    Calculate and display user's gross pay.
    Input:      Two user inputs: Hours worked and hourly rate of pay.
    Process:    Compute the hours worked multiplied by the hourly pay rate. 
    Output:     Display the total gross pay.    
    Data types: Use double since the rate and/or pay may be fractional.
*/

# include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}

