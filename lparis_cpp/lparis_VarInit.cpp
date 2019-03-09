/*  LParis
*/

#include <iostream>
using namespace std;

int main( )
{

	// num1 is not initialized, num2 is initialized to 5
	// int num1, num2 = 5;

	// Exercise 2: num2 is not initialized
	int num1, num2;

	cout << "Please enter an integer" << endl; 
	cin >> num1;
	
	// Exercise 2: Prompt for num2	
	cout << "Please enter another integer" << endl; 
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	// Exercise 3: Print new statement
	if (num1 == num2)
	cout << "The values are the same" << endl;
	// Exercise 1: (num1 = num2) is wrong; needs to be (num1 == num2)
	if (num1 == num2)
	cout << "Hey, that’s a coincidence!" << endl;

	if (num1 != num2)
	cout << "The values are not the same" << endl;

	return 0; 
}