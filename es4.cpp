// dati ingresso 3 numeri stampali in ordine crescente.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    int valoreTemporaneo;

    cout << "Inserisci il primo numero" << endl;
    cin >> n1;

    cout << "Inserisci il secondo numero" << endl;
    cin >> n2;

    cout << "Inserisci il terzo numero" << endl;
    cin >> n3;

    if (n1 > n2)
    {
        valoreTemporaneo = n1;
        n1 = n2;
        n2 = valoreTemporaneo;
    }
    if (n1 > n3)
    {
        valoreTemporaneo = n1;
        n1 = n3;
        n3 = valoreTemporaneo;
    }
    if (n2 > n3)
    {
        valoreTemporaneo = n2;
        n2 = n3;
        n3 = valoreTemporaneo;
    }
    cout << "I tre numeri in ordine crescente sono" << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    return 0;
}
