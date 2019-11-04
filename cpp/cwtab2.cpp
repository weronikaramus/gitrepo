#include <iostream>
#include <cstring>

using namespace std;
 
 
int main()
{
 
    char napis[5]="pora";

    int i1,i2,i3,i4;
    for(i1=0; i1<4; i1++){
        for(i2=0; i2<4; i2++){
            if (i1==i2){
            for (i3=0; i3<4; i3++){
                if(i3==i1 || i3==i2){
                    i4=6-i1=i2=i3;
                cout << napis[i1] << napis[i2] << napis [i3] << napis[i4] << endl;
                }
        }

    }
}
}
    return 0;
}
