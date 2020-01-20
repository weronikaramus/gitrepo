#include <iostream>

using namespace std;

void dzielniki(int p){
    for (int i=1; i<=p; i++){
        if(p%i==0) cout << i << " ";
    }
}

void wypelnij(int tab[], int n) {
	srand(time(NULL));
	for (int i=0; i<n; i++) {
		tab[i] = rand() % n;
	}
}

void wyswietl(int tab[], int n) {
	for (int i=0; i<n; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}


void zamien(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int tab[], int n){
    for (int i = n-1; i > 0; i--){
        cout << "Indeks i=" << i << endl;
        for (int j=0; j<i; j++){
            cout << "Indeks j=" << j << " ";
            if (tab[j] > tab[j+1]){
                zamien(tab[j], tab[j+1]);
            }
        }
    }
}


int main(int argc, char **argv)
{
	int p;
    cin >> p;
    dzielniki(p);
    
    int tab[50];
    int tab2[50];
    int n = dzielniki(p);
    wypelnij(tab, n);
	wyswietl(tab2, n);
    bubble_sort(tab2, n);
	wyswietl(tab, n);
    
	return 0;
}

