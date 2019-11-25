/*
 * fibonacci.cpp
 */


#include <iostream>
using namespace std;

int fibonacci_it(int n) {
    int a = 0; // Fn-1
    int b = 1; // Fn-2
    int wynik = 0;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i=2; i<n; i++) {
        wynik = a + b; //1//2//3
        b = a; //1//1//2
        a = wynik; //1//2//3
    }
    return wynik;
}

int main(int argc, char **argv)
{
    cout << fibonacci_it(0) << endl;
    cout << fibonacci_it(1) << endl;
    
    for (int i=2; i < 20; i++) {
        cout << i << ": fib(" << fibonacci_it (i-2)
             << ", " << fibonacci_it (i-1) << ") = "
             << fibonacci_it (i) << "\t" 
             << float(fibonacci_it(i)) / float(fibonacci_it(i-1)) << endl;
    }
    return 0;
}

