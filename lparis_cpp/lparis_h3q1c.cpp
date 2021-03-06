#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int    choice;         // User's shape choice
    double radius,         // Circle radius
           length,         // Rectangle length
           width,          // Rectangle width
           base,           // Triangle base
           height,         // Triangle height
           area;           // Area of the selected shape
    char   more,           // Y or N to run program again
           more_test;      // so we can validate it

    do
    {
        // Display the menu selections
        cout << "Geometry Calculator\n\n";
        cout << "1. Calculate the area of a Circle\n";
        cout << "2. Calculate the area of a Rectangle\n";
        cout << "3. Calculate the area of a Triangle\n";
        cout << "4. Quit\n\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Calculate and display the area of the selected shape
        switch (choice)
        {
            case 1:  // Area of a circle
                    cout << "\nEnter the circle's radius: ";
                    cin  >> radius;

                    if (radius < 0)
                        cout << "\nThe radius can not be less than zero.\n";
                    else
                    {	 area = PI * radius * radius;
                        cout << "\nThe area is " << area << endl;
                        break;
                    }

            case 2:  // Area of a rectangle
                    cout << "\nEnter the rectangle's length: ";
                    cin  >> length;
                    cout << "Enter the rectangle's width: ";
                    cin  >> width;

                    if (length < 0 || width < 0)
                        cout << "\nOnly enter positive values for length and width.\n";
                    else
                    {	area = length * width;
                        cout << "\nThe area is " << area << endl;
                    }
                    break;

            case 3:  // Area of a triangle
                    cout << "Enter the length of the base: ";
                    cin  >> base;
                    cout << "Enter the triangle's height: "; 
                    cin  >> height;

                    if (base < 0 || height < 0)
                        cout << "\nOnly enter positive values for base and height.\n";
                    else
                    {	 area = base * height * 0.5;
                        cout << "\nThe area is " << area << endl;
                    }
                    break;

            case 4:	 cout << "\nBye!\n";
                    break;

            default:  cout << "\nYou may only enter 1, 2, 3, or 4.\n";
        }

    cout << "\nWould you like to run the program again?" << endl;
    cout << "If so enter Y, otherwise enter N to exit." << endl;
    cin >> more;

    // if (more == 'Y' || more == 'N')
    //     more_test = more;
    // else
    //     {	
    //         cout << "\nInvalid choice. Run the program again.\n";
    //     }

    } while (more == 'Y'); // while (choice != 4);

	return 0;
}
