/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab14.cpp
g++ -std=c++11 -o lparis_lab15 lparis_lab15.cpp
****************************************************************

Purpose:    Calculate student's final grade.
Inputs:     Test scores 1 and 2, homework score.
Processing: Calculate highest and average snowfall for the week.
Outputs:    Final score, final letter grade.
Required:   Use functions and reference variables

*/

#include <iostream> 
using namespace std;

// Function prototype for "readTestandHwScore"
void readTestandHwScore(double&, double&, double&);
// Function prototype for "calcFinalScore" here
double calcFinalScore(double, double, double); 
// Function prototype for "printFinalScore" here
void printFinalScore(double);

int main()
{

    double test1Score, test2Score;      // the two tests scores 
    double hwScore;                     // the homework score 
    double finalScore;                  // the student's final score

    // call function readTestandHwScore
    readTestandHwScore(test1Score, test2Score, hwScore);
    // call function calcFinalScore 
    calcFinalScore(test1Score, test2Score, hwScore);
    // Assign returned value from function calcFinalScore to finalScore variable
    finalScore = calcFinalScore(test1Score, test2Score, hwScore);
    // call function printFinalScore and pass finalScore value
    printFinalScore(finalScore);
    return 0; 
}

// Implement readTestandHwScore
void readTestandHwScore(double &test1Score, double &test2Score, double &hwScore)
{
    cout << "Enter the score for test #1: "; 
    cin >> test1Score;
    cout << "Enter the score for test #2: "; 
    cin >> test2Score;
    cout << "Enter the score for the homework: "; 
    cin >> hwScore;
}

// Implement calcFinalScore 
double calcFinalScore(double t1, double t2, double hw)
// double calcFinalScore(double &test1Score, double &test2Score, double &hwScore)
{
    double finalScore;
    finalScore = (t1 * .40) + (t2 * .40) + (hw * .2);
    // finalScore = (test1Score * .40) + (test2Score * .40) + (hwScore * .2);    
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