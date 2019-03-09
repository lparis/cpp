/*
**************************************************************** 
LParis 
g++ -std=c++11 -o lparis_test2 lparis_test2.cpp

Conversion Program for temperature, distance, volume, weight,
and data types.
****************************************************************
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{

    // for (int i = 1; i <= 10; i++)
    //     cout << i << " " ;

    for (int number = 5; number <= 15; number +=3)
        cout << number << ", ";

    // string str;
    // int zeroCount = 0;
    // int countDigits = 0;
    // cout << "Enter a string." << endl;
    // getline(cin, str);

    // for (int i = 0; i <= str.length() - 1; i++)
    // {
    //     cout << str.length() << endl;
    //     if (str[i] == '0')
    //         zeroCount++;
    //     if (str[i] >= 48 && <= 57)
    //         countDigits++;
    // }

    return 0;
}


// int main()
// {
//     string str;
//     int zeroCount = 0;
//     cout << "Enter a string." << endl;
//     getline(cin, str);

//     while (str.length() - 1 != 0)
//     {
//         cout << str.length() << endl;
//         if (str.length() == '0')
//             zeroCount++;
//     }

//     return 0;
// }

