#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void pc();
void menu(int a, int b, int i, int j);
void lihatData();
void inputData();

int jumlahData, jl,batas = 0;
char ubah;

int main(){
	int a, b, i, j;
	string unem, un="firman";
	string pass, ps="123";
	string psBaru;
	int kesempatan=2;
	char ch;
	string gantiPass;
	
	bool login = false;
do{
	cout <<"Username : "; cin>>unem;
	cout << "password : ";
	cin.ignore();
    ch=_getch();
        while(ch!='\r'){
            ch=getch();
            if(ch=='0'){
                switch(getch()){
                default:
                    break;
                }
            }else if(ch == '\b')
        {
        if(pass.size() != 0)
           {
           cout << "\b \b";
           pass.erase(pass.size() - 1, 1);
           }
        continue;
        }else if(ch<='9'&&ch>='0' || ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
                pass += ch;
                cout << "*";
            }else{
                continue;
            }
        }
        cout << endl;

if((unem!=un && pass!=ps) || (unem!=un || pass!=ps)){
	cout << endl;
    cout<<"Username atau password salah, coba lagi(" << kesempatan << ")" << endl;
    system("pause");
	system("cls");
}else if(unem==un && pass==ps){
    login = true;
    cout << endl;
    cout<<"Anda Berhasil Login"<<endl;
    system("pause");
	system("cls");
    menu( a, b, i, j);

}
kesempatan --;
if(kesempatan < 0){
		cout << "kesempatan habis, ingin ganti password[y/n] ? ";cin >> gantiPass;
		if(gantiPass=="y"){
			cout << "password baru : "; cin >>psBaru;
			psBaru=ps;
			cout << "username : ";
			cin >>  unem;
			cout << "password : ";
			 cin >> pass;	
		}else if(gantiPass=="n"){
			return 0;
	}
	} 
}while(login == false);
}

void pc(){
	system("pause");
	system("cls");
}

void menu(int a, int b, int i, int j){
	int kategori, pilih; 
	char pilihan;
	
	ya:
		cout<<"MENU: "<<endl
			<<"A. Cek Fakultas dan Jurusan"<<endl
			<<"B. Cek jumlah mahasiswa"<<endl
			<<"C. Pembayaran UKT"<<endl
			<<"D. FAQ about Universitas"<<endl
			<<"E. FAQ about me"<<endl
			<<"F. Exit"<<endl
			<<"Pilih: "; cin>>pilihan;
				switch (pilihan){
				case 'a':{
					cout<<"Cek Fakultas dan Jurusan: "<<endl;
					cout<<"1. Fakultas Syariah dan Hukum"<<endl;
					cout<<"2. Fakultas Tarbiyah dan Keguruan"<<endl;
					cout<<"3. Fakultas Sains dan Teknologi"<<endl;
					cout<<"4. Fakultas Ekonomi dan Bisnis Islam"<<endl;
					cout<<"Melihat jurusan: "; cin>>pilih;
					if (pilih==1){
						cout<<"FAKULTAS SYARIAH DAN HUKUM"<<endl;
						cout<<"1. Ilmu Hukum"<<endl;
						cout<<"2. Hukum Tata Negara"<<endl;
						cout<<"3. Hukum Keluarga Islam"<<endl;
					} else if(pilih==2){
						cout<<"FAKULTAS TARBIYAH DAN KEGURUAB"<<endl;
						cout<<"1. Pendidikan Agama Islam"<<endl;
						cout<<"2. Manajemen Pendidikan Islam"<<endl;
						cout<<"3. Pendidikan Bahasa Inggris"<<endl;
					} else if(pilih==3){
						cout<<"FAKULTAS SAINS DAN TEKNOLOGI"<<endl;
						cout<<"1. Sistem Informasi"<<endl;
						cout<<"2. Teknik Informatika"<<endl;
						cout<<"3. Biologi"<<endl;
					} else {
						cout<<"FAKULTAS EKONOMI DAN BISNIS ISLAM"<<endl;
						cout<<"1. Manajemen"<<endl;
						cout<<"2. Ilmu Akuntansi"<<endl;
						cout<<"3. Ilmu Ekonomi"<<endl;
					} 	
					pc();
					goto ya;
					break;
				
				}
				case 'b':{
					cout<<"Cek Jumlah Mahasiswa: "<<endl;
					cout<<"Jumlah Mahasiswa 17.957 orang"<<endl;
					cout<<"Jumlah mahasiswa lain 378 orang"<<endl;
					pc();
					goto ya;
					break;
				
				}
				case 'c':{
					cout<<"====Pembayaran UKT===="<<endl;
					cout<<"1. Input Data"<<endl
						<<"2. Lihat Data"<<endl
						<<"Pilih: "; cin>>pilih;
						if (pilih==1){
							inputData();
						} else {
							lihatData();
						}
					pc();
					goto ya;
					break;
			}
					case 'd':{
					cout<<"About University: "<<endl
						<<"Universitas Islam Negeri Alauddin Makassar atau UIN Alauddin adalah Perguruan Tinggi Islam Negeri"<<endl
						<<"yang berada di Makassar. Penamaan UIN Alauddin di Makassar diambil dari nama Raja Gowa ke-14"<<endl
						<<"yang pertama kali memeluk agama Islam pada pada hari Jum'at tanggal 9 Jumadil Awal 1015 Hijriah atau 22 September 1605 Masehi."<<endl
						<<"Sultan Alauddin yang bernama lengkap I Manngaranngi Daeng Manrabia Sultan Alauddin Tumenanga ri Gaukanna yang lebih populer"<<endl
						<<"disebut dengan nama Sultan Alauddin, seorang raja di Kerajaan Gowa yang memerintah pada tahun 1593-1639."<<endl
						<<"Universitas Islam Negeri Alauddin Makassar atau UIN Alauddin pernah menyabet penghargaan ADIKTIS 2020."<<endl;
					pc();
					goto ya;
					break;
			
				}
				case 'e':{
					cout<<"Hai, namaku Nur Aisyah Wulandari dengan nomor NIM 60900121032. Sapaan akrabnya Wulan/Nana"<<endl
						<<"Saat ini aku adalah owner dari toko aksesoris Berry. Ada berbagai macam aksesoris yang kami punya."<<endl
						<<"Kuharap kalian nyaman dan senang berbelanja di toko kami. Oh ya, jika ada keluhan atau masukan silahkan"<<endl
						<<"hubungi momor berikut -> 082346673073. SENANG BERJUMPA DENGAN MU! SEMOGA HARIMU SELALU MENYENANGKAN, SEE YOu ^.^"<<endl;
					cout<<endl;
					cout<<"KESAN:  "<<endl
						<<"Selama praktikum Pemrograman terstruktur berlangsung, aku terkesan dengan cara mengajar/penyampaian para asdos."<<endl
						<<"Mereka baik meskipun sedikit nyeremin saat pemberian soal laporan. Tegas juga, but its okay. Itu bagus, agar"<<endl
						<<"aku dan teman-temanku tidak terlalu bermalas-malasan. Materi yang ingin mereka sampaikan juga jelas dapat masuk di otak."<<endl
						<<"Terimakasih kak. Sekian."<<endl<<endl;
					cout<<"PESAN: "<<endl
						<<"Hehe, itu.. tulisan di papan tulis lab kalau duduknya jauh susah kelihatan. Semoga tulisannya bisa diperbesar."<<endl
						<<"Soalnya mau duduk di depan juga udah diisi sama teman :>"<<endl;
					pc();
					goto ya;
					break;
				}
				case 'f':{
					exit(0);
					break;
				}
				}
			
}
	string nim[100];
	string ukt[100];
	
void inputData(){
int a, b, i, j;
cout<<"Jumlah data yang ingin diinput : ";
cin>>jl;
jumlahData = jumlahData + jl;
for(int i = batas; i < jumlahData; i++){
	nim:
    cout<<"NIM : "; cin>>nim[i];
    for(int j = 0;j < i;j++){
            if(nim[i] != nim[j]){
                break;
            }else{
                while(nim[i] == nim[j]){
                	cout<<"Maaf NIM telah ada"<<endl;
                	goto nim;
//                    exit(0);
                }
            }
		}
    cout<<"UKT : "; cin>>ukt[i];

   
}
batas = jumlahData;
getch();
system("cls");
menu(a, b,i, j);
}


void lihatData(){
if(jumlahData > 0){
   cout<<"=== Lihat data ==="<<endl;
for(int a = 0; a < jumlahData; a++){
        cout << "Data " << a + 1 << endl;
        cout << "NIM      : " << nim[a] << endl;
        cout << "UKT      : " << ukt[a] << endl;
}
    }
    else{
    	printf("Data kosong");
//      cout<<"Data kosong"<<endl;
    }
}

