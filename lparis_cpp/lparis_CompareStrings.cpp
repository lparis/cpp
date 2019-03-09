// g++ -std=c++11 -o compareStrings compareStrings.cpp


# include <iostream>
# include <string>
using namespace std;

int main()
{
    string choice;
    const int SIZE = 50;
    char string1[SIZE];
    char string2[SIZE];

    // void compareStrings(char[], char[]);

    do
    {
      cout << "Do you want to compare strings? ";
      cin >> choice;

      cout << "Enter first string: ";
      cin >> string1;
 
      cout << "Enter second string: ";
      cin >> string2;

      // compareStrings(string1, string2);

      if(strcmp(string1, string2)==0)
      {
        cout << "The strings are the same: " << endl;
      }

      else
      {
        cout << "The strings are not same!" << endl;
      }

    }
    while (choice == "y");

    // bool compare = strcmp("a", "1");

    // cout << compare << endl;

    return 0;
}

// void compareStrings(char &string1, char &string2)
// {
//   // char string1[50];
//   // char string2[50];
//   // bool compareBool;

//   if(strcmp(string1, string2)==0)
//   {
//     cout << "The strings are the same: " << endl;
//   }

//   else
//   {
//     cout << "The strings are not same!" << endl;
//   }
// }








