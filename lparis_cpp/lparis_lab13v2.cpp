/*
**************************************************************** 
LParis 
CSE100 Session A
lparis_lab13.cpp
****************************************************************

Purpose:    Track snow conditions for ski resort.
Inputs:     Month name, dates, snowfall
Processing: Calculate highest and average snowfall for the week.
Outputs:    Report that shows snowfall per day, highest, and avg.
Required:   Use parallel arrays

g++ -std=c++11 -o lparis_lab13 lparis_lab13.cpp
*/

# include <iostream>
# include <iomanip>     
using namespace std;

int main()
{
    string month;
    const int NUM_DAYS = 7;
    int date[NUM_DAYS];
    double snowfall[NUM_DAYS];
    double totalSnowfall = 0, avgSnowfall = 0, highestSnowfall = 0;
    int highestSnowfallDate;

    cout << "Enter the Month: " << endl;
    cin >> month;

    for (int index = 0; index < NUM_DAYS; index++)
    {
        cout << "Enter the date: ";
        cin >> date[index];
        cout << "Enter the snowfall: ";
        cin >> snowfall[index];
    }
    
    cout << "-- Snowfall Report --" << endl;
    cout << "Date\t\tSnowfall" << endl;

    for (int index = 0; index < NUM_DAYS; index++)
    {
        cout << month << " " << date[index] << "\t" << snowfall[index] << " inches" << endl;
        totalSnowfall = totalSnowfall + snowfall[index];
        avgSnowfall = totalSnowfall / NUM_DAYS;
    }

    highestSnowfall = snowfall[0];
    highestSnowfallDate = date[0];
    for (int index = 0; index < NUM_DAYS; index++)
    {
        if (snowfall[index] > highestSnowfall)
            {
                highestSnowfall = snowfall[index];
                highestSnowfallDate = date[index];
            }
    }  

    cout << "Total snowfall for the " << NUM_DAYS << " day period: \t" << totalSnowfall << " inches" << endl;
    cout << "Average daily snowfall for the period: \t" << avgSnowfall << " inches" << endl;
    cout << "Highest snowfall for the period: \t" << highestSnowfall << " inches on " << month << " " << highestSnowfallDate << endl;

    return 0;
}