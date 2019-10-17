#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int rozmiar = 2;
	int tablica[rozmiar];
    int i = 0;
    cout << "Podaj maksymalnie 20 liczb: " << endl;
    if (tablica[i]<=6){
    for (i=0+1; i<=rozmiar; i++){
        cin >> tablica[i];
    }
    //for (i=0; i<rozmiar; i++){
    //    cout << tablica[i] << " ";
    //}
    for (i = rozmiar -1; i>-1; i--){
        cout << tablica[i] << " ";
}
}
	return 0;
}


