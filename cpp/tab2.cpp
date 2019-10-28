#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
    int w=5, k=10;
	int tab[w][k];
    int i, j;
    int n; 
    srand(time(NULL));

    cout << "Podaj maksymalny zakres: ";
    cin >> n;
    srand (time(NULL));

    for(i=0; i < w; i++){
        for(j=0; j < w; j++){
            tab[i][j] = rand() % n+1;
            cout << setw(4) << tab[i][j] << " ";
        }
        cout << endl;
    }
        
	return 0;
}

