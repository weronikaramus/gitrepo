#include <iostream>
#include <iomanip>

using namespace std;

#define N   5
#define M   7

int main(int argc, char **argv)
{
    int i, j;
	int r = 0;
    int a = 0;
	int tab1[N][M];
    cout << "Podaj liczbę, o którą mam powiększać: ";
    cin >> r;
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    for(i=0; i < N; i++){
        // cout << "*** Tablica " << i << " ***" << endl;
        for(j=0; j < M; j++){
            // cout << i << "-" << j << endl;
           tab1[i][j] = a+(i+1)*(j+1)*r;
            cout << setw(4) << tab1[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}

