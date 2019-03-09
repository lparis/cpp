# include <iostream>
using namespace std;

int main()
{
    int day = 0;
    double temp = 0;
    int daysSubZero = 0;
    int totalRecords = 0;

    do
    {
      cout << "Enter the temperature and the day: ";
      cin >> temp;
      cin >> day;

      totalRecords++;

      if (temp < 0)
      {
        daysSubZero++;
      }

    }
    while (day > 0);

    cout << "Toal number of days recorded is " << totalRecords << endl;
    cout << "Number of subzero days is " << daysSubZero << endl;
}