#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string username = "", password = "";
bool gagal = false;

void login();
void menuu();
void tampilkan();
void data();
    string namaresto = "MANTAP";
    string namakasir;
    string hp;
    string daftar;
    string harga;

void kategori();
int main(){
    
    cout << "RESTORAN MANTAP" << endl;
    login();
    if(gagal == true){
        cout << "Kamu akan keluar" << endl;
        system("pause");
        return 0;
    }
    data();
    menu();
    tampilkan();
    system("pause");
}
void login(){
    string input_user;
    string input_pass;
    int kesempatan = 3;
    while(kesempatan != 0){
        
        cout << "Selamat Datang" << endl;
        cout << "Silahkan Login";
        cout << endl;
        cout << "Masukan Username : ";cin >> input_user;
    
        char ch;
        cout << "Masukan Password : ";ch = _getch();
        
        while(ch != 13){
            input_pass.push_back(ch);
            ch = _getch();
            cout << '*';
        }
        cout << endl;
        if(input_user == username and input_pass == password){
            cout << "Login Berhasil" << endl;
            break;
        }
        else if(input_user == username and input_pass != password){
            cout << "Password Salah" << endl;
        }
        else if(input_user != username and input_pass == password){
            cout << "Username Salah" << endl;
        }
        else{
            cout << "Username dan password salah" << endl;
        }
        kesempatan--;
        cout << "Percobaan tinggal : " << kesempatan << endl;

        if(kesempatan == 0){
            cout << "Percobaan Login Gagal" << endl;
            gagal = true;
        }
    }
}


void menuu(){
    int pilihan;
    int b;
    cout << "MENU Pilihan" << endl;
    cout << "<1> Seafood" << endl;    
    cout << "<2> Ayam" << endl;    
    cout << "<3> Steak" << endl;
    cout << "Masukan Pilihan : "; cin >> pilihan;   
    switch (pilihan){
    case 1:
        daftar = "Seafood";
            cout << "1. Cumi Goreng (Rp 50.000)" << endl;
            cout << "2. Udang Goreng (Rp 40.000)" << endl;
            cout << "3. Gurame Bakar (Rp 80.000)" << endl;
            cout << "Masukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = "Rp 50.000";
                menu = "Cumi Goreng";
            }
            else if(b == 2){
                harga = "Rp 40.000";
                menu = "Udang Goreng";
            }else if(b == 3){
                harga = "Rp 80.000";
                menu = "Gurame Bakar";
            }
            break;
    case 2:
        daftar = "AYAM";
            cout << "1. Ayam Goreng (Rp 25.000)" << endl;
            cout << "2. Ayam Bakar (Rp 30.000)" << endl;
            cout << "3. Ayam Kecap (Rp 35.000)" << endl;
            cout << "Masukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = "Rp 25.000";
                menu = "Ayam Goreng";
            }
            else if(b == 2){
                harga = "Rp 30.000";
                menu = "Ayam Bakar";
            }else if(b == 3){
                harga = "Rp 35.000";
                menu = "Ayam Kecap";
            }
            break;
    case 3:
        daftar = "Steak";
            cout << "1. Beef Steak (Rp 60.000)" << endl;
            cout << "2. Chicken Steak (Rp 50.000)" << endl;
            cout << "3. Chicken Steak Mona (Rp 55.000)" << endl;
            cout << "Maasukan Pilihan : "; cin >> b;   
            if(b == 1){
                harga = "Rp 60.000";
                menu = "Beef Steak";
            }
            else if(b == 2){
                harga = "Rp 50.000";
                menu = "Chicken Steak";
            }else if(b == 3){
                harga = "Rp 55.000";
                menu = "Chicken Steak Mona";
            }     
        break;

    default:
        cout << "Menu hanya 3" << endl;
        break;
    }
}

void data(){
    cout << "Nama Restoran :"; cin >> namaresto ;
    cout << "Nama Kasir :"; cin >> namakasir;
}

void tampilkan(){
    system("cls");
    cout << "Daftar Pilihan" << endl;
    cout << "Nama Restoran  : " << namaresto << endl;
    cout << "Nama Kasir : " << namakasir << endl;
    cout << "Kategori   : " << daftar << endl;
    cout << "Menu   : " << menu << endl;
    cout << "Harga      :  " << harga << endl;
}

