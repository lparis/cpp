// g++ -std=c++11 -o finalq15 finalq15.cpp


# include <iostream>
# include <string>
using namespace std;

void foo(int[], int, int&);
void boo(int[], int[], int);

/*
The function void foo(int a[], int length, int& y) uses “int&y” and this means the value of “y” in the main method 
also updates when this foo called without return value “y”. In the main method, foo(dataArray, SIZE, x); so int&y is “x”.
After run the foo with “const int SIZE = 5”, “int dataArray[SIZE] = {1, 2, 6, 3, 10}” and “int x = 0”, 
the value “x = 10”. (Please trace the foo code by yourself). Thus, the output is “10”.
*/

int main()
{
    const int SIZE = 5;
    int dataArray[SIZE] = {1, 2, 6, 3, 10};
    int x = 0;
    int resultArray[SIZE]={};
    foo(dataArray, SIZE, x);
    cout << x << endl;
    boo(dataArray, resultArray, SIZE);

    return 0;
}

/*
Function foo() passes three parameters: dataArray, SIZE and x. SIZE is a “const int SIZE=5” and it is a “value parameter” 
and not “reference parameter”. So, the reference parameters in the statement are “x and dataArray” becuse arrays are always
passed by reference.
*/

void foo(int a[], int length, int& y)
{
  y = a[0];
  for (int i = 1; i < length; i++)
  {
    if (y < a[i])
      y = a[i];
  }
}

/*
Function boo() passes the parameters, dataArray, resultArray, and SIZE. Only the SIZE is the value parameters.
*/

void boo(int a[], int b[], int length)
{
  for (int i = 0; i < length; i++)
    b[i] = a[i] * a[i];
}


// 3. What is the output of the cout statement in the main program?






