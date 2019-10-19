#include <iostream>

using namespace std;




int main()
{
    int rozmiar = 2;
    int oceny[rozmiar];
    float suma = 0;
    float srednia = 0;
    for(int i=0; i<rozmiar; i++){
        cout << endl << "Podaj ocenę: ";
        cin >> oceny[i];
        suma += oceny[i];
         
    }
    // cout << suma << endl;
    
    srednia = suma / rozmiar;
    cout << "Średnia ocen: " << srednia << endl;
    
        
    return 0;
}

