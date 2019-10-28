#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
	int tab[20];
    int i, j;
    int min = 0, max = 20, a=0;
    srand(time(NULL));
    
    for(j=1; j < 20; j++){
        // cout << i << "-" << j << endl;
        tab[i] = i;
        cout << setw(4) << tab[i] << " ";
    }
    cout << endl;
    cout << "Podaj wartość z zakresu 0-20: ";
    cin >> a;
    
	return 0;
}

