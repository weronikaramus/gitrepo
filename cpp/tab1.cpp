#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int r = 5;
	int tab1[r], tab2[r];
    int i = 0;
    int suma1=0, suma2=0;
    cout << "Podaj 5 liczb: " << endl;
    for (i=0+1; i<=r; i++){
        cin >> tab1[i];
        suma1 += tab1[i];
    }
    cout << "Podaj kolejne 5 liczb: " << endl;
    for (i=0+1; i<=r; i++){
        cin >> tab2[i];
        suma2 += tab2[i];
    }
    if(suma1 > suma2) cout << "Tablica 1 ma większą wartość! ";
    else if(suma2 > suma1) cout << "Tablica 2 ma większą wartość! ";
    else cout << "Tablice są równe! ";
	return 0;
}

