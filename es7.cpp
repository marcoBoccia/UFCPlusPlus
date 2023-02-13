/*
Scrivere un programma che stampi sullo schermo il vostro nome all’interno di un rettangolo come nell’esempio
                                    +--------------+
                                    |     Nome     |
                                    +--------------+
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* solution one
int main(){
    cout << "+--------------+" << endl;
    cout << "| Marco Boccia |" << endl;
    cout << "+--------------+" << endl;
}
*/

// solution two
int main(){

    string nome;
    string riga = "";
    cout << "What s your name?\n";
    cin >> nome;

    int lunghezza = nome.length();

    // riga 1
    riga += "+-------";
    for (int i = 0; i <= lunghezza; i++)
    {
        riga += "-";
    }
    riga+="+ \n";

    cout << riga;

    // riga 2
    cout << "|     "<<nome<< "      | \n";

    riga+="+ \n";


    /*
    cout << "+-------+" << endl; //ho aggiunto un trattino 
    cout << "|   P   |" << endl; // divido gli spazi 4 & 4 
    cout << "+-------+" << endl;

    cout << "+--------+" << endl;  
    cout << "| Marius |" << endl;  
    cout << "+--------+" << endl;
    */


    return 0;
}
