#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float a, b;
    char wybor;
    cout << "Wybierz działanie: ";
    cin >> wybor;
    cout << "Podaj 1 liczbę: ";
    cin >> a;
    cout << "Podaj 2 liczbę: ";
    cin >> b;
    switch (wybor) {
        case '+':
            cout << "Suma: " << a+b;
            break;
        case '-':
            cout << "Różnica: " << a-b;
            break;
        case '/':
            if (b!=0) {
            cout << "Iloraz: " << a/b;
            }
            else cout << "Błąd dzielenia przez zero! ";
            break;
        case '*':
            cout << "Iloczyn: " << a*b;
            break;
        case '^':
            cout << "Potęga: " << a*b;
            break;

    }
    return 0;
}
