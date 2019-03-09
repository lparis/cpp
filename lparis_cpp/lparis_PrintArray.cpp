# include <iostream>

using namespace std;

void printArray(int[], int);

int main()
{
    const int SIZE = 0;
    int myArray[SIZE];
    printArray(myArray, 10);

    for (int i = 0; i < SIZE; i++)
    	cout << myArray[i];
    
    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
    	// array[i] = 0;
        cout << array[i] << endl;
    }
}

void sumArray(int[]a, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + a[i];
}