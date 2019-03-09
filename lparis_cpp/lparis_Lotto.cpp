/*	LParis
    This program demonstrates radnom number generation in C++
    g++ -std=c++11 -o lotto lotto.cpp
    http://www.cplusplus.com/articles/EywTURfi/    
*/

# include <iostream>
# include <cstdlib>     // For rand and srand
# include <ctime>       // For see number using time function

using namespace std;

const int SIZE = 5;
int user[SIZE], lottery[SIZE];
int match = 0;
string win = "\nWinner!";
string lose = "\nLoser";

int main()
{
    cout << "Enter 5 numbers: ";
    // Read from keyboard user numbers
    for (int i = 0; i < SIZE; i++)
    {
        cin >> user[i];
    }

    // Generate lottery array
    cout << "Lottery nubmers: ";
    // unsigned seed = time(0);
    // srand(seed);
    for (int j = 0; j < SIZE; j++)
    {
        lottery[j] = rand() % 9 + 1;
        cout << lottery[j] << " ";        
    }

    // Get matches
    for (int i = 0; i < SIZE; i++)
    {
        if (user[i] == lottery[i])
            match++;
    }

    if (match == 5)
        cout << "\nCongratuations, " << match << " matches. Winner!" << endl;
    else
        cout << "\nSorry, " << match << " matches. Loser!" << endl;

    return 0;
}

