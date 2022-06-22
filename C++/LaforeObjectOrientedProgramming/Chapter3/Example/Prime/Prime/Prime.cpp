// Prime.cpp 
// demonstrates IF statement with prime numbers;

#include <iostream>
using namespace std;

int main()
{
    unsigned long n, j;
    unsigned int counter = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (j = 2; j <= n/2; j++)
        if (n % j == 0)
        {
            cout << "Divisible by " << j << endl;
            counter++;
        }

    if (counter == 0)
        cout << "It's prime\n";
    else
        cout << "It's not prime\n";

    return 0;
}
