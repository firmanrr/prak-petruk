#include <iostream>
using namespace std;

int main(){
    int baris;
    cout << "masukan baris: "; cin >> baris;   
    for(int i = 5;i >= 6 - baris;i--){
        for(int j = i;j >= 1;j--){
            cout << "*";
        }
        cout << endl;
        if(i == 1) break;
    }
    baris = baris - 5;
    for(int i = 1;i <= baris;i++){
        for(int j = 1;j <= i;j++){
            cout << "*";
        }
        cout << endl;
        if(i == 6) break;
    }
    system("pause");
}
