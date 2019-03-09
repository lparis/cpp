// petTag.cpp
// This program determines the fee for a cat or dog pet tag.
// It uses nested if/else statements.

/*  Lorenzo Paris
*/

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// { 
// 	string pet; 
// 	char spayed;
	
// 	// "cat" or "dog" // 'y' or 'n'
// 	// Get pet type and spaying information
// 	cout << "Enter the pet type (cat or dog): ";
// 	cin >> pet;
// 	cout << "Has the pet been spayed or neutered (y/n)? "; 
// 	cin >> spayed;

// 	// Determine the pet tag fee
// 	if (pet == "cat")
// 		{
// 			// Step 3: Add logical OR for case sensitive
// 			if (spayed == 'y' || spayed == 'Y')
// 				cout << "Fee is $4.00 \n"; 
// 			else
// 				cout << "Fee is $8.00 \n"; 
// 		}
// 	else if (pet == "dog") 
// 		{ 
// 			// Step 3: Add logical OR for case sensitive
// 			if (spayed == 'y' || spayed == 'Y')
// 				cout << "Fee is $6.00 \n"; 
// 			else
// 				cout << "Fee is $12.00 \n";
// 	}
// 		else
// 			cout << "Only cats and dogs need pet tags. \n";
	
// 	return 0;
// }

// Step 3: Rewrite program so it ends if not cat or dog
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	string pet; 
	char spayed;
	
	cout << "Enter the pet type (cat or dog): ";
	cin >> pet;

	if (pet == "cat")
		{
			cout << "Has the cat been spayed or neutered (y/n)? "; 
			cin >> spayed;
			if (spayed == 'y' || spayed == 'Y')
				cout << "Fee is $4.00 \n"; 
			else
				cout << "Fee is $8.00 \n"; 
		}
	else if (pet == "dog") 
		{
			cout << "Has the dog been spayed or neutered (y/n)? "; 
			cin >> spayed;
			if (spayed == 'y' || spayed == 'Y')
				cout << "Fee is $6.00 \n"; 
			else
				cout << "Fee is $12.00 \n";
		}
	else
		cout << "Only cats and dogs need pet tags. \n";
	
	return 0;
}