/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab14.cpp
g++ -std=c++11 -o lparis_lab14 lparis_lab14.cpp
****************************************************************

Purpose:    Calculate student's final grade.
Inputs:     Test scores 1 and 2, homework score.
Processing: Calculate highest and average snowfall for the week.
Outputs:    Final score, final letter grade.
Required:   Use functions

*/

#include <iostream> 
using namespace std;
// Function prototype for "calcFinalScore" here
double calcFinalScore(double, double, double); 
// Function prototype for "printFinalScore" here
void printFinalScore(double);

int main()
{
    // local variables
    double test1, test2; // the two tests scores 
    double hw; // the homework score 
    double finalScore; // the student's final score

    cout << "Enter the score for test #1: "; 
    cin >> test1;
    cout << "Enter the score for test #2: "; 
    cin >> test2;
    cout << "Enter the score for the homework: "; 
    cin >> hw;

    // call function calcFinalScore 
    calcFinalScore(test1, test2, hw);
    // Assign returned value from function calcFinalScore to finalScore variable
    finalScore = calcFinalScore(test1, test2, hw);
    // call function printFinalScore and pass finalScore value
    printFinalScore(finalScore);
    return 0; 
}

// Implement calcFinalScore 
double calcFinalScore(double t1, double t2, double hw)
{
    double finalScore;
    finalScore = (t1 * .40) + (t2 * .40) + (hw * .2);
    return finalScore;
}

// Implement printFinalScore here
void printFinalScore(double finalScore)
{
    cout << "The student's final score is " << finalScore << endl;
	if (finalScore >= 90)
		cout << "The final letter grade is A." << endl;
	if (finalScore >= 80 && finalScore < 90)
		cout << "The final letter grade is B." << endl;
	if (finalScore >= 70 && finalScore < 80)
		cout << "The final letter grade is C." << endl;
	if (finalScore >= 60 && finalScore < 70)
		cout << "The final letter grade is D." << endl;
	if (finalScore < 60)
		cout << "The final letter grade is F." << endl;
}