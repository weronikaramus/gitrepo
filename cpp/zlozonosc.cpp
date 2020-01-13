#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
    int n = 5;
	int i = 0;
    int x = 7;
    int tb[n] = {1, 3, 90, 1000, 9};
    
    for(i = 0; i < n; i++){
        if (tb[i] == x){
            cout << i;
            return 0;
        }
    }
    
        
    
	return 0;
}

