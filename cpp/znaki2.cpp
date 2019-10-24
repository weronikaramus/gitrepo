#include <iostream>
using namespace std;

void koduj(char tabzn[],int rozmiar){
	cout << "Podaj tekst do zakodowania: ";
	cin >> tabzn;
	for (int i = 0; i< rozmiar; i++){
		cout << (int)tabzn[i]<<" ";
	}
}

void litery2liczby (char tabzn[], int rozmiar){
		for(int i =  0; i < rozmiar; i++){
		cout<< (int)tabzn[i] << endl;
    }
}

void dekoduj(int kod[], int rozmiar){
	cout << "Podaj kod: "<< endl;
	for(int i = 0; i < rozmiar; i++){
	cin >> kod[i];
    }
    cout<< "Twój kod to: "; 
        for (int i= 0; i < rozmiar; i++){
            cout<< (char)kod[i];
        }
}

 
int main(int argc, char **argv)
{
	int rozmiar = 5;
	char napis[rozmiar];
	int kod[rozmiar];
	koduj(napis, rozmiar);
	cout << endl;
	dekoduj(kod, rozmiar);
	return 0;
}
