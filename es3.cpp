// Scrivi un programma che chieda all'utente quanti anni ha e stabilisca se può andare al bar a bere una birra. In base alla legislazione del tuo paese, le persone devono avere almeno 18 anni per bere alcolici. Se l'utente ha meno di 18 anni, il programma deve stampare un messaggio del tipo "Mi dispiace, sei troppo giovane per bere birra". Altrimenti, deve stampare "Cheers! Buon divertimento al bar!".

#include <iostream>
#include <string>
using namespace std;

int main(){
    int myAge;
    cout << "Inserisci la tua eta"<< endl;
    cin >> myAge;
    if (myAge < 18){
        cout << "Mi dispiace sei troppo giovane per bere birra."<< endl;
    } else{
        cout << "Cheers! Buon divertimento al bar!"<< endl;
    }
}