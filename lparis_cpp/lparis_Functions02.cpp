/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_Homework5.cpp
g++ -std=c++11 -o lparis_Homework5 lparis_Homework5.cpp
****************************************************************
*/

#include <iostream>
using namespace std;

// Pass by value function
void swapValue(int, int);
// Pass by reference function
void swapReference(int &, int &);

int main ()
{
    int i = 10, n = 20;
    swapValue(i, n);
    cout << "swapValue:\ti = " << i << "\t" << "n = " << n <<endl; //---1

    i = 10, n = 20;
    
    swapReference(i, n);
    
    cout << "swapRef:\ti = " << i << "\t" << "n = " << n << endl; //---2
    
    return 0; 
}

// function swapValue takes 2 ints as arg, doesn't return value
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = a; 
}

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
