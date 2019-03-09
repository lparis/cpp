/*  LParis

    Name:       Mad Lib
    Purpose:    Get user input and populate in paragraph.
    Inputs:     Name of instructor.
                Your name.
                A food.
                A number between 100 and 120.
                An adjective.
                A color.
                An animal.
    Process:    Get user inputs; construct paragram using inputs. 
    Output:     Display paragraph with populated values.   
*/

# include <iostream>
using namespace std;

int main()
{
    string program_name = "Mad Lib";
    string program_author = "LParis";
    string instructorName;
    string studentName ;
    string food;
    int number;
    string adjective;
    string color;
    string animal;

    // Program banner
    cout << "************************************" << endl;
    cout << program_name << endl;
    cout << "By " << program_author << endl;
    cout << "************************************" << endl;

    // Get instructor-name
    cout << "Enter the name of the instructor: " << endl;
    cin >> instructorName;    
    // Get student-name
    cout << "Enter your name: " << endl;
    cin >> studentName;    
    // Get food
    cout << "Enter your favorite food: " << endl;
    cin >> food;
    // Get number between 100 and 120
    cout << "Enter a number between 100 and 120: " << endl;
    cin >> number;
    // Get adjective
    cout << "Enter an adjective: " << endl;
    cin >> adjective;
    // Get color
    cout << "Enter a color: " << endl;
    cin >> color;
    // Get animal
    cout << "Enter an animal: " << endl;
    cin >> animal;


    cout << "Dear Instructor " << instructorName << "," << endl;
    cout << "I am sorry but I am unable to turn in my homework at this time. ";
    cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. ";
    cout << "I have come down with a fever of " << number << ". ";
    cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food;
    cout << " on my homework, because he ate it. ";
    cout << "I am currently rewriting my homework and hope you will accept it here." << endl;
    cout << "Sincerely, " << endl;
    cout << studentName << endl;

    return 0;
}

