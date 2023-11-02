#include <iostream>
using namespace std;

void menu();
void inputBaris(int &baris, int &kolom);
void masukkanNilai(int &baris, int &kolom);
void lihatData(int &baris, int &kolom);

int nilai[100][100];

int main(){

    string username, password, pilih, ulang;
    int baris, kolom;

    cout << ">>>> LOGIN <<<<" << endl;
    cout << "Masukkan Username = "; cin >> username;
    cout << "Masukkan Password = "; cin >> password;

    if(username == "firman" && password == "123"){
       do{
        cout<<endl;
        menu();
        cout << "Pilih (1-4) : "; cin >> pilih;
        
        if(pilih == "1"){

            inputBaris(baris,kolom);

        }else if(pilih == "2"){

            masukkanNilai(baris,kolom);

        }else if(pilih == "3"){

            lihatData(baris,kolom);

        }else if(pilih == "4"){

            return 0;
        }
        else{
            cout << "Inputan Tidak Ada" << endl;
        }

		cout << "Kembali [Y/N] : "; cin >> ulang;
    	
		}while(ulang == "y" || ulang == "Y");

    }
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

void masukkanNilai(int &baris, int &kolom){

    for(int i = 0; i < baris; i++){
        for(int k = 0; k < kolom; k++){
            cout << "Masukkan Nilai Indeks Ke- [" << i << "][" << k << "] : "; cin >> nilai[i][k];
            cout << endl;
        }
    }
}

void lihatData(int &baris, int &kolom){

     for(int i = 0; i < baris; i++){
        for(int k = 0; k < kolom; k++){
            cout << "Nilai Indeks Ke- [" << i << "][" << k << "] : " << nilai[i][k];
            cout << endl; 
        }
    }

}
