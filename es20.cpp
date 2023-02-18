// Fai inserire all’utente da tastiera 10 parole. Stampa la più grande

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string parole[10];
    string piuLunga = "";
    
    for (int i = 0; i < 10; i++) {
        cout << "Inserisci la parola numero " << i+1 << ": ";
        cin >> parole[i];
        if (parole[i].length() > piuLunga.length()) {
            piuLunga = parole[i];
        }
    }
    
    cout << "La parola piu' lunga inserita e': " << piuLunga << endl;
    
    return 0;
}
