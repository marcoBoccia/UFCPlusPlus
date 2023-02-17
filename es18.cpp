// Chiedi nome e cognome. Stampa «ciao nome cognome»

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* solution 1 
int main()
{
    string nome,cognome;
    cout << "Inserisci il tuo nome: "<<endl;
    cin >> nome;
    cout << "Inserisci il tuo cognome: "<<endl;
    cin >>cognome;
    cout << "Ciao "<< nome << " " << cognome << " ! "<< endl;
    return 0;
}
*/

// solution 2
void sayHello(string nome, string cognome){
    cout << "Ciao "<< nome << " " << cognome << " ! "<< endl;
}

 int main()
{
    sayHello("Marco","Boccia");
    return 0;
}

