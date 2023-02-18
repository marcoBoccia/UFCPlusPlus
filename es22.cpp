// bool cerca(string parola, char c)

#include <iostream>
#include <string>
using namespace std;

bool cerca(string parola, char c) {
    for (int i = 0; i < parola.length(); i++) {
        if (parola[i] == c) {
            return true;  // il carattere c è presente nella parola
        }
    }
    return false;  // il carattere c non è presente nella parola
}

int main() {
    string parola;
    char c;
    
    cout << "Inserisci una parola: ";
    cin >> parola;
    cout << "Inserisci un carattere da cercare: ";
    cin >> c;
    
    if (cerca(parola, c)) {
        cout << "Il carattere " << c << " e' presente nella parola " << parola << endl;
    } else {
        cout << "Il carattere " << c << " non e' presente nella parola " << parola << endl;
    }
    
    return 0;
}