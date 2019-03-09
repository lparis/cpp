// /*
// **************************************************************** 
// LParis 
// CSE100 Session A
// lparis_lab16a.cpp
// ****************************************************************

// Purpose:    Compute the area and circumference of circle.
// Inputs:     Radius
// Processing: Calculate area and circumference.
// Outputs:    Circle area and circumference.
// Required:   Use functions.

// g++ -std=c++11 -o lparis_lab16a lparis_lab16a.cpp
// */

// // Standard includes
// #include <iostream>
// #include <iomanip>

// // Default namespace
// using namespace std;

// // Function prototypes declared before main()
// double getRadius();
// double findArea(double);
// double findCircumference(double);
// double square(double);

// // Global constant for Pi value
// double const PI = 3.14159; 

// // main function returns an integer and takes no values/input
// int main()
// {
//     double radius;              //the radius of the circle
//     double area;                //the area of the circle
//     double circumference;       //the circumference of the circle

//     //get the value of the radius from the user 
//     radius = getRadius();

//     if (radius <= 0)
//         cout << "The radius can not be zero or less. Try again." << endl;
//     else
//     {
//         cout << "The radius you entered is " << radius << endl; 
//         //calculate the area 
//         area = findArea(radius);
//         //calculate the circumference 
//         circumference = findCircumference(radius);
//         //output the results
//         cout << fixed << showpoint << setprecision(2);
//         cout << "Circle with radius of " << radius;
//         cout << " has an area of " << area; 
//         cout << " and a circumference of "<< circumference << endl;
//     }
//     return 0; 
// }

// // function to get the radius from the user
// double getRadius()
// {
//     double radius;

//     cout << "Enter the circle's radius: ";
//     cin  >> radius;

//     return radius;
// }

// // function to calculate the area
// double findArea(double radius)
// {
//     // double const PI = 3.14159;  // Pi constant
//     // double area;
//     //double radius;
//     cout << "Calculating the area..." << endl;
//     double area = PI * square(radius);

//     return area;
// }

// // function to calculate the circumference
// double findCircumference(double radius)
// {
//     // double const PI = 3.14159;  // Pi constant
//     // double circumference;
//     // double radius;
//     cout << "Calculating the circumference..." << endl;
//     double circumference = (PI * 2) * radius;
//     return circumference;
// }

// double square(double number)
// {
//     return number * number;
// }

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
