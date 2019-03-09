//g++ -std=c++11 -o lparis_DataTypes lparis_DataTypes.cpp

# include <iostream>
using namespace std;
int main()
{
	short int short_integer;
	unsigned short int unsigned_short_integer;
	int integer;
	unsigned int unsigned_integer;
	long int long_integer;
	unsigned long int unsigned_long_integer;
	long long int long_long_integer;
	unsigned long long int unsigned_long_long_integer;
	float decimal;
	double decimal_double;
	long double decimal_long_double;
	bool boolean;
	char character = 'A';
	auto aString = "string";
	auto bString = "Suppose he should relent, and publish grace to all, on promise made of new subjections?";
    auto cString = "c";

    cout << "\t *** INTEGERS ***\n";
    cout << "Short Integer \t\t\t" << sizeof(short_integer) << " bytes\n";
    cout << "Unsigned Short Integer\t\t" << sizeof(unsigned_short_integer) << " bytes\n";
    cout << "Integer \t\t\t" << sizeof(integer) << " bytes\n";
    cout << "Unsigned Integer \t\t" << sizeof(unsigned_integer) << " bytes\n";
    cout << "Long Integer \t\t\t" << sizeof(long_integer) << " bytes\n";
    cout << "Unsigend Long Integer \t\t" << sizeof(unsigned_long_integer) << " bytes\n";
    cout << "Long Long Integer \t\t" << sizeof(long_long_integer) << " bytes\n";
    cout << "Unsigned Long Long Integer \t" << sizeof(unsigned_long_long_integer) << " bytes\n";
    cout << "\t *** DECIMALS ***\n";
    cout << "Float \t\t\t\t" << sizeof(decimal) << " bytes\n";
    cout << "Double \t\t\t" << sizeof(decimal_double) << " bytes\n";
    cout << "Long Double \t\t\t" << sizeof(decimal_long_double) << " bytes\n";
    cout << "\t *** LOGIC ***\n";
    cout << "Boolean \t\t\t" << sizeof(boolean) << " bytes\n";
    cout << "\t *** LETTERS ***\n";
    cout << "Character \t\t\t" << sizeof(character) << " bytes\n";
    cout << "String Word \t\t\t" << sizeof(aString) << " bytes\n";
    cout << "String Sentence \t\t" << sizeof(bString) << " bytes\n";
    cout << "String Character \t\t" << sizeof(cString) << " bytes\n";

    return 0;
}