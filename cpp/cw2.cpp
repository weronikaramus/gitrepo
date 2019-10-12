#include <iostream>

using namespace std;

int oceny[20]; float suma=0, srednia;


int main(int argc, char **argv)
{
    for(int i=0; i<20; i++){
        cout << endl << "Podaj ocenę: ";
        cin >> oceny[i];
        suma += oceny[i];
         
    }
    // cout << suma << endl;
    srednia = suma / 20;
    cout << srednia << endl;
    
        
    return 0;
}

