/*
**************************************************************** 
LParis 

Beverage Menu
****************************************************************
*/


// # include <iostream>
// //# include <iomamnip>     
// using namespace std;

// int main()
// {
//     int coffee = 0, tea = 0, coke = 0, oj = 0;
//     int person_counter = 1;
//     int choice;

//     cout << "** Menu: 1. Coffee | 2. Tea | 3. Coke | 4. Orange Juice **" << endl;

//     do 
//     {
//         cout << "Please input the favorite beverage of person #" << person_counter << "." << endl;
//         cout << "Choose 1, 2, 3, or 4 from the menu, or enter -1 to exit the program." << endl;
//         cin >> choice;

//         if (choice == 1)
//         {
//             coffee++;
//             person_counter++;
//         }        
        
//         else if (choice == 2)
//         {
//             tea++;
//             person_counter++;
//         }

//         else if (choice == 3)
//         {
//             coke++;
//             person_counter++;
//         }

//         else if (choice == 4)
//         {
//             oj++;
//             person_counter++;
//         }

//         else if (choice == -1)
//             cout << "\n";

//         else
//             cout << "Invalid selection. Try again." << endl;

//     } 
//     while (choice != -1);

//     cout << "** Results **" << endl;
//     cout << "1. Coffee: " << coffee << " orders" << endl;
//     cout << "2. Tea: " << tea << " orders" << endl;
//     cout << "3. Coke: " << coke << " orders" << endl;
//     cout << "4. Orange Juice: " << oj << " orders" << endl;

//     return 0;
// }


// Part 2a: City Population

# include <iostream>
# include <iomanip>     
using namespace std;

int main()
{
    int cities = 4;
    int city_pop;
    int city_pop_star;

    cout << "Enter the number of cities: " << cities << endl;

    for (int j = 1; j <= 4; j++)
    {
        cout << "Enter the population of city " << j << ": ";
        cin >> city_pop;

        if (city_pop < 0)
        {
            cout << "Population can’t be negative. Please re-enter." << endl;
            break;
        }
        else
            city_pop_star = city_pop / 1000;

        for (int i = 0; i < city_pop_star; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


// // Part 2b: City Population Array
// // WIP

// # include <iostream>
// # include <iomanip>     
// using namespace std;

// int main()
// {
//     int cities = [];
//     int city_pop = [];
//     int city_pop_star;

//     cout << "Enter the number of cities: " << cities << endl;
//     cin >> cities;

//     for (int j = 1; j <= 4; j++)
//     {
//         cout << "Enter the population of city " << j << ": ";
//         cin >> city_pop;

//         if (city_pop < 0)
//         {
//             cout << "Population can’t be negative. Please re-enter." << endl;
//             break;
//         }
//         else
//             city_pop_star = city_pop / 1000;

//         for (int i = 0; i < city_pop_star; ++i)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

