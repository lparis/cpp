/*  LParis
    CSE 100: Principles of Programming with C++ (2019 Spring - A)
    lab10.cpp
    g++ -std=c++11 -o lparis_lab10 lparis_lab10.cpp
    ./lparis_lab10
    Test string: LOSdosAmIg0s! 4569 )(_+=#45fnki

    Purpose: Counts the number and types of characters in a string, up to pound sign (#) sentinel.
    Inputs: String of alphanumeric characters, upper/lower case and numbers.
    Processing: Parse the string up to # sign; count character types.
    Output: Total number of chareacters, number of upper case, lower case, and digits. 
*/

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char    character;
    int     totalChars = 0,
            upperCase = 0,
            lowerCase = 0,
            digits = 0,
            others = 0;

    cout << "\nEnter a string of characters with pound sign (#) as the sentinel: ";
    cin.get(character);

    // string  string; 
    // getline(cin, string);
    // cout << "String length: " << string.length() << " characters" << endl;

    while (character != '#')
    {
        totalChars++;
        if (isupper(character))
        {
            upperCase++;
        }
        else if (islower(character))
        {
            lowerCase++;
        }
        else if (isdigit(character))
        {
            digits++;
        }
        else
        {
            others++;
        }
        
        cin.get(character);
    }

    cout << "Total characters input: " << totalChars << endl;
    cout << "Number of upper case: \t" << upperCase << endl;
    cout << "Number of lower case: \t" << lowerCase << endl;
    cout << "Nubmer of digits: \t" << digits << endl;
    cout << "Nubmer of others: \t" << others << endl;

	return 0;
}
