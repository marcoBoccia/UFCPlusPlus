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

int main() {
   int n, t1 = 0, t2 = 1, temporaryT = 0;

   cout << "Inserisci un numero intero positivo: ";
   cin >> n;

   cout << "Sequenza di Fibonacci fino a " << n << ":\n";

   for (int i = 1; temporaryT <= n; ++i) {
      if(i == 1) {
         cout << t1 << ", ";
         continue;
      }
      if(i == 2) {
         cout << t2 << ", ";
         continue;
      }
      temporaryT = t1 + t2;
      t1 = t2;
      t2 = temporaryT;

      if(temporaryT <= n)
         cout << temporaryT << ", ";
   }
   return 0;
}

