/*
**************************************************************** 
LParis 
g++ -std=c++11 -o lparis_Array5v2 lparis_Array5v2.cpp
****************************************************************
*/

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
