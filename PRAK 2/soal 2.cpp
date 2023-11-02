#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string username = "firman", password = "123";
bool gagal = false;

void login();
void menu();
void output();
void data();
    string namaresto;
    string namakasir;
    string pesanan;
    string masakan;
    int harga;
	int uang;
	
void kategori();
int main(){
    cout << "================"<< endl;
    cout << " RESTORAN TACAZ " << endl;
    cout << "================"<< endl;
    login();
    if(gagal == true){
        cout << "Kamu akan keluar" << endl;
        system("pause");
        return 0;
    }
    data();
    menu();
    output();
    system("pause");
}

void login(){
    string input_username;
    string input_pasword;
    int kesempatan = 3;
    while(kesempatan != 0){
        
        cout << "Silahkan Login";
        cout << endl;
        cout << "Masukan Username : ";cin >> input_username;
        char ch;
        cout << "Masukan Password : ";ch = _getch();
        
        while(ch != 13){
            input_pasword.push_back(ch);
            ch = _getch();
            cout << '*';
        }
        cout << endl;
        if(input_username == username and input_pasword == password){
            cout << "Login Berhasil" << endl;
            break;
        }
        else if(input_username == username and input_pasword != password){
            cout << "Password Salah" << endl;
        }
        else if(input_username != username and input_pasword == password){
            cout << "Username Salah" << endl;
        }
        else{
            cout << "Username dan Password salah" << endl;
        }
        kesempatan--;
        cout << "Percobaan Tersisa : " << kesempatan << endl;

        if(kesempatan == 0){
            cout << "Percobaan anda habis" << endl;
            gagal = true;
        }
    }
}

void menu(){
    int pilihan;
    int b;
    cout << "MENU Pilihan" << endl;
    cout << "<1> Seafood" << endl;    
    cout << "<2> Ayam" << endl;    
    cout << "<3> Steak" << endl;
    cout << "Masukan Pilihan : "; cin >> pilihan;   
    switch (pilihan){
    case 1:
        masakan = "Seafood";
            cout << "1. Cumi Goreng (Rp 50.000)" << endl;
            cout << "2. Udang Goreng (Rp 40.000)" << endl;
            cout << "3. Gurame Bakar (Rp 80.000)" << endl;
            cout << "Masukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = 50000;
                pesanan = "Cumi Goreng";
            }
            else if(b == 2){
                harga =  40000;
                pesanan = "Udang Goreng";
            }else if(b == 3){
                harga = 80000;
                pesanan = "Gurame Bakar";
            }
            break;
    case 2:
        masakan = "AYAM";
            cout << "1. Ayam Goreng (Rp 25.000)" << endl;
            cout << "2. Ayam Bakar (Rp 30.000)" << endl;
            cout << "3. Ayam Kecap (Rp 35.000)" << endl;
            cout << "Masukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = 25000;
                pesanan = "Ayam Goreng";
            }
            else if(b == 2){
                harga = 30000;
                pesanan = "Ayam Bakar";
            }else if(b == 3){
                harga = 35000;
                pesanan = "Ayam Kecap";
            }
            break;
    case 3:
        masakan = "Steak";
            cout << "1. Beef Steak (Rp 60.000)" << endl;
            cout << "2. Chicken Steak (Rp 50.000)" << endl;
            cout << "3. Chicken Steak Mona (Rp 55.000)" << endl;
            cout << "Maasukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = 60000;
                pesanan = "Beef Steak";
            }
            else if(b == 2){
                harga = 50000;
                pesanan = "Chicken Steak";
            }else if(b == 3){
                harga = 55000;
                pesanan = "Chicken Steak Mona";
            }     
        break;
    default:
        cout << "Pilihan hanya 3" << endl;
        break;
    }
    
    cout <<"masukan uang : "; cin >> uang;
    uang = uang-harga;
}

void data(){
    cout << "Nama Restoran 	:"; cin >> namaresto ;
    cout << "Nama Kasir		:"; cin >> namakasir;

}

void output(){
    system("cls");
    cout << "Daftar Pilihan" << endl;
    cout << "Nama Restoran : " << namaresto << endl;
    cout << "Nama Kasir    : " << namakasir << endl;
    cout << "Kategori      : " << masakan << endl;
    cout << "Makanan       : " << pesanan << endl;
    cout << "Harga         : " << harga << endl;
    cout << "Kembalian     : " << uang <<endl;
    
}



