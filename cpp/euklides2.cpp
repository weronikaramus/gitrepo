#include <iostream>

using namespace std;

int NWD_re1(int a, int b) {
    if (a!=0)
        return NWD_re1(a%b, b-a);
    else
    return b;
}

// NWD(a, b) = a dla b = 0
// NWD(a, b) = {a = b, b = a % b}
// NWD(a, b) = NWD(b, a % b)

int NWD_re2(int a, int b) {
    if (b !=0)
        return NWD_re2(b, a%b);
    else
    return a;
}

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
    cout << "Ilość powtórzeń: " << i << endl;
    cout << NWD_re1(a, b) << endl;
    cout << NWD_re2(a, b);
	return 0;
}

