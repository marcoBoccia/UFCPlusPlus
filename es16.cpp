/* Scrivere un programma che riceva in ingresso un numero positivo N e determini il massimo intero K tale che la somma dei primi K interi sia minore o uguale a N.
Ad esempio, se N=20 allora K risulta 5, infatti
1+2+3+4+5=15 mentre
1+2+3+4+5+6=21
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// solution 1

int main()
{
    int N, K = 0, somma = 0;
    cout << "Inserisci un numero positivo N: ";
    cin >> N;

    while (somma <= N)
    {
        K++;
        somma += K;
    }

    cout << "Il massimo intero K tale che la somma dei primi K interi sia minore o uguale a N e': " << K - 1 << endl;

    return 0;
}


/* solution 2
int N = 0;

void maxInteger(int N);
{
    int K = 0
    int somma = 0;
    cout << "Inserisci un numero positivo N: ";
    cin >> N;

    while (somma <= N)
    {
        K++;
        somma += K;
    }

    cout << "Il massimo intero K tale che la somma dei primi K interi sia minore o uguale a N e': " << K - 1 << endl;

}
*/
