// galloncubicfeet.cpp
// Gallons to cubic feet converter

#include <iostream>
using namespace std;

int main()
{
	const float gallToCubFeet = 7.481F;
	float gallons;

	cout << "Enter the number of gallons: ";
	cin >> gallons;

	cout << "The volume in cubic feet is " << gallons * gallToCubFeet;

	return 0;
}
