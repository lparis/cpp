/*
**************************************************************** 
LParis 
Demonstrates the use of a while loop to print many messages 
declaring your passion for computer science 

g++ -std=c++11 -o lparis_WhileLoop lparis_WhileLoop.cpp
****************************************************************
*/

# include <iostream> 
using namespace std;

int main()
{
    int i, sum;

    i = 1;
    while (i < 10)
    {
        cout << i <<' ';
        i += 2;
    }
    cout << "\nAfter loop i = " << i << endl << endl;

    i = 5;
    while (i > 0)
    {
        cout << i-- << ' ';
    }
    cout << "\nAfter loop i = " << i << endl << endl;

    return 0;
}
