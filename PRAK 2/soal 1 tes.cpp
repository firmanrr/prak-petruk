#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	
	int percobaan = 3, tempat, pilihan;
	string username = "", password = "";
	char ch;
	
	cout << "BIOSKOP SISFO" << endl;
	
	do{
		
		cout << "Masukkan Username : "; cin >> username;
		cout << "MasukKan Password : "; ch = _getch();
		
            while(ch != 13){
            	
            password.push_back(ch);
            cout << '*';
            ch = _getch();        
            }
	
	if((username ==  "firman" && password == "123")||(username == "reski" && password == "456")){
		
		percobaan = 0;
		
		system("cls");
		
		cout << "Anda Berhasil Login" << endl;
		cout << "DAFTAR BIOSKOP"<<endl;
		cout << "<1>. XXI " << endl;
		cout << "<2>. CGV " << endl;
		cout << "<3>. CINEPOLIS " << endl;
		ulang:
			
		cout << "Masukan Kategori Bioskop : "; cin >> tempat;
		cout <<endl;
		
		if(tempat == 1){
			
			cout << "Anda Memilih Bioskop XXI" << endl;
			cout << "[1]. DR. Strange Rp(100.000)" << endl;
			cout << "[2]. KKN Di Desa Penari Rp(75.000)" << endl;
			cout << "[3]. Spiderman Rp(50.000)" << endl;
			cout << "Pilih Film [1-3] : "; cin >> pilihan;
			cout <<endl;
			if(pilihan == 1){
				cout << "Anda Memilih Film DR. Strange Rp(100.000)" << endl;
			}else if(pilihan == 2){
				cout << "Anda Memilih Film KKN Di Desa Penari Rp(75.000)" << endl;
			}else if(pilihan == 3){
				cout << "Anda Memilih Film Spiderman Rp(50.000)" << endl;
			}else{
				cout << "Film tidak tersedia" << endl;
			}
			
		}else if(tempat == 2){
			
			cout << "Anda Memilih Bioskop CGV" << endl;
			cout << "<1>. DR. Strange Rp(80.000)" << endl;	
			cout << "<2>. MR. Bean Rp(50.000)" << endl;
			cout << "<3>. Aladdin Rp(50.000)" << endl;
			cout << "Pilih Film [1-3] : "; cin >> pilihan;
			cout <<endl;
			if(pilihan == 1){
				cout << "Anda Memilih Film DR. Strange Rp(80.000)" << endl;
			}else if(pilihan == 2){
				cout << "Anda Memilih Film MR. Bean Rp(50.000)" << endl;
			}else if(pilihan == 3){
				cout << "Anda Memilih Film Aladdin Rp(50.000)" << endl;
			}else{
				cout << "Film tidak tersedia" << endl;
			}
			
		}else if(tempat == 3){
			
			cout << "Anda Memilih Bioskop CINEPOLIS" << endl;
			cout << "<1>. Cek Toko Sebelah Rp(60.000)" << endl;
			cout << "<2>. Batman Rp(50.000)" << endl;
			cout << "<3>. Zombie Rp(40.000)" << endl;
			cout << "Pilih Film [1-3] : "; cin >> pilihan;
			cout <<endl;
			if(pilihan == 1){
				cout << "Anda Memilih Film Cek Toko Sebelah Rp(60.000)" << endl;
			}else if(pilihan == 2){
				cout << "Anda Memilih FilmBatman Rp(50.000)" << endl;
			}else if(pilihan == 3){
				cout << "Anda Memilih Film Zombie Rp(40.000)" << endl;
			}else{
				cout << "Film tidak tersedia" << endl;
			}
			
		}else{
			
			cout << "Pilihan anda tidak ada" << endl;
			goto ulang;
		}
		
	}else if((username ==  "firman" && password == "123")||(username == "reski" && password == "456") ){
		
		cout << "Email Salah" << endl;
		percobaan--;
		cout << "Sisa Percobaan " << percobaan << endl;
		
	}else if((username ==  "firman" && password == "123")||(username == "reski" && password == "456")){
	
		cout << "Password Salah" << endl;
		percobaan--;
		cout << "Sisa Percobaan " << percobaan << endl;
		
	}else{
		
		cout << "Email dan Password salah" << endl;
		percobaan--;
		cout << "Sisa Percobaan anda " << percobaan << endl;
		
		cout << "Percobaan Habis" << endl;	
	
		return 0;
	}
}while(percobaan > 0);	
	return 0;
}
