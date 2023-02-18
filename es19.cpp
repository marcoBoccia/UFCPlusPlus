// bool ciSonoDoppie (string parola);

#include <iostream>
#include <string>
using namespace std;

/* solution 1
int main()
{
    string word;
    cout << "Insert a word " << word << endl;
    cin >> word;

    bool doppie = false;
    for (int i = 0; i < word.length() -1; i++)
    {
        if (word[i] == word[i + 1])
        {
            doppie = true;
            break;
        }
    }
    if (doppie)
    {
        cout << "Sono presenti doppie in word" << endl;
    }
    else
    {
        cout << " Non sono presenti doppie in word" << endl;
    }
    return 0;
}
*/

// solution 2
bool ciSonoDoppie(string parola)
{
    for (int i = 1; i < parola.length(); i++)
    {
        if (parola[i] == parola[i - 1])
        {
            return true;
        }
        return false;
    }
}

int main()
{
    ciSonoDoppie("Sopratutto");
    return 0;
}
