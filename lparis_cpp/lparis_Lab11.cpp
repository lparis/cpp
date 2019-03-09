/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_Lab11.cpp

Purpose: Calculate savings acct balance at end of 3 months 
with deposits and interest accrued based on annual rate.
Inputs: Prompt user for:
Global inputs:
- starting balance
- annual interest rate
Per month inputs:
- amount deposited during each month (no negatives)
- total amount withdrawn during the month (no negs or > bal)
Processing: Calculate the interest for the month using formula
annual interest rate / 12 * avg of that month's starting and
ending balance. Add to balance.
Outputs:
- Starting balance at beginning of 3 month period
- Total deposits during the 3 months
- Total withdrawls duing the 3 months
- Total interest during the 3 months
- Final balance
****************************************************************
*/

# include <iostream>
# include <iomanip> 

using namespace std;

double  balance_start,
        balance_final,
        deposits_total,
        withdrawls_total,
        interest_total,
        interest_rate_annual,
        interest_rate_monthly,
        interest_paid_monthly,
        deposits_month,
        withdrawls_month;

int main()
{
    // Get starting balance
    cout << "Enter the beginning account balance: ";
    cin >> balance_start;
    cout << "You entered $" << fixed << setprecision(2) << balance_start << endl;
    // Get annual interest rate
    cout << "Enter the annual interest rate: ";
    cin >> interest_rate_annual;
    cout << "You entered " << interest_rate_annual << fixed << setprecision(2) << "%" << endl;
    // Loop for monthly deposits and withdrawls
    for (int j = 1; j < 4; j++)
    {
        cout << "Enter the amount deposited during month " << j << ": ";
        cin >> deposits_month;
        cout << "You entered $" << fixed << setprecision(2) << deposits_month << endl;
        deposits_total = deposits_total + deposits_month;

        cout << "Enter the amount withdrawn during month " << j << ": ";
        cin >> withdrawls_month;
        cout << "You entered $" << fixed << setprecision(2) << withdrawls_month << endl;
        withdrawls_total = withdrawls_total + withdrawls_month;

        // Compute monthly interest
        interest_rate_monthly = (interest_rate_annual / 100) / 12;
        interest_paid_monthly = interest_rate_monthly * (balance_start + deposits_month - withdrawls_month);
        interest_total = interest_total + interest_paid_monthly;
        balance_final = balance_start + deposits_total - withdrawls_total + interest_total;
    }

    cout << "***** BALANCES *****" << endl;
    cout << "Balance at the beginning of the three month period: \t$" << fixed << setprecision(2) << balance_start << endl;
    cout << "Total deposits made during the three month period: \t$" << fixed << setprecision(2) << deposits_total << endl;
    cout << "Total withdrawls during the three month period: \t$" << fixed << setprecision(2) << withdrawls_total << endl;
    cout << "Total interest received during the three month period: \t$" << fixed << setprecision(2) << interest_total << endl;
    cout << "Final balance in the account at the end of the period: \t$" << fixed << setprecision(2) << balance_final << endl;

    return 0;
}

