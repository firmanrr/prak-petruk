#include <iostream>
using namespace std;
string username = "firman";
string password = "123";
void login(int kesempatan);
bool berhasil = false;
void gantipass();
void menu();

void daftardata();
void inputdata(int g);
void lihatdata();
void ubahdata();
void hapusdata();
void lihatuser();

string nama[99];
string nisn[99];
string sekolah[99];
string alamat[99];
int umur[99];
string provinsi[99];
string daerah[99];
int keluar = 0;
int x = -1;
int main(){
    cout << ">>>>> Program  <<<<<" << endl;
    while(berhasil == false) login(3);
    while(keluar == 0){
        cout << keluar << endl;
        menu();
        system("cls");
    }
    system("pause");
}


void login(int kesempatan){
    string a,b;
    while(true){    
        cout << ">> Login <<" << endl;
        cout << "username  : "; cin >> a;
        cout << "password  : "; cin >> b;
        if(a == username and b == password){
            cout << "Login Berhasil" << endl;
            berhasil = true;
            break;
        }
        else if(a == username and b != password){
            cout << "Password Salah" << endl;
        }
        else if(a != username and b == password){
            cout << "Username Salah" << endl;
        }
        else{
            cout << "Username dan Password Salah" << endl;
        }
        kesempatan--;
        cout << "Kesempatan login sisa : "<< kesempatan << endl;
        if(kesempatan == 0){
            cout << "Kesempatan Habis Kamu Harus ganti password" << endl;
            gantipass();
        }
        cout << endl;
    }
}

void gantipass(){
    cout << "Ganti Password" << endl;
    cout << "Input Password Baru : "; cin >> password;
}

void menu(){
    while(true){
        int pilihan;
        cout << "Program Data Siswa" << endl;
        cout << ">>> Menu <<<" << endl;
        cout << "1. input data" << endl;
        cout << "2. lihat data" << endl;
        cout << "3. ubah data" << endl;
        cout << "4. Hapus data" << endl;
        cout << "5. Lihat User" << endl;
        cout << "6. Keluar" << endl;
        cout << "[1-6] : "; cin >> pilihan; 
        if(pilihan == 1)daftardata();
        if(pilihan == 2)lihatdata();
        if(pilihan == 3)ubahdata();
        if(pilihan == 4)hapusdata();
        if(pilihan == 5)lihatuser();
        if(pilihan == 6){
            keluar = 1;
            break;
        }
    }
}


void daftardata(){
    x++;
    inputdata(x);
    
}
void inputdata(int g){
    int pildaerah;
    int pilprovinsi;
    cin.ignore();
    cout << "Data Ke " << g + 1 << endl;
    cout << "Nama Siswa : "; getline(cin, nama[g]);
    cout << "NISN       : "; getline(cin, nisn[g]);
    cout << "Sekolah    : "; getline(cin, sekolah[g]);
    cout << "Alamat     : "; getline(cin, alamat[g]);
    cout << "Umur       : "; cin >> umur[g];

    cout << ">>> Provinsi <<<" << endl;
    cout << "1. Sulawesi Selatan " << endl;
    cout << "2. Sulawesi Utara " << endl;
    cout << "3. Sulawesi Barat" << endl;
    cout << "4. Sulawesi Tenggara " << endl;
    cout << "5. Sulawesi Timur " << endl;

    cout << "[Provinsi  : "; cin >> pilprovinsi;
    if(pilprovinsi == 1)provinsi[g] = "Sulawesi Selatan";
    if(pilprovinsi == 2)provinsi[g] = "Sulawesi Utara";
    if(pilprovinsi == 3)provinsi[g] = "Sulawesi Barat";
    if(pilprovinsi == 4)provinsi[g] = "Sulawesi Tenggara";
    if(pilprovinsi == 5)provinsi[g] = "Sulawesi Timur";

    cout << ">>> Daerah <<<" << endl;
    cout << "1. Bulumkumba " << endl;
    cout << "2. Parangloe  " << endl;
    cout << "3. Paccinogan " << endl;
    cout << "4. Antang     " << endl;
    cout << "5. Manggarupi " << endl;
    cout << "6. Bantaeng " << endl;
    cout << "7. Malino " << endl;
    cout << "Daerah     : "; cin >> pildaerah;

    if(pildaerah == 1) daerah[g] = "Bulumkumba";
    if(pildaerah == 2) daerah[g] = "Parangloe";
    if(pildaerah == 3) daerah[g] = "Paccinogan";
    if(pildaerah == 4) daerah[g] = "Antang";
    if(pildaerah == 5) daerah[g] = "Manggarupi";
    if(pildaerah == 6) daerah[g] = "Bantaeng";
    if(pildaerah == 7) daerah[g] = "Malino";
}

void lihatdata(){
    bool nissama = false;
    int a,b;
    string intput_nisn;
    cout << "[Input - NISN] ==> "; cin >> intput_nisn;
    for(int i = 0;i <= x;i++){
        if(intput_nisn == nisn[i]){
            a = i;
            break;
        }
    }

    //ceksama
    for(int i = 0; i <= x;i++){
        if(i == a)continue;
        if(nisn[a] == nisn[i]){
            b = i;
            nissama = true;
            break;
        }
    }
    if(nissama == true){
        cout << "Ada NISN yang kembar " << endl;
        cout << "Yaitu " << nama[a] << " dengan " << nama[b] << endl;
        goto keluar;
    }
        cout << "== Data Ke " << a + 1 << " ==" << endl; 
        cout << "Nama        : " << nama[a] << endl;
        cout << "NISN        : " << nisn[a] << endl;
        cout << "Sekolah     : " << sekolah[a] << endl;
        cout << "Alamat      : " << alamat[a] << endl;
        cout << "Umur        : " << umur[a] << endl;
        cout << "Provinsi    : " << provinsi[a] << endl;
        cout << "Daerah      : " << daerah[a] << endl;
        keluar :
        cout << endl;
}
void ubahdata(){
    cout << ">>> Ubah Data <<<" << endl;
    bool nissama = false;
    int a,b;
    string intput_nisn;
    cout << "[Input - NISN] : "; cin >> intput_nisn;
    for(int i = 0;i <= x;i++){
        if(intput_nisn == nisn[i]){
            a = i;
            break;
        }
    }
    inputdata(a);
}

void hapusdata(){
    cout << ">>> Hapus data <<<" << endl;
    int a,b;
    string intput_nisn;
    cout << "[Input - NISN] : "; cin >> intput_nisn;
    for(int i = 0;i <= x;i++){
        if(intput_nisn == nisn[i]){
            a = i;
            break;
        }
    }
    cout << "Data ke " << a + 1 << " (" << nama[a] << ") " << endl;
    for(int i = a;i < x;i++){
        nama[i] = nama[i + 1];
        nisn[i] = nisn[i + 1];
        sekolah[i] = sekolah[i + 1];
        alamat[i] = alamat[i + 1];
        umur[i] = umur[i + 1];
        provinsi[i] = provinsi[i + 1];
        daerah[i] = daerah[i + 1];
    }

}
void lihatuser(){
    cout << "Username anda adalah : " << username << endl;
}
