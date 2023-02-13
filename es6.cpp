// Scrivere un programma che risolva l’equazione di secondo grado prendendo in input a, b, c
// 𝑎𝑥2+𝑏𝑥+𝑐=0

/*
   -devo conoscere i valori dei coefficienti a, b ,c.
   -devo trovare il delta o determinante ----->formula(b * b - 4*a*c)
   -se il delta è > 0 -----> due soluzioni reali distinte----->coefficienti a = 2   b = 9    c = 2;
   -se il delta è = 0 -----> due soluzioni reali coincidenti----->coefficienti a = 1    b = 2   c = 1
   -se il delta è < 0 -----> no soluzioni reali------>coefficienti a = 3 b = 4 c = 5;
   !se il coefficiente a è = 0 -----> l'equazione diventa di primo grado ovvero bx + c quindi non potrò applicare la formula di riga 6
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float a;
float b;
float c;
float x;
float x1;
float x2;
float delta;

int main()
{
// funzione che prende in input i coefficienti
void coefficienti();
{
    cout << "coefficiente a:"<<endl;
    cin >> a;
    cout << "coefficiente b:"<<endl;
    cin >> b;
    cout << "coefficiente c:"<<endl;
    cin >> c;
}

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
        x1 = (-b + sqrt(delta) / (2 * a) );
        x2 = (-b - sqrt(delta) / (2 * a) );
        cout<<"Ci sono due soluzioni reali e distinte x1= " <<x1<<"e x2= "<<x2;
    }
    else if (delta == 0)
    {
        x = -b / (2*a);
        cout<<"Ci sono due soluzioni reali e coincidenti x= "<<x;
    }
    else
    {
        cout<<"Non ci sono soluzioni reali"<<endl;
    }
}
    return 0;
}


