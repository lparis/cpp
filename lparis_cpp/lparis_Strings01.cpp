/*  LParis
    String usage 
*/

# include <iostream>
# include <string>
using namespace std;

int main()
{
    string myString1, myString2;
    char myChar1, myChar2;

    cout << "Enter a string: ";
    cin >> myString1;
    cin.get(myChar1);
    cin >> myChar2;
    getline(cin,myString2);

    cout << "String 1: " << myString1 << endl;
    cout << "Char 1: " << myChar1 << endl;
    cout << "Char 2: " << myChar2 << endl;
    cout << "String 2: " << myString2 << endl;


    return 0;
}

