/*
 * petle_ramus.cpp
 */


#include <iostream>
#include <iomanip>

using namespace std;

void tabliczka(int a, int b) {
    int i, j;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= b; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

void prostokat(int a, int b) {
    int i, j;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= b; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

void prostokat2(int a, int b, char c) {
    int i, j;
    for (i = 1; i <= a; i ++) {
        for (j = 1; j <= b; j++) {
            if (i == 1 || i == a)
                cout << c;
                    else if(j ==1 || j == b)
                        cout << c;
                    else
                        cout << " ";

                }
                cout << endl;
    }
}

void choinka(int a){
    cout << "Podaj a: ";
    cin >> a;
    cout << endl;
  int i,j;
  for (i = 1; i<=a; i++)
    {
      for (j=1;j<=i;j++){
        cout << "*";}
      cout << endl;
} }

int main(int argc, char **argv)
{
    int a, b;
    char znak;
    cout << "Podaj rozmiar a, b: ";
    cin >> a >> b;
    cout << "Podaj znak: ";
    cin >> znak;
    cout << endl;
    prostokat2(a, b, znak);
    cout << endl;
    
    choinka(1);
    cout << endl;

    return 0;
}


