/*  LParis

    Name:       Speed of Sound
    Purpose:    Determine the speed of sound given the temperature.
    Input:      Temperature in Fahrenheit.
    Process:    Convert temp to Celsius; Calculate velocity of sound given the temp. 
    Output:     Display speed of sound given the converted temperature.   
    Variables:  Fc (int) // Fahrenheit temp
                Tc (double) // Celsius temp
                program_name (string)
                program_author (string)
*/

# include <iostream>
using namespace std;

int main()
{
    int Fc; // temp Fahrenheit 
    double Tc; // temp Celsius
    double Velocity = 331.3 + 0.61 * Tc; // Velocity formula
    string VELOCITY_FORMULA = "331.3 + 0.61 * temperature in Celsius";
    string program_name = "Speed of Sound";
    string program_author = "LParis";

    // Program banner
    cout << "************************************" << endl;
    cout << program_name << endl;
    cout << "By " << program_author << endl;
    cout << "************************************" << endl;

    cout << "Did you know the speed of sound is dependent on the air temperature?" << endl;
    cout << "Velocity of sound formula: " << VELOCITY_FORMULA << endl;

    // Get the baking pan dimensions.
    cout << "Enter the current temperature (in Fahrenheit): ";
    cin >> Fc;

    // Convert Fahrenheit to Celsius
    Tc = (Fc - 32) * 5/9;

    // Display the converted temperature in Celsius.
    cout << Fc << " degrees Fahrenheit is " << Tc << " degrees Celsius." << endl;

    // Compute the velocity of sound.
    Velocity = 331.3 + 0.61 * Tc;

    cout << "At " << Tc << " degrees Celsius the speed of sound is " << Velocity << " meters per second." << endl;
    return 0;
}

