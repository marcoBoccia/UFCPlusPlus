/*
! Teoria
! Letteralmente, la sequenza di Fibonacci è una successione di numeri interi positivi dove ogni numero è il risultante della somma dei due precedenti.

Scrivere un programma che generi la sequenza di Fibonacci fino a un numero N inserito dall'utente. La sequenza di Fibonacci è definita come segue:
F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2) per n > 1
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* solution 1

int main()
{
    int n, t1 = 0, t2 = 1, temporaryT = 0;

    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    cout << "Sequenza di Fibonacci fino a " << n << ":\n";

    for (int i = 1; temporaryT <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
        }
        if (i == 2)
        {
            cout << t2 << ", ";
        }
        temporaryT = t1 + t2;
        t1 = t2;
        t2 = temporaryT;

        if (temporaryT <= n)
            cout << temporaryT << ", ";
    }
    return 0;
}
*/

int howMany = 0;
void fibonacciSequence(int howMany)
{
    int t1 = 0, t2 = 1, temporaryT = 0;

    cout << "Inserisci un numero intero positivo: ";
    cin >> howMany;

    cout << "Sequenza di Fibonacci fino a " << howMany << ":\n";

    for (int i = 1; temporaryT <= howMany; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
        }
        if (i == 2)
        {
            cout << t2 << ", ";
        }
        temporaryT = t1 + t2;
        t1 = t2;
        t2 = temporaryT;

        if (temporaryT <= howMany)
            cout << temporaryT << ", ";
    }
}

int main (){
    fibonacciSequence(10);
}
