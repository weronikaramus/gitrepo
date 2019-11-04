#include <iostream>
#include <cstring>

using namespace std;

#define ROZMIAR 100

int main(int argc, char **argv)
{
    char tekst[ROZMIAR]; //deklaracja tabeli
    cout << "Podaj tekst: " << endl; 
    cin.getline(tekst, ROZMIAR);
    int r = strlen(tekst);
    for(int i=0; i<r; i++){
            if(int(tekst[i]) >= 65 && int(tekst[i]) <= 90){
                tekst[i] += 32;} 
                else if(int(tekst[i]) >= 97 && int(tekst[i]) <= 122){
                    tekst[i] = tekst[i] - 32;
                    }}
    
    for(int i = 0; i < r; i++){
        cout << char(tekst[i]);
        }
                    
    
    
    
    

	return 0;
}
