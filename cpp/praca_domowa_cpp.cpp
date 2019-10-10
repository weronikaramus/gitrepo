#include <iostream>

using namespace std;

int staz = 1; int zarobek = 1000; int lata;

void drukuj(){
      cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << "zł." << endl;  
}

void awans()
{
    for (staz=1; staz <= lata; staz += 1){

    zarobek = zarobek*1.1;
    cout << "Po " << staz << " lat pracy, Twoja pensja wyniesie " << zarobek << "zł." << endl;
    
    }
}


int main()
{
    
	cout << "Przewidywany okres pracy: ";
    cin >> lata;
    drukuj();
    awans();
	return 0;
}

