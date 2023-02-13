// Scrivere un programma che calcola la somma dei primi 100 numeri interi

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int i;
    int n;
    int somma;
    
    i = 0;
    n = 100;

    while (i <= n){
        somma += i;
        i++;
    }
    cout <<"la somma è "<< somma << endl;
    return 0;
}