// Scrivi un programma in C++ che chieda all'utente di inserire 10 numeri e determini il numero più grande tra questi.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// solution 1
int main()
{
    int num = 0;
    int max = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Inserisci il " << i << "° numero: ";
        cin >> num;

        if (num > max)
        {
            max = num;
        }
    }

    cout << "Il numero più grande è: " << max << endl;

    return 0;
}


/*
int maxNumber()
{
    int num,max,n;
    for (int i = 3; i <= 10; i++)
    {
        cout << "Inserisci il " << i << "° num"<<endl;
        cin >> n;
        if (num > max)
        {
            max = num;
            num = n;
        }
        else if (num > max)
        {
            max = num;
        }
    }
    cout << "Il numero più grande tra " << num << " e " << max << " è " << n << endl;

    return 0;
}

int main(){
    maxNumber();
}
*/