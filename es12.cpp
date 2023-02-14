// Scrivi un programma che calcoli e stampi la somma dei quadrati dei primi 10 numeri naturali.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int calculateSum(int x)
{
  int sum = 0;
  for (int i = 0; i <= x; i++)
  {
    sum = sum + (i*i);
  }
  return sum;
}

// void printSum(int x){
//   int sum = 0;
//   for (int i = 0; i <= x; i++){
//     sum = sum + (i*i);
//   }
//   cout << sum << endl;
// }

int main()
{
  int result = calculateSum(10);
  cout << result << endl;
  return 0;
}