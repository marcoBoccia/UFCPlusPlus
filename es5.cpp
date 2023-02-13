// Inseriti tre numeri A, B e C dire se B è compreso tra A e C.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    /* 
    int max;
    int min;
    int med;
    */


    cout << "Inserisci il primo numero"<< endl;
    cin >> a;

    cout << "Inserisci il secondo numero"<< endl;
    cin >> b;

    cout << "Inserisci il terzo numero"<< endl;
    cin >> c;

    /* 
    if(a > b){
    //     max = a;
    //     min = b;
    // }else
    // {
    //     max = b;
    //     min = a;
    // }
    // if(c > max){
    //     med = max;
    //     max = c;
    // }else if(c < min){
    //     med = min;
    //     min = c;
    // }else
    // {
    //     med = c;
   }
    */ 
   
    if (a< b && b<c)
    {
        cout << "B è compreso tra a e c"<<endl;    
    }else
    {
        cout << "B non è compreso tra a e c"<<endl;  
    }       
}