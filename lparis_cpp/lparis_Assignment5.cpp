/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_Assignment5.cpp
g++ -std=c++11 -o lparis_Assignment5 lparis_Assignment5.cpp
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
using namespace std;

bool grade(char[], char[]);

int main()
{
    const int SIZE = 10;
    char correctAnswers[] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D'};
    char studentAnswers[SIZE];
    int numberCorrect, numberInorrect;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter answer #" << i + 1 << endl;
        cin >> studentAnswers[i];
    }

    cout << "Your answers:\t\t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << studentAnswers[i] << " ";
    }

    cout << endl;

    cout << "Correct answers:\t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << correctAnswers[i] << " ";
    }

    cout << endl;

    bool grade(correctAnswers[], studentAnswers[]);

    if (grade(char[], char[]) == true)
    {
        cout << "Congratulations!" << endl;
        cout << "You have passed the exam." << endl;
        cout << "Total number of correct answers: " << numberCorrect << endl;
        cout << "Total number of incorrect answers: " << numberInorrect << endl;
    }
    else if (grade() == false)
    {
        cout << "Sorry, you have not passed the exam." << endl;
        cout << "Total number of correct answers: " << numberCorrect << endl;
        cout << "Total number of incorrect answers: " << numberInorrect << endl;
    }
    else
        cout << "There has been an error processing your test scores." << endl;
        cout << "Please go to the DMV and get in line." << endl;

    return 0;
}

bool grade(studentAnswers[], correctAnswers[])
{
    for (int index = 0; index < SIZE; index++)
    {
        if (correctAnswers[index] == studentAnswers[index])
            {
                numberCorrect++;
            }
        else
            numberIncorrect++;
    }

    if (numberCorrect >= 8)
        return true;
    else
        return false;
}