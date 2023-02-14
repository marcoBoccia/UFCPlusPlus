// Scrivere un algoritmo che visualizza in ordine decrescente i numeri naturali da 300 a 150

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* solution 1
int main()
{
    for (int i = 300; i >= 150; i--)
    {
        cout << i << endl;
    }
    return 0;
}
*/

// solution 2
int showNumberInOrder(int x, int y)
{
    for (int i = x; i >= y; i--)
    {
        cout << i << endl;
    }
    return 0;
}

int main()
{
    int order = showNumberInOrder(300, 150);
    cout << order << endl;
    return 0;
}
