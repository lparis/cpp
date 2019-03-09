/*

*/

# include <iostream> 
# include <string>
using namespace std;


// int main() 
// {
// 	int sum, num;

// 	cout << "enter sum" << endl;
// 	cin >> sum;
// 	cout << "enter num" << endl;
// 	cin >> num;

// 	for (int j = 1; j <= 3; j++)
// 	{
// 		cout << "enter num" << endl;
// 	    cin >> num;
// 	    sum = sum + num;
// 	}
// 	cout << sum << endl;

// 	return 0;
// }

// int main() 
// {
// 	int x = 1;
// 	int j;

// 	for (j = 0; j <= 2; j++)
//     	x = x * j;
// 	cout << x << endl;

// 	return 0;
// }

// int main() 
// {
// 	int sum = 0, num;

// 	cout << "enter sum" << endl;
// 	cin >> sum;
// 	cout << "enter num" << endl;
// 	cin >> num;

// 	for (int j = 1; j <= 5; j++)
// 	{
// 		cout << "enter num" << endl;
// 	    cin >> num;
// 	    if (num < 0)
// 	    	continue;
// 	    sum = sum + num;
// 	}
// 	cout << sum << endl;

// 	return 0;
// }

// int main() 
// {
// 	int x = 7;
// 	bool found = false;
	
// 	do
// 	{
// 	    cout << x << " ";
// 	    if (x <= 2)
// 	    	found = true;
// 	    else
// 	    	x = x - 5;
// 	}
// 	while (x > 0 && !found);

// 	cout << endl;

// 	return 0;
// }

// int main() 
// {
// 	int count = 0;
// 	int numItems = 4; 

// 	while(count < 100)
// 	{
// 		numItems++; 
// 		cout << numItems << "\n"; 
// 		count++;
// 	}
// 	return 0;
// }

int main() 
{
	string myString = "What ever you do, do it well!";

	for (int i = myString.length() -1; i > 0; i -= 2)
	{
		cout << myString[i]; 
	}
	return 0;
}