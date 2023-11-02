#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
void login();
void menu();
void inputdata();
void lihatdata();
void hapusdata();
void bersih();
void faq();
string password;
string passBaru ="123";
struct data{
	string nama[100];
	string alamat[100]; 
};data res;
string tanggal;
bool pengecekan(string& pass);
int jl,batas,pil,jumlah,jumlahdata;

int x = -1;
bool keluar = false;

int main(){

    string login[2][2]={{"firman"},{"123","halooo"}};
    string user;
    int angka;
   int y = 2;
   do {
    cout<<"Username : ";cin>>user;
    cout<<"Password : ";

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
        cout<<"ANDA TELAH 3X SALAH\n"
            <<"pilihan:\n"
            <<"1. ubah password\n"
            <<"2. keluar\n"
            <<"tekan angka yang dipilih : ";cin>>angka;
        if(angka==1){
            for(int a=0;a<3;a++){
            cout<<"masukkan code dari admin : ";cin>>login[0][1];bersih();
            if(login[0][1]==login[1][1]){
                cout<<"terverifikasi\n";
                cout<<"password baru : ";cin>>login[1][0];bersih();
                cout<<"password baru tersimpan\n";
                a=4;y=2;
            }else{
               cout<<"penyusup minta izin dulu sama admin\n";
            }
            }
        }else{
             cout<<"akun ditutup\n";break;
        }
       }
    } while (y >=0);
}
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
    
void menu(){
    int pilihan;
    cout << "=================================" <<endl;
    cout << "| NO |      NI'MA RESTAURANT\t|" << endl;
    cout << "=================================" <<endl;
    cout << "| 1. | Input Data\t\t|" << endl;
    cout << "| 2. | Lihat Data\t\t|" << endl;
    cout << "| 3. | Hapus Data\t\t|" << endl;
    cout << "| 4. | Faq\t\t\t|" << endl;
    cout << "| 5. | Keluar\t\t\t|" << endl;
    cout << "=================================" <<endl;
    cout << "Pilih :  "; cin >> pilihan;
    if(pilihan == 1){
    	inputdata();	
	}
    if(pilihan == 2){
        lihatdata();
    }
    if(pilihan == 3)hapusdata();
    if(pilihan == 4)faq();
    if(pilihan == 5)keluar = true;
}

void inputdata(){
	cout<<"Jumlah data yang ingin diinput : ";
	cin>>jl;
	jumlahdata = jumlahdata + jl;
	for(int i = batas; i < jumlahdata; i++){
    	cin.ignore();
    	cout<<"Nama Pelanggan : ";
    	getline(cin,res.nama[i]);
    	cout<<"Alamat : ";
    	getline(cin,res.alamat[i]);
    cout << "=========================================" <<endl;
		cout << "| No | Makanan/Minuman\t|\tHarga\t|" <<endl;
		cout << "=========================================" <<endl;
		cout << "| 1. | Nasi goreng\t|\t10000\t|" <<endl;
		cout << "| 2. | Coto\t\t|\t15000\t|" <<endl;
		cout << "| 3. | Pangsit\t\t|\t12000\t|" <<endl;
		cout << "| 4. | Es Jeruk\t\t|\t7000\t|" <<endl;
		cout << "| 5. | Es Teh\t\t|\t5000\t|" <<endl;
		cout << "|*free air aqua\t\t\t\t|"<<endl;
		cout << "=========================================" <<endl;
		cout << "Pilih : "; cin >> pil;
		if (pil==1){
				cout << "Jumlah : ";cin >> jumlah;
	  			cout << "Total bayar : " << jumlah*10000 << endl;
		}
		if (pil==2){
				cout << "Jumlah : ";cin >> jumlah;
	  			cout << "Total bayar : " << jumlah*15000 << endl;
		}
		if (pil==3){
				cout << "Jumlah : ";cin >> jumlah;
	  			cout << "Total bayar : " << jumlah*12000 << endl;
		}
		if (pil==4){
				cout << "Jumlah : ";cin >> jumlah;
	  			cout << "Total bayar : " << jumlah*7000 << endl;
		}
		if (pil==5){
				cout << "Jumlah : ";cin >> jumlah;
	  			cout << "Total bayar : " << jumlah*5000 << endl;
		}
	system("pause");
	system("cls");	
	menu();	
	}
}
void lihatdata(){
	if(jumlahdata > 0){
   cout<<"=== Lihat data ==="<<endl;
	for(int a = 0; a < jumlahdata; a++){
        cout << "Pelanggan ke- " << a + 1 << endl;
        cout << "Nama Pelanggan : " << res.nama[a] << endl;
        cout << "Alamat         : " << res.alamat[a] << endl;
}
    }
    else{
      cout<<"Data kosong"<<endl;
    }
    system("pause");
    system("cls");
    menu();
}




void hapusdata(){
	int a;
	if(jumlahdata > 0){
    cout<<"=== Hapus data ==="<<endl;
    cout << "Pelanggan : ";
    cin >> a;
    if(a >= jumlahdata && a <=jumlahdata){
    for(int c = a; c < jumlahdata; c++){
        res.nama[c] = res.nama[c + 1];
        res.alamat[c] = res.alamat[c + 1];
	}
    cout << "Pelanggan ke- " << a << " telah terhapus" << endl;
    jumlahdata = jumlahdata - 1;}
    else{
        cout << "Pelanggan ke- " << a << " Kosong" << endl;
        }
    }
    system("pause");
    system("cls");
    menu();
}

void faq(){
    cout<<"====================================================================================="<<endl;
    cout<<"|                                    BIODATA                                        |"<<endl;
    cout<<"====================================================================================="<<endl;
    cout<<"| Nama                     : Ni'matul Fajri                                         |"<<endl;
    cout<<"| NIM                      : 60900121008                                            |"<<endl;
    cout<<"| Kelas                    : A                                                      |"<<endl;
    cout<<"| Hobi                     : Membaca                                                |"<<endl;
    cout<<"====================================================================================="<<endl;
    cout<<"Kesan dan Pesan Terkait Praktikum                                                 "<<endl;
    cout<<"Kelebihan Praktikum :                                                             "<<endl;
    cout<<"Kelebihan dari praktikum ini yaitu menambah wawasan terkait C++. Hal dikarenakan  "<<endl;
	cout<<"pada saat pemberian soal laporan praktikum, soal-soal yang diberikan adalah soal  "<<endl;
	cout<<"yang menurut saya sulit.                                                          "<<endl;
	cout<<endl;
    cout<<"Kekurangan Praktikum :                                                            "<<endl;
    cout<<"Menurut saya kekurangan dari praktikum ini itu, terkadang ada beberapa materi     "<<endl;
    cout<<"kurang diberi penjelasan sehingga kita tidak terlalu paham dengan materi tersebut."<<endl;
    system ("pause");
    system ("cls");
    menu();
}
