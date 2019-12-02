#include <iostream>

using namespace std;

int nominaly[100];
int liczbaNominalow;


void wczytajNominaly() {
    cout << "Podaj liczbę nominałów: ";
    cin >> liczbaNominalow;
    
    cout << "Podaj nominały w kolejności malejącej: " << endl;
    int i = 0;
    int nominal = 0;
    cin >> nominal;
    nominaly[i] = nominal;
    i++;
    
    while (i < liczbaNominalow) {
        cin >> nominal;
        if (nominal > nominaly[i-1]){
            cout << "Nominał większy od poprzedniego!" << endl;
            continue;
        }
        nominaly[i] = nominal;
        i++;
        
    }
    for(int i = 0; i < liczbaNominalow; i++) {
        cout << nominaly[i] << " ";
    }
    cout << endl;
}

int policzNominal(int n) {
    int ile = 0;
    
    for (int i = 1; i < liczbaNominalow; i++){
        if (n > nominaly[i]) break;
        if (nominaly[i] == n)
        ile++;
        
        
    }
    
    return ile;
    
}


void znajdzReszte(int reszta) {
    cout << "Wypłacone nominały: " << endl;
    int aktualnyNominal = 0;
    
    while (reszta > 0 && aktualnyNominal < liczbaNominalow){
        cout << "reszta = " << reszta << endl;
        // znajdź największy dostępny nominał mniejszy odd reszty
        
        while(aktualnyNominal < liczbaNominalow && reszta < nominaly[aktualnyNominal])
            ++aktualnyNominal;
            
        int nominal = nominaly[aktualnyNominal];
        
        cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
        // oblicz wymaganą ilość nominałów
        // pomniejsz resztę
        
        if (aktualnyNominal < liczbaNominalow && reszta >= nominal){
            int liczbaBanknotow = reszta /nominaly[aktualnyNominal];
            cout << "Dostępnych nominałów: " << policzNominal(nominal) << endl;
            reszta = reszta - liczbaBanknotow * nominal;
            cout << liczbaBanknotow << "x" << nominal << "zł" << endl;
            
        }
        
    }
    if (reszta > 0)
        cout << "Brak nominałółw do wydania kwoty: " << reszta << endl;
}

int main(int argc, char **argv)
{

	wczytajNominaly();
    int cena;
    int wplata;
    cout << "Podaj cenę: ";
    cin >> cena;
    
    do {
        cout << "Podaj wpłatę: ";
        cin >> wplata;
    } while (wplata < cena);
    
    znajdzReszte(wplata - cena);
    
	return 0;
}
/*
R = 69
1) R = 60 - 50 * (69 % 50) = 19
2) R = 19 - 10 *(19 % 10) = 9
3) R = 9 - 5 * (9 % 5) = 4
4) R = 4 - 2 * (4 % 2) = 0
*/
