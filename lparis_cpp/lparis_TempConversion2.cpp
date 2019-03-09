/*	LParis
    Name:       Temperature Conversion Program
    Purpose:    Convert Fahrenheit temperature to Celsius.
    Input:      Current temperature in Fahrenheit.
    Process:    Convert Fahrenheit to Celsius. 
    Output:     Display temperature in Celsius.    
    Variables:  temp_fahrenheit (double)
                temp_celsius (double)
                program_name (string)
                program_author (string) 
*/

# include <iostream>
using namespace std;

int main()
{
    double temp_fahrenheit, temp_celsius;
    string program_name = "Temperature Conversion Program";
    string program_author = "LParis";

    // Program banner
    cout << "************************************" << endl;
    cout << program_name << endl;
    cout << "By " << program_author << endl;
    cout << "************************************" << endl;

    // Get the current temperature in Fahrenheit.
    cout << "What is the current temperature in Fahrenheit? ";
    cin >> temp_fahrenheit;

    // Convert Fahrenheit to Celsius.
   temp_celsius = (5.0/9) * (temp_fahrenheit - 32);

    // Display the temperature in Celsius.
    cout << "The temperature in Celsius: " << temp_celsius << endl;
    return 0;
}

