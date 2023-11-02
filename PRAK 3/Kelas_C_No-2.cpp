#include <iostream>
using namespace std;

int main(){

    int baris;
    int k,j;
    cout << "Masukan Baris "; cin >> baris;
    int i = 1;
    while(i <= baris){
        if(i <= 5){
            j = i;
            ulang_1 :
                cout << "* ";
                j++;
            if(j <= 5)goto ulang_1;
        }
        if(i >= 6){
            int k = 1;
            ulang_2 : 
                cout << "* ";
                k++;
            if(k <= i - 5) goto ulang_2;
        }
        cout << endl;
        i++;
    } 
}

