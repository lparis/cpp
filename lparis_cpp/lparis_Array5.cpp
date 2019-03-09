/*
**************************************************************** 
LParis 
CSE100 Session A
g++ -std=c++11 -o lparis_Array5 lparis_Array5.cpp
****************************************************************
*/

// Part II

#include <iostream>
#include <iomanip>
using namespace std;

void getTestScores(char[], int);            // Get test scores from test taker
void gradeScores(char[], int);           // Compare test scores
// bool gradeScores(char[], char[], int, int&, int&);           // Compare test scores
// void displayTestResults();

int main()
{
    const int SIZE = 10;
    char studentAnswers[SIZE];
    char correctAnswers[] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D'};
    int numberCorrect, numberIncorrect;

    // Invoke getTestScore with array and array size
    getTestScores(studentAnswers, SIZE);

    // Invoke gradeScores with two arrays: studentAnswers and correctAnswers
    // bool gradeScores(correctAnswers, studentAnswers, SIZE, numberIncorrect, numberCorrect);
    gradeScores(correctAnswers, SIZE);

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

void gradeScores(char correctAnswers[], int size)
{

    // Loop counter
    int index;

    cout << "Correct answers:\t";
    for (index = 0; index <= size - 1; index++)
    {
        cout << correctAnswers[index] << " ";
    }
    cout << endl;
}

// bool gradeScores(char correctAnswers[], char studentAnswers[], int size, int &numberIncorrect, int &numberCorrect)
// {

//     // Loop counter
//     int index;

//     cout << "Correct answers:\t";
//     for (index = 0; index <= size - 1; index++)
//     {
//         cout << correctAnswers[index] << " ";
//     }
//     cout << endl;

//     for (int index = 0; index < size; index++)
//     {
//         if (correctAnswers[index] == studentAnswers[index])
//             numberCorrect++;
//         else
//             numberIncorrect++;
//     }

//     if (numberCorrect >= 8)
//         return true;
//     else
//         return false;
// }

// void displayTestResults(bool results)
// {
//     if (grade(char[], char[]) == true)
//     {
//         cout << "Congratulations!" << endl;
//         cout << "You have passed the exam." << endl;
//         cout << "Total number of correct answers: " << numberCorrect << endl;
//         cout << "Total number of incorrect answers: " << numberInorrect << endl;
//     }
//     else if (grade(char[], char[]) == false)
//     {
//         cout << "Sorry, you have not passed the exam." << endl;
//         cout << "Total number of correct answers: " << numberCorrect << endl;
//         cout << "Total number of incorrect answers: " << numberInorrect << endl;
//     }
//     else
//         cout << "There has been an error processing your test scores." << endl;
//         cout << "Please go to the DMV and get in line." << endl;
// }
