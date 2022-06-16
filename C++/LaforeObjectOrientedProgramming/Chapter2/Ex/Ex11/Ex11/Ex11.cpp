// Ex11.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout  << setw(12) << "Surname" << setw(12) << "Name" << setw(16) << "Address" << setw(12) << "City" << endl
        << setfill('-') << setw(52) << "-" << endl
        << setfill(' ') << setw(12) << "White" << setw(12) << "Mike" << setw(16) << "Grean St. 34" << setw(12) << "New York" << endl
        << setw(12) << "Dice" << setw(12) << "Rob" << setw(16) << "Saint St. 61" << setw(12) << "Chicago" << endl;

    return 0;
}
