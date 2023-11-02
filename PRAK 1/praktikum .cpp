#include <iostream>
using namespace std;

string pass, user, mail;
int saldo = 62;
bool keluar;

void autentikasi (){
	mulai:
	cout << " === AUTENTIKASI ===\n";
	cout << "Masukkan Username anda : "; cin >> user;
	cout << "Masukkan Email anda    : "; cin >> mail;
	cout << "Masukkan Passsword anda: "; cin >> pass;
	
	if(user=="firman" && mail == "firman@gmail.com" && pass == "123"){
		cout << "LOGIN BERHASIL";
	}else if(user != "firman" && mail == "firman@gmail.com" && pass == "123"){
		cout << "USERNAME ANDA SALAH!\n\n";
		goto mulai;
	}else if(user == "firman" && mail != "firman@gmail.com" && pass == "123"){
		cout << "EMAIL ANDA SALAH!\n\n";
		goto mulai;
	}else if(user == "firman" && mail == "firman@gmail.com" && pass != "123"){
		cout << "PASSWORD ANDA SALAH!\n\n";
		goto mulai;
	}else if(user != "firman" && mail != "firman@gmail.com" && pass == "123"){
		cout << "USERNAME DAN EMAIL ANDA SALAH!\n\n";
		goto mulai;
	}else if(user != "firman" && mail == "firman@gmail.com" && pass != "123"){
		cout << "USERNAME DAN PASSWORD ANDA SALAH!\n\n";
		goto mulai;
	}else if(user == "firman" && mail != "firman@gmail.com" && pass != "123"){
		cout << "EMAIL DAN PASSWORD ANDA SALAH!\n\n";
		goto mulai;
	}else{
		cout << "TIDAK ADA YANG BENAR!\n\n";
		goto mulai;
	}
}

void gantipw (){
	string gantipw;
	int pil;
	a:
	cout << "\n== GANTI PASSWORD ==\n";
	cout << "Apakah anda ingin mengganti password?";
	cout << "1. YA \n 2. TIDAK"; cin >> pil;
	switch (pil){
		case 1:
			cout << "Masukkan Password baru anda: "; cin >> gantipw;
			pass = gantipw;
			cout << "BERHASIL MEMPERBAHARUI PASSWORD" << endl;
			break;
		case 2:
			cout << "Masukkan pilihan yang benar!";
			system ("pause");
			goto a;
	}
}

void isi_saldo(){
	int nominal;
	cout << "\n== ISI SALDO ==\n";
	cout << "Jumlah yang ingin di isi: Rp. "; cin >> nominal;
	saldo += nominal;
	cout << "PROSES PENAMBAHAN SALDO BERHASIL" << endl;
}

void periksa_saldo(){
	cout << "\n== PERIKSA SALDO ==\n";
	cout << "Saldo anda sekarang adalah: Rp. " << saldo << endl;
}

void logout(){
	string log;
	cout << "\n== LOG OUT ==\n";
	while (true){
		cout << "Masukkan Password: "; cin >> log;
		if(log== pass){
			cout << "LOGOUT BERHASIL!\n";
			keluar = true;
			break;
		}else{
			cout << "Password Salah\n";
		}
	}
}

void menu(){
	int menu;
	cout << "\n== MENU ==\n";
	cout << "1. Ganti Password\n2. Isi Saldo\n3. Cek Saldo\n4. Log Out\n\n";
	cout << "Masukkan Pilihan: "; cin >> menu;
	switch(menu){
		case 1:
			gantipw();
			break;
		case 2:
			isi_saldo();
			break;
		case 3:
			periksa_saldo();
			break;
		case 4:
			logout();
			break;
	}
}

int main (){
	keluar = false;
	autentikasi();
	cout << endl;
	while(keluar==false){
		menu();
		cout << endl;
		if (keluar==true) break;
	}
}
