/*
**************************************************************** 
LParis 
g++ -std=c++11 -o lparis_test lparis_test.cpp

Conversion Program for temperature, distance, volume, weight,
and data types.
****************************************************************
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    // int num = 100;
    // while (num <= 148)
    //     num = num + 5;
    // cout << num << " " << endl;

    // int sum = 0, num = 0;
    // cin >> num;
    // while (num != -1)
    // {
    //     cin >> num;
    //     sum = sum + num;
    // }
    // cout << sum;

    // int x = 4;
    // if (x > 5)
    //     y = 1;
    // else if (x < 5)
    // {
    //     if (x < 3)
    //         y = 2;
    //     else
    //         y = 3;
    // }
    // else
    //     y = 4;

    // int y = 22;

    // while ((y  % 3) != 0)
    // {
    //     cout << y << " ";
    //     y = y - 2;
    // }

    // int sum = 0;
    // int num;
    // int j;

    // for (j = 1; j <= 4; j++)
    // {
    //     cin >> num;
    //     if (num < 0)
    //         continue;

    //     sum = sum + num;
    // }

    // cout << sum << endl;

    string str;
    int zeroCount = 0;
    getline(cin,str);
            
    for(int i = 0 ; i <= str.length() – 1 ; i++){
      if(str[i]== ‘0’)
        zeroCount++;
    }
    return 0;
}

