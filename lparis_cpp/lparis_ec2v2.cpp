/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_ec2.cpp
g++ -std=c++11 -o lparis_ec2v2 lparis_ec2v2.cpp

Conversion Program for temperature, distance, volume, weight,
and data types.
****************************************************************
*/

#include <iostream>
#include <iomanip> 
using namespace std;
int choice;
const int   TEMP_CHOICE = 1,
            DISTANCE_CHOICE = 2,
            VOLUME_CHOICE = 3,
            WEIGHT_CHOICE = 4,
            DATA_CHOICE = 5,
            QUIT_CHOICE = 6;
char more;
void displayMenu(); 
void fahrenheitToCelsius();
void milesToKilometers(); 
void gallonsToLiters();
void poundsToKilograms();
void dataTypeToBytes();

int main()
{
    displayMenu();
    return 0; 
}

void displayMenu()
{
    do
    {
        cout << "\nConversion Program\n";
        cout << "========================\n";
        cout << "1. Fahrenheit to Celsius\n";
        cout << "2. Miles to Kilometers\n";
        cout << "3. Gallons to Liters\n";
        cout << "4. Pounds to Kilograms\n";
        cout << "5. Data Type to Bytes\n";        
        cout << "6. Quit the Program\n";
        cout << "Enter your choice (1-6): " << endl;
        cin >> choice;

        switch (choice)
        {
            case TEMP_CHOICE:
            {
                fahrenheitToCelsius();
                break;
            }            
            case DISTANCE_CHOICE: 
            {
                milesToKilometers();
                break;
            }
            case VOLUME_CHOICE: 
            {
                gallonsToLiters();
                break;
            }
            case WEIGHT_CHOICE: 
            {
                poundsToKilograms();
                break;
            }
            case DATA_CHOICE: 
            {
                dataTypeToBytes();
                break;
            }
            case QUIT_CHOICE: 
            {
                cout << "Exiting the program. Goodbye." << endl;
                break;
            }
            default:  cout << "\nThe valid choices are 1 through 6.\n"
                           << "Run the program again and select a valid option.\n" ;
        }

    } while (choice > 0 && choice < 6);
}

void fahrenheitToCelsius()
{
    double temp_fahrenheit, temp_celsius;
    cout << "What is the temperature in Fahrenheit? ";
    cin >> temp_fahrenheit;
    temp_celsius = (5.0/9) * (temp_fahrenheit - 32);
    cout << temp_fahrenheit << " degrees Fahrenheit is " << temp_celsius << " degrees Celsius." << endl;
}

void milesToKilometers()
{
    double miles, kilometers;
    cout << "What is the number of miles? ";
    cin >> miles;
    kilometers = miles * 1.60934;
    cout << miles << " miles is " << kilometers << " kilometers." << endl;
}

void gallonsToLiters()
{
    double gallons, liters;
    cout << "What is the number of gallons? ";
    cin >> gallons;
    liters = gallons * 3.78541;
    cout << gallons << " gallons is " << liters << " liters." << endl;
}

void poundsToKilograms()
{
    double weight_lbs, weight_kgs;
    cout << "What is the weight in pounds? ";
    cin >> weight_lbs;
    weight_kgs = weight_lbs * 2.2;
    cout << weight_lbs << " pounds is " << weight_kgs << " kilograms." << endl;
}

void dataTypeToBytes()
{
    short int short_integer;
    unsigned short int unsigned_short_integer;
    int integer;
    unsigned int unsigned_integer;
    long int long_integer;
    unsigned long int unsigned_long_integer;
    long long int long_long_integer;
    unsigned long long int unsigned_long_long_integer;
    float decimal;
    double decimal_double;
    long double decimal_long_double;
    bool boolean;
    char character = 'A';
    auto aString = "string";
    auto bString = "Suppose he should relent, and publish grace to all, on promise made of new subjections?";
    auto cString = "c";

    cout << fixed << showpoint << setprecision(2);
    cout << "Data Type \t\t\tSize\n";
    cout << "--------- \t\t\t-----\n";
    cout << "Boolean \t\t\t" << sizeof(boolean) << " byte\n";
    cout << "Character \t\t\t" << sizeof(character) << " byte\n";
    cout << "Short Integer \t\t\t" << sizeof(short_integer) << " bytes\n";
    cout << "Unsigned Short Integer\t\t" << sizeof(unsigned_short_integer) << " bytes\n";
    cout << "Integer \t\t\t" << sizeof(integer) << " bytes\n";
    cout << "Unsigned Integer \t\t" << sizeof(unsigned_integer) << " bytes\n";
    cout << "Float \t\t\t\t" << sizeof(decimal) << " bytes\n";
    cout << "Long Integer \t\t\t" << sizeof(long_integer) << " bytes\n";
    cout << "Unsigend Long Integer \t\t" << sizeof(unsigned_long_integer) << " bytes\n";
    cout << "Long Long Integer \t\t" << sizeof(long_long_integer) << " bytes\n";
    cout << "Unsigned Long Long Integer \t" << sizeof(unsigned_long_long_integer) << " bytes\n";
    cout << "Double \t\t\t\t" << sizeof(decimal_double) << " bytes\n";
    cout << "String Word \t\t\t" << sizeof(aString) << " bytes\n";
    cout << "String Sentence \t\t" << sizeof(bString) << " bytes\n";
    cout << "String Character \t\t" << sizeof(cString) << " bytes\n";
    cout << "Long Double \t\t\t" << sizeof(decimal_long_double) << " bytes\n";
}
