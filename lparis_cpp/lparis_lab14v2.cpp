/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab14.cpp
g++ -std=c++11 -o lparis_lab14v2 lparis_lab14v2.cpp
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
    const int   A_SCORE = 90,
                B_SCORE = 80,
                C_SCORE = 70,
                D_SCORE = 60;

    cout << "The student's final score is " << finalScore << endl;
	if (finalScore >= A_SCORE)
		cout << "The final letter grade is A." << endl;
	else if (finalScore >= B_SCORE)
		cout << "The final letter grade is B." << endl;
	else if (finalScore >= C_SCORE)
		cout << "The final letter grade is C." << endl;
	else if (finalScore >= D_SCORE)
		cout << "The final letter grade is D." << endl;
	else
		cout << "The final letter grade is F." << endl;
}