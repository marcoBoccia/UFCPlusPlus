// Fai inserire parole all’utente (0 per terminare). Stampa vero o falso se almeno una parola contiene doppie

#include <iostream>
#include <string>
using namespace std;

bool ciSonoDoppie(string parola) {
    for (int i = 1; i < parola.length(); i++) {
        if (parola[i] == parola[i-1]) {
            return true;  // c'è una doppia
        }
    }
    return false;  // non ci sono doppie
}

int main() {
    string parola;
    bool doppiePresenti = false;
    
    while (true) {
        cout << "Inserisci una parola (0 per terminare): ";
        cin >> parola;
        if (parola == "0") {
            break;
        }
        if (ciSonoDoppie(parola)) {
            doppiePresenti = true;
        }
    }
    
    if (doppiePresenti) {
        cout << "c e una parola che contiene doppie" << endl;
    } else {
        cout << "non ci sono parole che contengono doppie" << endl;
    }
    
    return 0;
}


