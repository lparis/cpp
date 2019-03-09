/*	LParis
    srand.cpp
    This program demonstrates radnom number generation in C++
*/

# include <iostream>
# include <cstdlib>     // For rand and srand
# include <ctime>       // For see number using time function
using namespace std;

int main()
{
    // Get the system time from UNIX time Jan 1, 1970
    unsigned seed = time(0); 

    // Seed the random number generator
    srand(seed);

    // Display three random numbers
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}

