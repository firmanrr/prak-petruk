#include <iostream>
using namespace std;

int main(){

    int i,nilai,pilihan;
    
    cout << "Program Mencari Bilangan Ganjil Kelipatan 3 dan  Kelipatan 7" << endl;

    cout << "Pilih bilangan [1]Positif [2]Negatif : "; cin >> pilihan;
    cout << "Batas angka yang diinginkan : " ; cin >> nilai;

    for( i = -200;i <= nilai;i++){
        if(pilihan  == 1){
            if((i % 1 == 0 and i % 3 == 0 ) and (i > 0  and i % 7 == 0)){
                cout << " "<< i << endl;
            }
        }else{
                if((i % 1 == 0 and i % 3 == 0 ) and (i < 0  and i % 7 == 0)){
                cout << " "<< i << endl;
            }
        }
    }

    system("pause");
}
