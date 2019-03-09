# include <iostream>
using namespace std;

int main()
{
    int count = 0;

    cout << "Enter count: " << endl;
    cin >> count;

    for (int j = 0; j <= 4; j++)
    {
        for (int i = 0; i < count; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



