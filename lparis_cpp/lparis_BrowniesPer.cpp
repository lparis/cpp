/*	LParis
    Name:       Brownies per Baking Pan
    Purpose:    Determine the number of brownies per baking pan.
    Input:      Two inputs:
                Length of baking pan.
                Width of baking pan.
    Process:    Compute surface area of baking pan and calculate number of brownies, big and small. 
    Output:     Display pan dimensions, number of small brownies, and number of large brownies.    
    Variables:  pan_length (double)
                pan_width (double)
                pan_area (double)
                brownies_small (int)
                brownies_large (int)
                brownies_area_small (int)
                brownies_area_large (int)
                program_name (string)
                program_author (string) 
*/

# include <iostream>
using namespace std;

int main()
{
    double pan_width, pan_length, pan_area;
    int brownies_area_small = 1 * 1;
    int brownies_area_large = 2 * 2;
    int brownies_small, brownies_large;
    string program_name = "Brownies Per Pan";
    string program_author = "LParis";

    // Program banner
    cout << "************************************" << endl;
    cout << program_name << endl;
    cout << "By " << program_author << endl;
    cout << "************************************" << endl;

    // Get the baking pan dimensions.
    cout << "What is the width and length of the baking pan (in inches)? ";
    cin >> pan_length >> pan_width;

    // Compute the area of the baking pan.
    pan_area = pan_length * pan_width;

    // Compute the number of small brownies for the pan.
    brownies_small = pan_area / brownies_area_small;

    // Compute the number of small brownies for the pan.
    brownies_large = pan_area / brownies_area_large;

    // Display the number of small and large brownies that can fit in the pan.
    cout << "Your baking pan is " << pan_length << " by " << pan_width << " inches, for a total area of " << pan_area << " square inches. \n";
    cout << "This pan can bake the following number of whole brownies: \n"; 
    cout << "- " << brownies_small << " Small Brownies (1x1 inch each), or \n"; 
    cout << "- " << brownies_large << " Large Brownies (2x2 inches each)." << endl;
    return 0;
}

