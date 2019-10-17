#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 5;
	int tablica[rozmiar];
    int i = 0;
    cout << "Podaj maksymalnie 20 liczb: " << endl;

    for (i=0+1; i<=rozmiar; i++){
        cin >> tablica[i];
    }
    //for (i=0; i<rozmiar; i++){
    //    cout << tablica[i] << " ";
    //}
    for (i = 0+rozmiar; i>0; i--){
        cout << tablica[i] << " ";
}
	return 0;
}

