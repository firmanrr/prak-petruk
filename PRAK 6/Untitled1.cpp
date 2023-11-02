#include <iostream>
using namespace std;

void menu();
void inputBaris(int &baris, int &kolom);
void inputNilai(int &baris, int &kolom);
void lihatData(int &baris, int &kolom);

int nilai[50][50];

int main(){

    string username, password, pilih, ulang;
    int baris, kolom,isi;
    int s=2;
    bool kembali = true;

    do {
        cout <<">>>> LOGIN <<<<"<<endl;
        cout << "Masukkan Username : "; cin >> username;
        cout << "Masukkan Password : "; cin >> password;

        if (s == 0) {
            return 0;
        }

        if (username == "firman" && password == "123") {
            goto x;
        }
        else {
            cout << "Username atau Password salah" << endl;
            cout << "Sisa Percobaan : " << s << endl;
            s--;
        }

    } while (s >= 0);
x:  
    do{
        cout<<endl;
        menu();
        cout << "Pilih (1-4) : "; cin >> pilih;
        
        if(pilih == "1"){

            inputBaris(baris,kolom);

        }else if(pilih == "2"){
            
            for(int i=0; i< baris; i++){
                for(int k=0;k<kolom;k++){
                    a:
                        cout <<"Masukkan Nilai Indeks Ke- ["<<i<<"]["<<k<<"] ";cin >>nilai[i][k];
                        cout <<endl;
                        
                        isi = nilai[i][k];
                        for(int l=0;l<baris;l++){
                            for(int n=0;n<kolom;n++){
                                
                                if(i == l && k == n){
                                    continue;
                                }else{
                                    if(isi == nilai[l][n]){
                                        goto a;
                                    }
                                }
                            }
                        }
                }
            }

            

        }else if(pilih == "3"){

            lihatData(baris,kolom);

        }else if(pilih == "4"){

            kembali = false;
        }
        else{
            cout << "Inputan Tidak Ada" << endl;
        }

        system("pause");
        
        }while(kembali == true);

    }

void menu(){

    cout << ">>>> MENU <<<<" << endl;
    cout << "1. Masukkan Baris & Kolom " << endl;
    cout << "2. Masukkan Nilai " << endl;
    cout << "3. Lihat Data " << endl;
    cout << "4. Exit " << endl;

}

void inputBaris(int &baris, int &kolom){

    cout << "Masukkan Baris : "; cin >> baris;
    cout << "Masukkan Kolom : "; cin >> kolom;

}

void lihatData(int &baris, int &kolom){

    for(int i = 0; i < baris; i++){
        for(int k = 0; k < kolom; k++){
            cout << "\t[" << nilai[i][k] << "]";
        }
        cout <<endl;
    }
}
