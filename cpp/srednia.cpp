#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
    // pobieranie rozmiaru
    int rozmiar = 0;
    cout << "Podaj ilość ocen: ";
    cin >> rozmiar;
    
    // pobieranie ocen
    int oceny[rozmiar];
    float suma = 0;
    float srednia = 0;
    for(int i=0; i<rozmiar; i++){
        cout << endl << "Podaj ocenę: ";
        cin >> oceny[i];
        suma += oceny[i];
    }
    
    int i;
    for (i=0; i<rozmiar; i++){
      cout << oceny[i] << " ";
    }
    cout << endl;
    for (i = rozmiar -1; i>-1; i--){
        cout << oceny[i] << " ";
    }
    
    srednia = suma / rozmiar;
    cout << endl << "Średnia ocen: " << srednia;
    
	return 0;
}

