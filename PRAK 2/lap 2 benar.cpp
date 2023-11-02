#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

void pegawai(string& user, string& namaToko);
void menu(string& kategori, string& jenis, string& pilihan, string& harga);

int main() {

	string user, namaToko;
	string kategori, jenis, pilihan, harga;
    int bayar, v;

	pegawai(user,namaToko);
	menu(kategori,jenis,pilihan,harga);

	cout << "============================" << endl;
	cout << "NAMA KASIR :" << user << endl;
	cout << "NAMA TOKO  :" << namaToko << endl;
	cout << "============================" << endl;
	cout << "KATEGORI       :" << kategori << endl;
	cout << "JENIS SERVICE  :" << jenis << endl;
	cout << "PILIHAN        :" << pilihan << endl;
	cout << "HARGA          :" << harga << endl;
	cout << "============================" << endl;
    cout << "BAYAR          :"; cin >> bayar;
    v = atoi(harga.c_str());
    if(bayar < v){

        cout << "UANG ANDA TIDAK CUKUP" << endl;

    }else{

    cout << "KEMBALIAN      :" << bayar - v << endl;

    }

}

void pegawai(string &user, string &namaToko) {

	cout << "MASUKKAN NAMA PEGAWAI : "; cin >> user;
	cout << "MASUKKAN NAMA TOKO    : "; cin >> namaToko;

}

void menu(string &kategori, string &jenis, string &pilihan, string &harga) {

	int Kategori, Jenis, Pilihan;

	system("cls");
	//PILIHAN KE 1
	cout << "======================" << endl;
	cout << "   BENGKEL SELATAN    " << endl;
	cout << "======================" << endl;
	cout << "[1].SERVICE MOBIL     " << endl;
	cout << "[2].SERVICE MOTOR     " << endl;
	cout << "[3].PAKET SERVICE     " << endl;
	cout << "======================" << endl;
	cout << "PILIH [1-3] : "; cin >> Kategori;

	//PILIHAN KE 2
	system("cls");
	if (Kategori == 1) {

		cout << "======================" << endl;
		cout << "     SERVICE MOBIL    " << endl;
		cout << "======================" << endl;
		cout << "[1].GANTI BAN         " << endl;
		cout << "[2].GANTI OLI         " << endl;
		cout << "[3].GANTI WARNA       " << endl;
		cout << "======================" << endl;
		cout << "PILIH [1-3] : "; cin >> Jenis;

		system("cls");
		//PILIHAN KE 3
		if (Jenis == 1) {

			cout << "==================================" << endl;
			cout << "          GANTI BAN MOBIL         " << endl;
			cout << "==================================" << endl;
			cout << "[1].ALL TERRAIN     | Rp 4.719.000 " << endl;
			cout << "[2].MUD TERRAIIN    | Rp 5.225.000 " << endl;
			cout << "[3].HIGHWAY TERRAIN | Rp 1.290.000 " << endl;
			cout << "==================================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI BAN";
				pilihan = "ALL TERRAIN";
				harga = "4719000";
			}
			else if (Pilihan == 2) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI BAN";
				pilihan = "MUD TERRAIN";
				harga = "5225000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI BAN";
				pilihan = "HIGHWAY TERRAIN";
				harga = "1290000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 2) {

			cout << "===============================" << endl;
			cout << "         GANTI OLI MOBIL       " << endl;
			cout << "===============================" << endl;
			cout << "[1].SHELL HELIX   | Rp 39.000  " << endl;
			cout << "[2].TOYOTA TMO    | Rp 40.000  " << endl;
			cout << "[3].CASTROL       | Rp 69.000  " << endl;
			cout << "===============================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI OLI MOBIL";
				pilihan = "SHELL HELIX";
				harga = "39000";
			}
			else if (Pilihan == 2) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI OLI MOBIL";
				pilihan = "MUD TERRAIN";
				harga = "40000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI OLI MOBIL";
				pilihan = "CASTROL";
				harga = "690000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 3) {

			cout << "=======================================" << endl;
			cout << "          GANTI WARNA MOBIL            " << endl;
			cout << "=======================================" << endl;
			cout << "[1].GANTI WARNA BUMPER  | Rp 620.000   " << endl;
			cout << "[2].GANTI WARNA FENDER  | Rp 700.000   " << endl;
			cout << "[3].GANTI WARNA ROOF    | Rp 1.800.000 " << endl;
			cout << "=======================================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI WARNA MOBIL";
				pilihan = "WARNA BUMPER";
				harga = "620000";
			}
			else if (Pilihan == 2) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI WARNA MOBIL";
				pilihan = "WARNA FENDER";
				harga = "700000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOBIL";
				jenis = "GANTI WARNA MOBIL";
				pilihan = "WARNA ROOF";
				harga = "1800000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else {

			cout << "PILIHAN TIDAK ADA" << endl;

		}

	}
	//PILIHAN KE 2
	else if (Kategori == 2) {

		cout << "======================" << endl;
		cout << "    SERVICE MOTOR     " << endl;
		cout << "======================" << endl;
		cout << "[1].GANTI BAN         " << endl;
		cout << "[2].GANTI VELEG       " << endl;
		cout << "[3].GANTI CUP         " << endl;
		cout << "======================" << endl;
		cout << "PILIH [1-3] : "; cin >> Jenis;

		//PILIHAN KE 1
		system("cls");
		if (Jenis == 1) {

			cout << "===============================" << endl;
			cout << "        GANTI BAN MOTOR        " << endl;
			cout << "===============================" << endl;
			cout << "[1].BAN SPORT   | Rp 385.000   " << endl;
			cout << "[2].BAN TOURING | Rp 526.000   " << endl;
			cout << "[3].BAN SCOOTER | Rp 2.000.00  " << endl;
			cout << "===============================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOTOR";
				jenis = "GANTI BAN MOTOR";
				pilihan = "BAN SPORT";
				harga = "385000";
			}
			else if (Pilihan == 2) {
				kategori = "GANTI BAN MOTOR";
				jenis = "GANTI BAN MOTOR";
				pilihan = "BAN TOURING";
				harga = "526000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOTOR";
				jenis = "GANTI BAN MOTOR";
				pilihan = "BAN SCOTTER";
				harga = "2000000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 2) {

			cout << "===================================" << endl;
			cout << "        GANTI VELEG MOTOR          " << endl;
			cout << "===================================" << endl;
			cout << "[1].VELEG JARI BESI | Rp 1.250.000 " << endl;
			cout << "[2].U SHAPE RIM     | Rp 500.00    " << endl;
			cout << "[3].CAST WHELL      | Rp 600.000   " << endl;
			cout << "===================================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOTOR";
				jenis = "GANTI VELEG MOTOR";
				pilihan = "VELEG JARI BESI";
				harga = "1250000";
			}
			else if (Pilihan == 2) {
				kategori = "SERVICE MOTOR";
				jenis = "GANTI VELEG MOTOR";
				pilihan = "U SHAPE RIM";
				harga = "500000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOTOR";
				jenis = "GANTI VELEG MOTOR";
				pilihan = "CAST WHELL";
				harga = "600000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 3) {

			cout << "================================" << endl;
			cout << "          COSTUM MOTOR          " << endl;
			cout << "================================" << endl;
			cout << "[1].BRAT STYLE   | Rp 650.000   " << endl;
			cout << "[2].SCRAMBLER    | Rp 1.000.00  " << endl;
			cout << "[3].CHOPPER      | Rp 1.250.00  " << endl;
			cout << "================================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "SERVICE MOTOR";
				jenis = "COSTUM MOTOR";
				pilihan = "BART STYLE";
				harga = "650000";
			}
			else if (Pilihan == 2) {
				kategori = "SERVICE MOTOR";
				jenis = "COSTUM MOTOR";
				pilihan = "SCRAMBLER";
				harga = "1000000";
			}
			else if (Pilihan == 3) {
				kategori = "SERVICE MOTOR";
				jenis = "COSTUM MOTOR";
				pilihan = "CHOPPER";
				harga = "1250000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else {

			cout << "PILIHAN TIDAK ADA" << endl;

		}

	}
	//PILIHAN KE 2
	else if (Kategori == 3) {

		cout << "======================" << endl;
		cout << "      PAKET SERVICE   " << endl;
		cout << "======================" << endl;
		cout << "[1].SERVICE BESAR     " << endl;
		cout << "[2].SERVICE RINGAN    " << endl;
		cout << "[3].SERVICE BODI      " << endl;
		cout << "======================" << endl;
		cout << "PILIH [1-3] : "; cin >> Jenis;

		//PILIHAN KE 3
		system("cls");
		if (Jenis == 1) {

			cout << "=============================" << endl;
			cout << "         SERVICE BESAR       " << endl;
			cout << "=============================" << endl;
			cout << "[1].MOTOR 2T    | Rp 160.000 " << endl;
			cout << "[2].MOTOR 4T    | Rp 175.000 " << endl;
			cout << "[3].XMAX        | Rp 300.000 " << endl;
			cout << "=============================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BESAR";
				pilihan = "MOTOR 2T";
				harga = "160000";
			}
			else if (Pilihan == 2) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BESAR";
				pilihan = "MOTOR 4T";
				harga = "175000";
			}
			else if (Pilihan == 3) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BESAR";
				pilihan = "XMAX";
				harga = "300000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 2) {

			cout << "=============================" << endl;
			cout << "        SERVICE RINGAN       " << endl;
			cout << "=============================" << endl;
			cout << "[1].MOTOR 2T    | Rp 77.000  " << endl;
			cout << "[2].JUPITER MX  | Rp 83.000  " << endl;
			cout << "[3].XMAX        | Rp 150.00  " << endl;
			cout << "======================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE RINGAN";
				pilihan = "MOTOR 2T";
				harga = "77000";
			}
			else if (Pilihan == 2) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE RINGAN";
				pilihan = "JUPITER MX";
				harga = "83000";
			}
			else if (Pilihan == 3) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE RINGAN";
				pilihan = "XMAX";
				harga = "150000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else if (Jenis == 3) {

			cout << "=================================" << endl;
			cout << "            SERVICE BODI         " << endl;
			cout << "=================================" << endl;
			cout << "[1].PASANG BODY SET | Rp 200.000 " << endl;
			cout << "[2].UP SET DOWN     | Rp 125.000 " << endl;
			cout << "[3].SETTING CO      | Rp 40.000  " << endl;
			cout << "=================================" << endl;
			cout << "PILIH [1-3] : "; cin >> Pilihan;

			system("cls");
			if (Pilihan == 1) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BODI";
				pilihan = "PASANG BODY SET";
				harga = "200000";
			}
			else if (Pilihan == 2) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BODY";
				pilihan = "UP SET DOWN";
				harga = "125000";
			}
			else if (Pilihan == 3) {
				kategori = "PAKET SERVICE";
				jenis = "SERVICE BESAR";
				pilihan = "SETTING CO";
				harga = "40000";
			}
			else {
				cout << "PILIHAN TIDAK ADA" << endl;
			}

		}
		else {

			cout << "PILIHAN TIDAK ADA" << endl;

		}

	}
	else {

		cout << "PILIHAN TIDAK ADA" << endl;

	}

}
