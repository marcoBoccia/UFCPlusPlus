#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ! prende in input 2 numeri
int piuGrande(int num,int max){
    for (int i = 1; i <= 10; i++)
    {
        if (num > max)
        {
            max = num;
        }
    }
    return max;
    // ! output numero più grande
}

// ! prende in input un numero 
bool isEven(int n){
    int r;
    r = n % 2;
  if (r == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
  return 0;
//! output true pari false dispari
}

// ! input prezzo iniziale e numero rate
double costoTotale(double prezzoIniziale,int nRate){
    double interesse = prezzoIniziale * 0.05;
    double prezzoFinale = (prezzoIniziale + interesse);
    return prezzoFinale;
    // ! output costo totale del prodotto
}

// ! prende in input l'età inserita.
void buttaFuori(int myAge)
{
    if (myAge < 18)
    {
        cout << "Mi dispiace sei troppo giovane per bere birra." << endl;
    }
    else
    {
        cout << "Cheers! Buon divertimento al bar!" << endl;
    }
// ! output ci comunica se possiamo entrare o no al bar in base all'età.
}

//! prende in input 3 numeri
bool isBetween(int a, int b, int c)
{
    if (a < b && b < c)
    {
        return "B è compreso tra a e c";
    }
    else
    {
        return "B non è compreso tra a e c";
    }
//! ci restituisce se il numero intermedio è compreso tra gli altri 2
}

// ! prende in input l'anno inserito
bool bisestile(int anno)
{
    int divisibilePer4 = anno % 4;
    int divisibilePer100 = anno % 100;

    if (divisibilePer4 == 0)
    {
        if (divisibilePer100 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
        return false;
// ! restituisce true se è bisestile e false se non lo è.
    return 0;
}

// ! prende in input un numero
void stampaTabellina(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
// ! output calcola la tabellina
}

// ! prende in input due interi
void stampaTabelline(int i, int j)
{
    const int n = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << "\t" << i * j;
        cout << endl;
// ! output tavola pitagorica
    }
}

// ! prende in input una stringa
void stampaNome(string nome)
{
    string riga = "";
    int lunghezza = nome.length();
    riga += "+-------";
    for (int i = 0; i <= lunghezza; i++)
    {
        riga += "-";
    }
    riga += "+ \n";
    cout << riga;
    cout << "|     " << nome << "   | \n";
    riga += "+ \n";
    riga += "+------+";
// ! restituisce una 'cornice' con al centro la stringa inserita
}

// ! prende in input 2 numeri
void stampaPari(int i, int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
// ! output tutti i numeri pari compresi tra i due numeri in input
    }
}

// ! prende in input 2 numeri
void decrescente(int x, int y)
{
    for (int i = x; i >= y; i--)
    {
        cout << i << endl;
    }
// ! stampa i numeri compresi tra i 2 dati input in ordine descrescente
}

// ! prende in input 3 float (coefficienti)
void equazione(float a,float b,float c)
{
    float x;
    float x1;
    float x2;
    float delta;

    // funzione che calcola il delta
    void determinante();
    {
        delta = b * b - 4 * a * c;
    }

    // funzione per il calcolo delle soluzioni
    void soluzioni();
    {
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta) / (2 * a));
            x2 = (-b - sqrt(delta) / (2 * a));
            cout << "Ci sono due soluzioni reali e distinte x1= " << x1 << "e x2= " << x2;
        }
        else if (delta == 0)
        {
            x = -b / (2 * a);
            cout << "Ci sono due soluzioni reali e coincidenti x= " << x;
        }
        else
        {
            cout << "Non ci sono soluzioni reali" << endl;
        }
        // !restituisce le soluzioni dell'equazione
    }
}

    int main()
    {
        cout << "Hello world"<<endl;
    }
