#include <iostream>

void pobierzOceny(int t[], int r){
    cout << "Podaj ilość" << r <<" ocen: " << endl;
    int i;
    for (i=0; i < r; i++){
        cin >> t[i];
    };
}

void drukujTab(int t[], int r){
    int i;
    for (i=0; i < r; i++){
        cout << t[i];
    };
}

void srednia(){
    
    srednia = suma / rozmiar;
    
}

int main(int argc, char **argv)
{
	int tablica[rozmiar];
	cout << srednia << endl;
	return 0;
}

