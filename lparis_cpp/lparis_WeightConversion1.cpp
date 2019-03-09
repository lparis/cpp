/*	LParis
    Name:       Weight Conversion Program
    Purpose:    Convert user's weight from pounds to kilograms.
    Input:      User's weight in pounds.
    Process:    Convert weight in pounds to kilograms. 
    Output:     Display the user's weight in kilograms.    
    Variables:  weight_lbs (double)
                weight_kgs (double)
                program_name (string)
                program_author (string) 
*/

# include <iostream>
using namespace std;

int main()
{
    double weight_lbs, weight_kgs;
    string program_name = "Weight Conversion Program";
    string program_author = "LParis";    

    // Program banner
    cout << "************************************" << endl;
    cout << program_name << endl;
    cout << "By " << program_author << endl;
    cout << "************************************" << endl;

    // Get the user's weight in pounds.
    cout << "What is your weight in pounds? ";
    cin >> weight_lbs;

    // Convert pounds to kilograms.
    weight_kgs = weight_lbs * 2.2;

    // Display the user's weight in kilograms.
    cout << "Your weight in kilograms: " << weight_kgs << endl;
    return 0;
}

