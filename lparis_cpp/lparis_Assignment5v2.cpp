/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_Assignment5v2.cpp
g++ -std=c++11 -o lparis_Assignment5v2 lparis_Assignment5v2.cpp
****************************************************************
*/

/*
PART 1

Output of 1 is 10   20
Output of 2 is 20   10

swapReference swaps the value because there is only a single intance of the value.
If it is changed then it is changed everywere because only a reference to memory space
is passed to the function, not a copy of the data.

swapCopy does not swap the value becaue when cout outputs "i" and "n" values it is using a copy
of the variables and their vaules initialized above. Although swapCopy does swap the values, 
it is swapping its own copy. cout is likewise using its own copy, which are initialized to 10 and 20
and not changed. To actually output the result of swapCopy you would have to do it in that function
or return it from the function and do it in main().
*/

// #include <iostream>
// using namespace std;

// // Pass by value function
// void swapValue(int, int);
// // Pass by reference function
// void swapReference(int &, int &);

// int main()
// {
//     int i = 10, n = 20;
//     swapValue(i, n);
//     cout << "swapValue:\ti = " << i << "\t" << "n = " << n <<endl; //---1

//     i = 10, n = 20;
    
//     swapReference(i, n);
    
//     cout << "swapRef:\ti = " << i << "\t" << "n = " << n << endl; //---2
    
//     return 0; 
// }

// // function swapValue takes 2 ints as arg, doesn't return value
// void swapValue(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = a; 
// }

// void swapReference(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


// Part II

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(char[], int);            
void displayTestResults(int, int);

int main()
{
    const int SIZE = 10;
    char studentAnswers[SIZE];
    char correctAnswers[] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D'};
    int numberCorrect = 0, numberIncorrect = 0;
    bool flag;

    // Invoke getTestScore with array and array size
    getTestScores(studentAnswers, SIZE);

    // Unfortunately I could not figure out how to do the following block using a function.
    // Not clear how to pass multiple arrays into a function, and how to pass vars by reference
    // To that same function. Need help with the solution.
    // To get it to work I have to do it in main(). In my opinion the lecture and book on 
    // this important topic are somewhat lacking.

    // Loop counter
    int index;

    cout << "Correct answers:\t";
    for (index = 0; index <= SIZE - 1; index++)
    {
        cout << correctAnswers[index] << " ";
    }
    cout << endl;

    for (int index = 0; index < SIZE; index++)
    {
        if (correctAnswers[index] == studentAnswers[index])
            numberCorrect++;
        else
            numberIncorrect++;
    }

    // Invoke displayTestResults
    displayTestResults(numberCorrect, numberIncorrect);

    return 0;
}

// Function getTestScores gets the test scores for the student
// And populates the studentAnswers[] array
void getTestScores(char studentAnswers[], int size)
{
    // Loop counter
    int index;

    // Get each test score
    for (index = 0; index <= size - 1; index++)
    {
        cout << "Enter answer #" << (index + 1) << endl;
        cin >> studentAnswers[index];
    }

    cout << "Your answers:\t\t";
    for (int i = 0; i < size; i++)
    {
        cout << studentAnswers[i] << " ";
    }
    cout << endl;
}

// Function displayTestResults displays if the tester passed 
void displayTestResults(int numberCorrect, int numberIncorrect)
{
    if (numberCorrect >= 8)
    {
        cout << "Congratulations, you passed the exam!" << endl;
        cout << "Total number of correct answers: " << numberCorrect << endl;
        cout << "Total number of incorrect answers: " << numberIncorrect << endl;
    }
    else if (numberCorrect < 8)
    {
        cout << "Sorry, you did not passed the exam." << endl;
        cout << "Total number of correct answers: " << numberCorrect << endl;
        cout << "Total number of incorrect answers: " << numberIncorrect << endl;
    }
    else
    {
        cout << "There has been an error processing your test scores." << endl;
        cout << "Please go to the DMV and get in line." << endl;
    }
}
