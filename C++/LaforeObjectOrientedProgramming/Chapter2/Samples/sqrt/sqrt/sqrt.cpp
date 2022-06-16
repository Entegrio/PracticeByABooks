// sqrt.cpp 
// Using the library function sqrt(). 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double number, answer;

	cout << "Enter the number: ";
	cin >> number;

	answer = sqrt(number);

	cout << "The square root is " << answer << endl;

	return 0;
}

