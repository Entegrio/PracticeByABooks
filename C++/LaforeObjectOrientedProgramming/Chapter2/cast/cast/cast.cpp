// cast.cpp
// work with signed and unsigned variable.

#include <iostream>
using namespace std;

int main()
{
	int intVar = 1500000000;
	intVar = (intVar * 10) / 10;
	cout << "The intVar value is " << intVar << endl;

	intVar = 1500000000;
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "The intVar value is " << intVar << endl;
}

