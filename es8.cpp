/*
L’utente inserisce un anno ed il programma verifica se l’anno inserito è bisestile
Un anno è bisestile se è divisibile per 4, ma non divisibile per 100, oppure se è divisibile per 400.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Solution one
int main()
{
    int anno;
    int divisibilePer4;
    int divisibilePer100;

    cout << "Inserisci un anno " << endl;
    cin >> anno;

    divisibilePer4 = anno % 4;
    divisibilePer100 = anno % 100;

    if (divisibilePer4 == 0)
    {

        if (divisibilePer100 == 0)
        {
            cout << "anno non bisestile" << endl;
        }
        else
        {
            cout << "anno bisestile" << endl;
        }
    }
    else
        cout << "anno non bisestile" << endl;
    return 0;
}

/* Solution two
int main()
{
    int anno;
    int divisibilePer4 = anno % 4;
    int divisibilePer100 = anno % 100;
    int divisibilePer400 = anno % 400;

    cout << "Inserisci un anno " << endl;
    cin >> anno;

    if (divisibilePer4 == 0 && divisibilePer400 == 0)
    {
        cout << "anno bisestile" << endl;
    }
    else if()
    {
        cout << "anno non bisestile" << endl;
    }

    return 0;
}
*/