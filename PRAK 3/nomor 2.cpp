#include <iostream>
using namespace std;

void segitiga(int baris){
    int k,j;
    int i = 1;
    while(i <= baris){
        if(i <= 5){
            j = i;
            satu :
                cout << "* ";
                j++;
            if(j <= 5)goto satu;
        }
        if(i >= 6){
            int k = 1;
            dua :
                cout << "* ";
                k++;
            if(k <= i - 5) goto dua;
        }
        cout << endl;
        i++;
    }
}

int main(){
    int x;
    cout << "masukan baris: "; cin >> x;
    while(x > 10){
        segitiga(10);
        x = x - 10;
    }
    segitiga(x);
}
