#include <iostream>
using namespace std;
/*
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
*/

int litery_male(char t[]){
    int i = 0;
    while (t[i] != '\0'){
        if((int)t[i] > 64 && (int)t[i]< 91){
            t[i] = (char)((int)t[i]+32);
        }
        i++;
    }
    cout << t[i];
    return t[i];
} 
 
void szyfruj(char t[], int k){
    int i = 0;
    int kod = 0;
    while (t[i] != '\0'){
        kod = (int)t[i] + k;
        if (kod > 122){
            kod -= 26;
        }
        t[i] = (char)kod;
        i++;
    }
}

void deszyfruj(char t[], int k){
    int i = 0;
    int kod = 0;
    while (t[i] != '\0'){
        kod = (int)t[i] - k;
        if (kod < 97){
            kod += 26;
        }
        t[i] = (char)kod;
        i++;
    }
    
}

int main(int argc, char **argv)
{
    int r = 20;
	char t[r];
    cout << "Podaj tekst: " << endl;
    cin.getline(t, r);
    litery_male(t);
    int klucz = 0;
    cout << "Klucz: ";
    cin >> klucz;
    klucz = klucz % 26;
    szyfruj(t, klucz);
    cout << t << endl;
    deszyfruj(t, klucz);
    cout << t;
	return 0;
}
