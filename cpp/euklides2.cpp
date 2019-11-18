#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a, b, i;
    a = b = i = 0;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    while (a > 0){
        i++;
        a = a % b;
        b = b - a;
    }
    cout << "NWD: " << b << endl;
    cout << "Ilość powtórzeń: " << i;
	return 0;
}

