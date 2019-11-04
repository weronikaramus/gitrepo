#include<iostream>

using namespace std;
 
int main()
{
    int a = 1;
    string tekst;
    cout << "Wprowadź tekst:" << endl;
    getline(cin,tekst);
 
    int l = tekst.length();
 
    if (l > 0){
 
        for (int i=0; i<l; i++){
            if (tekst[i] == ' ')
            a++;
        }
    }
    else a=0;
    cout << "Ilość wyrazów: " << a;
    return 0;
}

