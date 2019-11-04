#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int r=5;
    char tab[r];
    cout << "Podaj tekst: ";
    cin >> tab;
	for(int i = r; i >= 0; i--){
            cout << tab[i];
        }
	return 0;
}

