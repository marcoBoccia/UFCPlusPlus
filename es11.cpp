// Scrivere un programma che calcola la somma dei primi 100 numeri interi

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Situation 1
int calculateSum(int x)
{
  int sum = 0;
  for (int i = 0; i <= x; i++)
  {
    sum = sum + i;
  }
  return sum;
}

// Situation 2
void printSum(int x){
  int sum = 0;
  for (int i = 0; i <= x; i++){
    sum = sum + i;
  }
  cout << sum << endl;
}

int main()
// Situation 1
{
  int result = calculateSum(100);
  cout << result << endl;
  // Situation 2
  printSum(100);

  return 0;
}