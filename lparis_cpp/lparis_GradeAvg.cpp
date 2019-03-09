/*  LParis
*/

#include <iostream>
using namespace std;

// int main( )
// {

// 	float average; // variable that holds the grade average

// 	cout << "Input your average:" << endl;

// 	cin >> average;
	
// 	// Exercise 1: Modify so 60 is passing
// 	if (average >= 60)
// 	// if (average > 60)
// 	cout << "You Pass" << endl;

// 	// if (average < 60)
// 	// cout << "You Fail" << endl;
	
// 	// Exercise 2: If/Else
// 	else
// 		cout << "You Fail" << endl;

// 	return 0; 
// }

// Exercise 3
int main( )
{
	float average;

	cout << "Input your average: " << endl;

	cin >> average;

	if (average > 100)
		cout << "Invalid data" << endl;
	if (average >= 90 && average <= 100)
		cout << "A category (90 - 100)" << endl;
	if (average >= 80 && average <= 89)
		cout << "B category (80 - 89)" << endl;
	if (average >= 60 && average <= 79)
		cout << "You Pass" << endl;
	if (average <= 59)
		cout << "You Fail" << endl;

	return 0;
}