// Fibo.cpp
// Generating Fibonacci numbers via the cycle while.
#include <iostream>
using namespace std;

int main()
{
    const unsigned long limit = 4294967295;
    unsigned int next = 0;
    unsigned int last = 1;

    while (next < limit / 2)
    {
        cout << last << " ";
        long sum = next + last;
        next = last;
        last = sum;     
    }
    cout << endl;

    return 0;
}