# include <iostream>

using namespace std;

int main()
{
    int x = 55;
    int y = 5;

    switch (x % 5) 
    {
       case 0:
       case 1: 
             y++;
       case 2:
       case 3: 
             y = y + 2;
       case 4: 
             break;
       case 5:
       case 6:
             y = y - 3;
             break;
       default:
             y = y;
    }

    cout << y << endl;

    cout << x % 5 << endl;

    bool compare = strcmp("a", "1");

    cout << compare << endl;

    return 0;
}

