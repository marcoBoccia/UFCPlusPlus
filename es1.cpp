// Scrivi un programma che chieda all'utente di inserire un un numero intero e stampi se è pari o dispari

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  int r;

  cout << "Inserisci un numero intero" << endl;
  cin >> n;

  r = n % 2;
  if (r == 0)
  {
    cout << "Il numero " << n << " e pari" << endl;
  }
  else
  {
    cout << "Il numero " << n << " e dispari" << endl;
  }
  return 0;
}