/*	LParis
*/

# include <iostream>
using namespace std;

int main()
{
    string str1="ASU"; 
    string str2="ASU Tempe"; 
    string str3="AsU"; 

    cout<<str1.compare(str2) << endl; //----------1 
    cout<<str2.compare(str1) << endl; //----------2 
    cout<<str1.compare(str3) << endl; //----------3 
    cout<<str3.compare(str1) << endl; //----------4 

    char char1 = 'a';
    char char2 = 'A';

    cout << (char1<char2) << endl;
    cout << islower(char1) << endl;


    cout << !( 6 > 7 || 3 == 4) << endl;
}

