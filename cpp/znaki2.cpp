// /0 - znak kończący
#include <iostream>

using namespace std;

void ascii(){
    int i = 0;
    for(i = 0; i < 127; i++){
        cout << i << " - " << char(i) << endl;
    }
    
}

void litery2liczby(char tabzn[], int rozmiar) {
    for(int i = 0; i < rozmiar; i++){
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;
    }
}

void koduj(char tabzn[], int rozmiar){
    for(int i = 0; i < rozmiar; i++){
        cout << (int)tabzn[i]<< ", ";
    }
}

void dekoduj(char tabzn[], int rozmiar){
    for(int i = rozmiar; i > 0; i--){
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;
    }
}

int main(int argc, char **argv)
{
    int rozmiar = 20;
    char napis[rozmiar] = "teść";
    cout << "Wpisz wiadomość: ";
    cin >> napis;
    // int szyfr[11] = {65, 66, 90};
    koduj(napis, rozmiar);
    // dekoduj(szyfr, rozmiar);
    
    
    
    
	return 0;
}

