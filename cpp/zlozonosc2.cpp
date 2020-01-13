#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n;
    cout << "Wprowadź liczbę: ";
    cin >> n;
    int silnia = 1;

    
    for (int i = 1; i <= n; i++){
        silnia = silnia * i;
    }
    cout << "Silnia z " << n << " = " << silnia;
	return 0;
}

