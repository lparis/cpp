/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab16b.cpp
****************************************************************

Purpose:    Calculate net paycheck.
Inputs:     payRate and hours (floats)
Processing: Multipy inputs to get gross pay; subtract 15% to get net pay
Outputs:    Net pay
Required:   Function parameter passing: Pass By value and pass by reference.

g++ -std=c++11 -o lparis_lab16b lparis_lab16b.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);

int main()
{
    float payRate;
    float grossPay;
    float netPay;
    int hours;
    cout << setprecision(2) << fixed;
    cout << "Welcome to the Pay Roll Program" << endl;
    
    //Call to Description function
    printDescription();

    cout << "Please input the pay per hour: ";
    cin >> payRate; 
    cout << "Please input the number of hours worked: "; 
    cin >> hours; 
    
    //Call to computePaycheck function
    float gross, net;
    computePaycheck(payRate, hours, gross, net);
    
    // Fill in the code to output grossPay and netPay
    cout << "Gross pay $" << gross << endl;
    cout << "Net pay $" << net << endl;
    
    return 0; 
}

// The function heading
void printDescription() 
{
    cout << "************************************************" << endl; 
    cout << "This program takes two numbers (payRate & hours)" << endl;
    cout << "and multiplies them to get gross pay " << endl;
    cout << "it then calculates net pay by subtracting 15%" << endl;
    cout << "************************************************" << endl; 
}

// *********************************************************************
// computePaycheck //
// task: This function takes rate and time and multiples them to
// get gross pay and then finds net pay by subtracting 15%.
// data in: pay rate and time in hours worked
// data out: the gross and net pay //
// ******************************************************************** 
void computePaycheck(float rate, int time, float& gross, float& net)
{
    // Fill in the code to find gross pay and net pay
    gross = rate * time;
    net = gross - (gross * .15);
}





