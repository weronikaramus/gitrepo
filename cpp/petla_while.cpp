/*
 * petla_while.cpp
 * 
 * Copyright 2019  <>
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 0; // Deklaracja i inicjacja = definicja
	while(i <= 20) {
        cout << i << endl;
        cout << "Hello!";
        i += 2;
    }
    
    cout << endl << "Watrość i: " << i << endl;
	return 0;
}

