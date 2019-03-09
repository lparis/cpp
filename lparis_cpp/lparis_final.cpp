# include <iostream>

using namespace std;

int main()
{
    const int DAYS = 7;
    double temperature[DAYS];

    int index;
    for (index = 0; index < DAYS; index++)
    {
        cout << "Enter the temperature for Day " << index + 1 << ": ";
        cin >> temperature[index];
    }

    int i;
    int y = 0;
    for (int i = 0; i < DAYS; i++)
    {
        if (temperature[i] < temperature[y])
        {
            y = i;
        }
    }
    cout << "Lowest temperature for the 7 day period is " << temperature[y] << " on Day " << y + 1 << endl;

    return 0;
}

