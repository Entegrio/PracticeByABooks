// width1.cpp
// Demonstraition of the necessity of using the setw manipulator.
#include <iostream>
using namespace std;

int main()
{
    long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
    cout << "City " << "Pop." << endl
        << "Moscow " << pop1 << endl
        << "Kirow " << pop2 << endl
        << "Ugryumowka " << pop3 << endl;
    return 0;
}
