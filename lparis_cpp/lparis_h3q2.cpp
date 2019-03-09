/*  LParis
    CSE 100: Principles of Programming with C++ (2019 Spring - A)
    Homework3CSE100_Part 2
    g++ -std=c++11 -o lparis_h3q2 lparis_h3q2.cpp
    ./lparis_h3q2
    Test string: LOSdosAmIg0s! 4569 )(_+=#45fnki

    Purpose: Calculates phone bill for regular and business customers.
    Inputs: Customer type, phone number, minutes used.
    Processing: Calculate total bill based on customer type rates + miniutes.
    Output: Customer phone bill. 
*/

#include <iostream>
using namespace std;

int main()
{
    const double    BIZ_BASE_RATE   = 99.99,    // Per month
                    BIZ_RATE_S1     = .45,      // 601 - 700 mins cost
                    BIZ_RATE_S2     = .99;      // 701+ mins cost
    const int       BIZ_MINS_FREE   = 600;      // Free mins
    
    const double    REG_BASE_RATE   = 29.99,    // Per month
                    REG_RATE_S1     = .55,      // 201 - 450 mins cost
                    REG_RATE_S2     = .88;      // 451+ mins cost
    const int       REG_MINS_FREE   = 200,      // Free mins
                    REG_MINS_S1     = 250;

    char            cust_type;
    string          cust_phone;
    int             phone_usage;
    double          stage1_costs = 0;
    double          stage2_costs = 0;
    double          total_cost = 0;
    int             stage1_mins = 0;
    int             stage2_mins = 0;
    int             mins;

    cout << "Enter Customer Type (R for Regular, B for Business): " << endl;
    cin >> cust_type;
    cout << "Enter Customer Phone Number: " << endl;
    cin >> cust_phone;
    cout << "Enter Phone Usage in Minutes: " << endl;
    cin >> phone_usage;

    if (cust_type == 'R' || cust_type == 'r')
    {
        if (phone_usage < REG_MINS_FREE)
        {
            total_cost = REG_BASE_RATE;
        }
        else if (phone_usage > REG_MINS_FREE)
        {
            if (mins < (REG_MINS_FREE + REG_MINS_S1))
            {
                stage1_mins = phone_usage - REG_MINS_FREE;
                stage1_costs = stage1_mins * REG_RATE_S1;
                stage2_costs = 0;
                total_cost = stage1_costs + stage2_costs + REG_BASE_RATE;
            }
            else
                stage2_mins = phone_usage - (REG_MINS_FREE + REG_MINS_S1);
                stage2_costs = stage2_mins * REG_RATE_S2;
                stage1_costs = stage1_mins
             
        }
        
    }
        stage1_mins = phone_usage
        stage1_costs = (phone_usage - REG_MINS_FREE) 
        total_cost = (phone_usage - REG_MINS_FREE) *  

    cout << "\t\t Power Bill for: " << cust_phone << endl;
    cout << "\t\t\t ============== " << endl;
    cout << "Total Minutes Used = " << phone_usage;
    cout << "I "

