// Scrivere un programma in C++ che calcoli e stampi tutti i numeri compresi tra 300 e 150, che sono divisibili per 3.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* solution 1
int main()
{
    for (int i = 300; i >= 150; i--)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
*/

// solution 2
int showNumberDivisibleForThree(int x, int y)
{
    for (int i = x; i >= y; i--)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

int main()
{
    int order = showNumberDivisibleForThree(300, 150);
    cout << order << endl;
    return 0;
}