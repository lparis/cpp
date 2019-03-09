/*  LParis
    g++ -std=c++11 -o <prog-name> <prog-name>.cpp
    Purpose: Caclulate time and distance traveled of watermelon thrown from bridge
    Inputs: Time of the fall in seconds; height of the bridge in meters
    Processing: Calucate the distance given the inputs; formula is d = 0.5 * g * t2, 
    where the acceleration of gravity g = 9.8 meters/second2.
    If distance fallen exceeds bridge height, print error.
    Output: Time falling (per second), Distance Fallen, Error if distance > height 
*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double distance,       // In meters
           time,           // In seconds
           GRAVITY = 9.8,  // 9.8 meters/second(squared)
           height,         // of bridge
           seconds; 

    cout << "\nPlease input the time of fall in seconds: ";
    cin >> time;

    cout << "Please input the height of the bridge in meters: ";
    cin >> height;

    cout << "\nTime Falling (seconds)\tDistance Fallen (meters)" << endl;
    cout << "**********************\t************************" << endl;

    for (int seconds = 0; seconds <= time; seconds++)
    {
        distance = 0.5 * GRAVITY * pow(seconds, 2.0);
        cout << seconds << "\t\t\t" << distance << endl;
        if (distance > height)
        {
            cout << "Warning: Bad Data! ";
            cout << "Distance Fallen (" << distance << " meters) exceeds Height of bridge (" << height << " meters)" << endl;
        }
    }
    
	return 0;
}
