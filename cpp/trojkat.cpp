/*
 * trojkat.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float bok1;
    cout << "Podaj pierwszy bok: ";
    cin >> bok1;
    float bok2;
    cout << "Podaj drugi bok: ";
    cin >> bok2;
    float bok3;
    cout << "Podaj trzeci bok: ";
    cin >> bok3;

    if (bok1 + bok2 > bok3) cout << "To jest trójkąt!";
        else if (bok1 + bok3 > bok2) cout << "To jest trójkąt!";
            else cout << "To nie jest trójkąt";

	return 0;
}

