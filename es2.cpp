// Scrivi un programma che chieda all'utente di inserire il prezzo di un prodotto e il numero di rate che desidera pagare. Il programma deve calcolare e stampare il costo totale del prodotto tenendo conto dell'interesse del 5% per ogni rata.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double prezzoIniziale;
    int nRate;

    cout << "Inserisci prezzo" << endl;
    cin >> prezzoIniziale;

    cout << "Inserisci numero di rate" << endl;
    cin >> nRate;

    double interesse = prezzoIniziale * 0.05;
    double prezzoFinale = (prezzoIniziale + interesse);

    cout <<"Prezzo finale: " << prezzoFinale <<endl;;
}