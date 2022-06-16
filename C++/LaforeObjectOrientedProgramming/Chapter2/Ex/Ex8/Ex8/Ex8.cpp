// Ex8.cpp
// Modified sample "width".

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;

    cout << setw(9) << "City" << setw(12) << "Population" << endl
        << setw(9) << setfill(' ') << "Moscow" << setw(12) << setfill('.') << pop1 << endl
        << setw(9) << setfill(' ') << "Kirow" << setw(12) << setfill('.') << pop2 << endl
        << setw(9) << setfill(' ') << "Ugrumowka" << setw(12) << setfill('.') << pop3 << endl;

    return 0;
}


