#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void login();
void menu();
void biodata(int& i);
void isiKrs(int& i);
void bayarUkt(int& i);
void lihatKrs(int& i);
void hapusKrs(int& i);
void faq();
void bersih();

string password;
string passbaru="123";
bool pengecekan(string& pass);

string nama[100], nim[100], jurusan[100], matkul[100], matkul2[100], matkul3[100];
string bayar[50];



void bersih(){
    system("pause");system("cls");
}
bool pengecekan( string& pass)
{
   string kyur = "";
    char ps = '0';
    while(true)
    {
        ps = getch();
        if(ps == '\b')
        {
            if(kyur.size() > 0)
            {
                kyur.erase(kyur.begin() + kyur.size() - 1);
                cout << "\b \b";
            }
        }
        else if(ps != '\r\n' && ps != '\n' && ps != '\r')
        {
            kyur += ps;
            cout << '*';
        }
        else
            break;
    }
    return kyur == pass;
}


int main() {

    for (int l = 0; l < 50; l++) {

        bayar[l] = "BELUM";

    }

    int pilih, i = 0;
    string ulang;
    string login[2][2]={{"firman"},{"123","halooo"}};
    string user;
    int angka;
   int y = 2;
   do {
   	cout<<"===================="<<endl;
   	cout<<"=      LOGIN       ="<<endl;
   	cout<<"===================="<<endl;
    cout<<">> Username : ";cin>>user;
    cout<<">> Password : ";

       if (user == login[0][0] && pengecekan(login[1][0])) {
	   	   system("cls");
           cout << "Login Berhasil \n" ;
           menu();

           break;
           } else if (user == login[0][0] && pengecekan(login[1][0])){

           cout << "Password  Salah! \n"
                <<"sisa percobaan "<<y<<endl<<endl;
           y-=1;
       }   else if (user != login[0][0] && pengecekan(login[1][0])){

           cout << endl;
           cout << "Username  Salah! \n"
                <<"sisa percobaan "<<y<<endl<<endl;
		   y-=1;
       }   else {
           cout << endl;
           cout << "Username dan password salah! \n"
                <<"sisa percobaan "<<y<<endl<<endl;
		   y-=1;
       }
       if (y==-1){
       	
       	cout <<"masukkan password baru : ";cin>>login[0][0];
       	cout <<"password baru tersimpan";
       	
       }
   }
     while (y >=0);

    do {

        menu();
        cout << "PILIH [1/7] : "; cin >> pilih;

        switch (pilih)
        {
        case 1: biodata(i);
            break;
        case 2: isiKrs(i);
            break;
        case 3: bayarUkt(i);
            break;
        case 4: lihatKrs(i);
            break;
        case 5: hapusKrs(i);
            break;
        case 6: faq();
        	break;
        case 7: return 0;
            break;
        default: cout << "PILIHAN TIDAK ADA" << endl;
            break;
        }

    b:

        cout << "===========================" << endl;
        cout << "Kembali[Y/N] : "; cin >> ulang;
        if (ulang == "Y" || ulang == "y") {
            continue;
        }
        else if (ulang == "N" || ulang == "n") {
            return 0;
        }
        else {
            goto b;
        }

    } while (pilih != 7);

    return 0;
}

void menu() {

    system("cls");

    cout << "========================" << endl;
    cout << "=         MENU         = " << endl;
    cout << "========================" << endl;
    cout << "= 1.INPUT BIODATA      =" << endl;
    cout << "= 2.ISI KRS            =" << endl;
    cout << "= 3.BAYAR UJIAN        =" << endl;
    cout << "= 4.LIHAT KRS          =" << endl;
    cout << "= 5.HAPUS KRS          =" << endl;
    cout << "= 6.FAQ                =" << endl;
    cout << "= 7.EXIT               =" << endl;
    cout << "========================" << endl;

}

void biodata(int& i) {

    cout << "MASUKKAN NAMA    : "; cin.ignore(); getline(cin, nama[i]);
    cout << "MASUKKAN NIM     : "; cin >> nim[i];
    cout << "MASUKKAN JURUSAN : "; cin.ignore(); getline(cin, jurusan[i]);

    i++;

}

void isiKrs(int& i) {

    int pilih, pmatkul;

    cout << "=====================" << endl;

    for (int k = 0; k < i; k++) {

        cout << "[" << k + 1 << "]." << nama[k] << endl;

    }

    cout << "=====================" << endl;

    cout << "PILIH : "; cin >> pilih;
    pilih = pilih - 1;
    cout << "=====================" << endl;
    cout << "[1].Pemrograman Terstruktur" << endl;
    cout << "[2].Sistem Operasi Komputer" << endl;
    cout << "[3].Statistik Deskriptif" << endl;
    cout << "[4].Rekayasa Perangkat Lunak" << endl;
    cout << "[5].Data Mining" << endl;
    cout << "[6].Struktur Data" << endl;
    cout << "[7].Ilmu Tajwid" << endl;
    cout << "=====================" << endl;
    cout << "MATKUL 1 : "; cin >> pmatkul;
    pmatkul = pmatkul - 1;

    switch (pmatkul)
    {
    case 0: matkul[pilih] = "Pemrograman Terstruktur";
        break;
    case 1: matkul[pilih] = "Sistem Operasi Komputer";
        break;
    case 2: matkul[pilih] = "Statistik Deskriptif";
        break;
    case 3: matkul[pilih] = "Rekayasa Perangkat Lunak";
        break;
    case 4: matkul[pilih] = "Data Mining";
        break;
    case 5: matkul[pilih] = "Struktur Data";
        break;
    case 6: matkul[pilih] = "Ilmu Tajwid";
        break;
    default: cout << "PILIHAN TIDAK ADA" << endl;
        break;
    }

    cout << "MATKUL 2 : "; cin >> pmatkul;
    pmatkul = pmatkul - 1;

    switch (pmatkul)
    {
    case 0: matkul2[pilih] = "Pemrograman Terstruktur";
        break;
    case 1: matkul2[pilih] = "Sistem Operasi Komputer";
        break;
    case 2: matkul2[pilih] = "Statistik Deskriptif";
        break;
    case 3: matkul2[pilih] = "Rekayasa Perangkat Lunak";
        break;
    case 4: matkul2[pilih] = "Data Mining";
        break;
    case 5: matkul2[pilih] = "Struktur Data";
        break;
    case 6: matkul2[pilih] = "Ilmu Tajwid";
        break;
    default: cout << "PILIHAN TIDAK ADA" << endl;
        break;
    }

    cout << "MATKUL 3 : "; cin >> pmatkul;
    pmatkul = pmatkul - 1;

    switch (pmatkul)
    {
    case 0: matkul3[pilih] = "Pemrograman Terstruktur";
        break;
    case 1: matkul3[pilih] = "Sistem Operasi Komputer";
        break;
    case 2: matkul3[pilih] = "Statistik Deskriptif";
        break;
    case 3: matkul3[pilih] = "Rekayasa Perangkat Lunak";
        break;
    case 4: matkul3[pilih] = "Data Mining";
        break;
    case 5: matkul3[pilih] = "Struktur Data";
        break;
    case 6: matkul3[pilih] = "Ilmu Tajwid";
        break;
    default: cout << "PILIHAN TIDAK ADA" << endl;
        break;
    }
}

void bayarUkt(int& i) {

    int pilih,bayar1;

    cout << "===========================" << endl;
    for (int k = 0; k < i; k++) {

        cout << "[" << k + 1 << "]." << nama[k] << "   |   " << bayar[k] << endl;

    }
    cout << "===========================" << endl;

    cout << "PILIH : "; cin >> pilih;
    cout<<"bayar[2500000] : ";cin>>bayar1;
	if(bayar1>= 2500000){
		bayar[pilih - 1] = "SUDAH";
		cout<<"kembalian : "<<bayar1-2500000;
		cout<<endl;
	}else{
		i-- ;cout<<"uang anda kurang";
	}
    

}

void lihatKrs(int& i) {

    for (int k = 0; k < i; k++) {

        cout << "[" << k + 1 << "].NAMA    : " << nama[k] << endl;
        cout << "[" << k + 2 << "].JURUSAN : " << jurusan[k] << endl;
        cout << "[" << k + 3 << "].MATKUL  : " << matkul[k] << " | " << matkul2[k] << " | " << matkul3[k] << endl;
        cout << "[" << k + 4 << "].BAYAR   : " << bayar[k] << endl;
        cout << "[" << k + 5 << "].NIM     : " << nim[k] << endl;

    }

}

void hapusKrs(int& i) {

    int batal;

    cout << "===========================" << endl;
    for (int k = 0; k < i; k++) {

        cout << "[" << k + 1 << "]." << nama[k] << "   |   " << bayar[k] << endl;

    }
    cout << "===========================" << endl;
    cout << "HAPUS : "; cin >> batal;
    batal = batal - 1;

    for (int m = batal; m < i; m++) {

        nama[m] = nama[m + 1];
        jurusan[m] = jurusan[m + 1];
        nim[m] = nim[m+1];
        matkul[m] = matkul[m + 1];
        matkul2[m] = matkul2[m + 1];
        matkul3[m] = matkul3[m + 1];
        bayar[m] = bayar[m + 1];

    }

}

void faq(){
	cout <<"==================================="<<endl;
	cout <<"=          TENTANG SAYA           ="<<endl;
	cout <<"==================================="<<endl;
	cout <<"= Nama   : Firman Reski Ramadhan  ="<<endl;
	cout <<"= Kelas  : C                      ="<<endl;
	cout <<"= Nim    : 60900121062            ="<<endl;
	cout <<"==================================="<<endl;
	
	cout <<"================================================="<<endl;
	cout <<"=                     KESAN                     ="<<endl;
	cout <<"= Saya terkesan dengan cara mengajar para asdos ="<<endl;
	cout <<"=                     PESAN                     ="<<endl;
	cout <<"=       Tetap semangat menggapai impian         ="<<endl;
	cout <<"================================================="<<endl;
						
	}
