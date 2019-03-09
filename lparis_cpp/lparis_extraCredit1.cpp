/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_extraCredit1.cpp
****************************************************************

g++ -std=c++11 -o lparis_extraCredit1 lparis_extraCredit1.cpp
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string coupon;

  cout << "Enter the coupon color for the haircut." << endl;
  cin >> coupon;

  if (coupon.compare("green") == 0)
  {
  	cout << "Discount is $3.50 from adult, $2.50 from kids." << endl;
  }

  else if (coupon.compare("blue") == 0)
  {
  	cout << "Discount is $2.59 from adult, $2.50 from kids." << endl;
  }

    else if (coupon.compare("green") != 0 && coupon.compare("blue") != 0)
  {
    cout << "No coupon, no discount." << endl;
  }

  else
  {
  	cout << "Goodbye." << endl;
  }
  return 0;
}