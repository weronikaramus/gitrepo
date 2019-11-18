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
    while (a != b){
        i++;
        if(a>b) a = a - b;
        else b = b - a;
    }
    cout << "NWD:" << a << endl;
    cout << "Powtórzenia:" << i;
	return 0;
}

