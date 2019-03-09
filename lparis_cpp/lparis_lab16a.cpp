/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab16a.cpp
****************************************************************

Purpose:    Compute the area and circumference of circle.
Inputs:     Radius
Processing: Calculate area and circumference.
Outputs:    Circle area and circumference.
Required:   Use functions.

g++ -std=c++11 -o lparis_lab16a lparis_lab16a.cpp
*/

// Standard includes
#include <iostream>
#include <iomanip>

// Default namespace
using namespace std;

// Function prototypes declared before main()
double getRadius();
double findArea(double);
double findCircumference(double);
double square(double);

// Global constant for Pi value
double const PI = 3.14159; 

// main function returns an integer and takes no values/input
int main()
{
    double radius;              //the radius of the circle
    double area;                //the area of the circle
    double circumference;       //the circumference of the circle

    //get the value of the radius from the user 
    radius = getRadius();

    if (radius <= 0)
        cout << "The radius can not be zero or less. Try again." << endl;
    else
    {
        cout << "The radius you entered is " << radius << endl; 
        //calculate the area 
        area = findArea(radius);
        //calculate the circumference 
        circumference = findCircumference(radius);
        //output the results
        cout << fixed << showpoint << setprecision(2);
        cout << "Circle with radius of " << radius;
        cout << " has an area of " << area; 
        cout << " and a circumference of "<< circumference << endl;
    }
    return 0; 
}

// function to get the radius from the user
double getRadius()
{
    double radius;

    cout << "Enter the circle's radius: ";
    cin  >> radius;

    return radius;
}

// function to calculate the area
double findArea(double radius)
{
    // double const PI = 3.14159;  // Pi constant
    // double area;
    //double radius;
    cout << "Calculating the area..." << endl;
    double area = PI * square(radius);

    return area;
}

// function to calculate the circumference
double findCircumference(double radius)
{
    // double const PI = 3.14159;  // Pi constant
    // double circumference;
    // double radius;
    cout << "Calculating the circumference..." << endl;
    double circumference = (PI * 2) * radius;
    return circumference;
}

double square(double number)
{
    return number * number;
}