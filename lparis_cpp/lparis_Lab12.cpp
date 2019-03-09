/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_Lab12.cpp

Answer 1: 10, 80, 68 
Asnwer 2: Flagstaff -- the program iterates through the array and compares the size/length of each string
against a control string set by x = 0. If length[i] is longer than length[x], change the value of x to i.

Run 1: Is Tempe (5) > Tempe (5)? No
Run 2: Is New York (8) > Tempe (5)? Yes, so now x = 1
Run 3: Is Atlanta (7) > New York (8)? No
Run 4: Is Flagstaff (9) > New York (8)? Yes, so now x = 3
Run 5: Is Chicago (7) > Chicago (7)? No, so x = 3 Flagstaff is the answer

Lab program:
Purpose: Program keeps daily sales of 10 stores in an array and determine
a) Highest sale and store number
b) Lowest sale and store number
c) Average sale for all stores
****************************************************************
*/

// // #1
// # include <iostream>
// # include <iomanip> 

// using namespace std;

// double  store_sales[10];

// int main()
// {
//     int a[5] = { 10, 11, 67, 80, 68 }; 

//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] % 2 == 0)
//         cout << a[i]<<" "<<endl;
//     }

//     return 0;
// }

// // #2
// # include <iostream>
// # include <iomanip> 

// using namespace std;

// int main()
// {
//     string city[5] = { "Tempe", "New York", "Atlanta", "Flagstaff", "Chicago" }; 
//     int x = 0;

//     for (int i = 0; i < 5; i++)
//     {
//             // cout << city[x] << " ";            
//             cout << city[i] << city[i].length() << endl;

//         if (city[i].length() > city[x].length())
//         {
//             x = i;
//         }
//     }

//     // cout << city[x] << endl;
//     return 0;
// }


// Lab
# include <iostream>
# include <iomanip> 

using namespace std;

int main()
{
    const int STORES = 10;
    double sales[STORES];
    double sum = 0;
    double average = 0;

    for (int i = 0; i < STORES; i++)
    {
        cout << "Enter sales for store " << i << ": " << endl;
        cin >> sales[i];
    }

    for (int i = 0; i < STORES; i++)
    {
        sum = sum + sales[i];
    }
    average = sum / STORES;
    cout << "Average sale: " << average << endl;

    int x = 0;
    for (int i = 0; i < STORES; i++)
    {
        if (sales[i] > sales[x])
        {
            x = i;
        }
    }
    cout << "Highest sale is " << sales[x] << " from store " << x << endl;

    int y = 0;
    for (int i = 0; i < STORES; i++)
    {
        if (sales[i] < sales[y])
        {
            y = i;
        }
    }
    cout << "Lowest sale is " << sales[y] << " from store " << y << endl;

    return 0;
}

