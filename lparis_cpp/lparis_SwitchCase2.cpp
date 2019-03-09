/*  Lorenzo Paris
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{ 
	int choice;
	double pi = 3.14;
	double square_area,
		   circle_area,
		   triangle_area,
		   square_width,
		   circle_radius,
		   triangle_base,
		   triangle_height;

	// Constants for menu choices
	const int 	SQUARE_CHOICE = 1,
				CIRCLE_CHOICE = 2,
				TRIANGLE_CHOICE = 3,
				QUIT_CHOICE = 4;

	// Display the menu and get a choice
	cout << "Program to calculate area of objects\n"
		 << "1 -- square\n"
		 << "2 -- circle\n"
		 << "3 -- right triangle\n"
		 << "4 -- quit the program\n"
		 << "Enter your choice" << endl;		 
	cin >> choice;

	// Compute area of object per choice
	switch (choice)
	{
		case SQUARE_CHOICE:
		cout << "Enter the width of the square: ";
		cin >> square_width;
		square_area = square_width * square_width;
		cout << "The area of the square is " << square_area << endl;
		break;

		case CIRCLE_CHOICE:
		cout << "Enter the radius of the circle: ";
		cin >> circle_radius;
		circle_area = pi * (circle_radius * circle_radius);
		cout << "The area of the circle is " << circle_area << endl;
		break;

		case TRIANGLE_CHOICE:
		cout << "Enter the base of the triangle: ";
		cin >> triangle_base;
		cout << "Enter the height of the triangle: ";		
		cin >> triangle_height;
		triangle_area = (triangle_base * triangle_height) / 2;
		cout << "The area of the triangle is " << triangle_area << endl;
		break;

		case QUIT_CHOICE:
		cout << "Program ending." << endl;
		break;

		default:
		cout << "Invalid choice. The valid choices are 1 through 4. Run the program again." << endl;

	}

	return 0;
}