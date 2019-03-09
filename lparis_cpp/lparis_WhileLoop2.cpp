/*
**************************************************************** 
LParis 
Use a while loop to print many messages declaring your
passion for computer science 
****************************************************************
*/

# include <iostream> 
using namespace std;

int main() 
{
	int numTimes;

	cout << "How many times should I print how you feel about CS? ";
	cin >> numTimes;
	// const int LIMIT = 10;
	int count = 1;

	while(count <= numTimes)
	{
		cout << count << " I love Computer Science!!" << endl;
		count++;
	}

	cout << "Printed this message " << --count << " times." << endl;
	// cout << "Printed this message " << numTimes << " times." << endl;

	return 0;
}
