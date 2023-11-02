#include <iostream>
using namespace std;

string username = "firman";
string email    = "firman@gmail.com";
string password = "123";
int saldo = 62; 
bool logot;

void autentikasi();
void gantipw();
void tambahsaldo();
void lihatsaldo();
void lihatsaldo();
void logout();
void menu();

int main(){
    logot = false;
    autentikasi();
    cout << endl;
    while(logot == false){
        menu();
        cout << endl;
        if(logot == true) break;
    }
    system("pause");
}
void autentikasi(){
    string a,b,c;
    cout << "Autentikasi Akun" << endl;
    while(true){
        cout << "Username :" ; cin >> a;
        cout << "Email    : " ; cin >> b;
        cout << "Password : " ; cin >> c;
        if(a == username and b == email and c == password){
            cout << "Login Berhasil" << endl;
            break;
        }
        else if(a == username and b == email and c != password){
            cout << "Password Salah" << endl;
        }
        else if(a == username and b != email and c != password){
            cout << "Password dan Email salah" << endl;
        }
        else if(a != username and b == email and c != password){
            cout << "Password dan Username salah" << endl;
        }
        else if(a == username and b != email and c == password){
            cout << "Email salah" << endl;
        }
        else if(a == username and b != email and c != password){
            cout << "Email dan Password salah" << endl;
        }
        else if(a != username and b != email and c == password){
            cout << "Email dan Username salah" << endl;
        }
        else if(a == username and b == email and c == password){
            cout << "Username salah" << endl;
        }
        else if(a == username and b == email and c == password){
            cout << "Username dan Password salah" << endl;
        }
        else if(a != username and b != email and c == password){
            cout << "Username dan Email salah" << endl;
        }   
        else{
            cout << "Username, Email dan Password salah" << endl;
        }
    }
}
void gantipw(){
    string gantipw,a;
    cout << "Ganti Password" << endl;
    cout << "[Masukan Password Baru] : " ; cin >> password;
    cout << "Password Berhasil diperbaharui" << endl;
}
void tambahsaldo(){
    int nominal;
    cout << "Tambah Saldo" << endl;
    cout << "[Masukan Nominal] : " ; cin >> nominal;
    saldo += nominal;
    cout << "Berhasil Menambah Saldo" << endl;
}   

void lihatsaldo(){
    cout << "Cek Saldo" << endl;
    cout << "[Saldo] : Rp " << saldo <<  endl;
}

void logout(){
    string a;
    cout << "Apakah anda ingin Logout?" << endl;
    while(true){
        cout << "[Masukan Password] : "; cin >> a;
        if(a == password){
            cout << "Logout Berhasil" << endl;
            logot = true;
            break;
        }else{
            cout << "Password Salah" << endl;
        }
    }
}
void menu(){
    int menu;
    cout << "-- MENU --" << endl;
    cout << "1. Ganti Password\n2. Lihat Saldo\n3. Tambah Saldo\n4. Log Out" << endl << endl;
    cout << "[Masukan Pilihan 1-4] : ";
    cin >> menu; 
    switch(menu){
        case 1 :
            gantipw();
            break;
        case 2 :
            lihatsaldo();
            break;
        case 3 :
            tambahsaldo();
            break;
        case 4 :
            logout();
            break;            
    }
}
