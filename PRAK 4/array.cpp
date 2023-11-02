#include <iostream>
#include <string>
using namespace std;

int main() {

	int pilih, provinsi, daerah;
	int i = 0, f, j = 0, s = 2;
	int d;
	string nama[50], nisn[50], sekolah[50], alamat[50];
	string umur[50], pProvinsi[50], pDaerah[50];
	string Unisn, ulang, username, password, Ubahnisn;
	bool data, data2;

	do {
		cout << "Masukkan Username : "; cin >> username;
		cout << "Masukkan Password : "; cin >> password;
		cout <<endl;

		if (s == 0) {
			return 0;
		}

		if (username == "firman" && password == "123") {
			goto x;
		}
		else {
			cout << "Password atau Email anda salah" << endl;
			cout << "Sisa Percobaan :" << s << endl;
			cout << "==================" << endl;
			s--;
		}

	} while (s >= 0);
	
x:

	do {

		c:
		cout << "      MENU      " << endl;
		cout << "================" << endl;
		cout << "1.Input Data    " << endl;
		cout << "2.Lihat Data    " << endl;
		cout << "3.Ubah Data     " << endl;
		cout << "4.Hapus Data    " << endl;
		cout << "5.Lihat User    " << endl;
		cout << "6.Keluar        " << endl;
		cout << "================" << endl;
		cout << "Pilih [1-6] : "; cin >> pilih;

		if (pilih == 1) {

			cout << "====================" << endl;
			cout << "Masukkan Nama    : "; cin.ignore(); getline(cin, nama[i]);
			cout << "Masukkan NISN    : "; cin >> Unisn;
			for (int m = 0; m < i; m++) {
				if (nisn[m] == Unisn) {
					goto c;
				}
			}
			nisn[i] = Unisn;

			cout << "Masukkan Sekolah : "; cin.ignore(); getline(cin,sekolah[i]);
			cout << "Masukkan Alamat  : "; cin.ignore(); getline(cin,alamat[i]);
			cout << "Masukkan Umur    : "; cin >> umur[i];

			cout << "======================" << endl;
			cout << "        PROVINSI      " << endl;
			cout << "======================" << endl;
			cout << "1.Sulawesi Selatan    " << endl;
			cout << "2.JAWA TIMUR          " << endl;
			cout << "3.KALIMANTAN TIMUR    " << endl;
			cout << "4.SUMATERA BARAT      " << endl;
			cout << "5.PAPUA BARAT         " << endl;
			cout << "======================" << endl;
			cout << "Pilih Provinsi   : "; cin >> provinsi;

			if (provinsi == 1) {
				pProvinsi[i] = "Sulawesi Selatan";

				cout << "====================" << endl;
				cout << "       DAERAH       " << endl;
				cout << "====================" << endl;
				cout << "1.Makassar          " << endl;
				cout << "2.Gowa              " << endl;
				cout << "3.Jeneponto         " << endl;
				cout << "4.Takalar           " << endl;
				cout << "5.Bantaeng          " << endl;
				cout << "6.Bone              " << endl;
				cout << "7.Bulukumba         " << endl;
				cout << "====================" << endl;
				cout << "Pilih Daerah : "; cin >> daerah;

				if (daerah == 1) {
					pDaerah[i] = "Makassar";
				}
				else if (daerah == 2) {
					pDaerah[i] = "Gowa";
				}
				else if (daerah == 3) {
					pDaerah[i] = "Jeneponto";
				}
				else if (daerah == 4) {
					pDaerah[i] = "Takalar";
				}
				else if (daerah == 5) {
					pDaerah[i] = "Bantaeng";
				}
				else if (daerah == 6) {
					pDaerah[i] = "Bone";
				}
				else if (daerah == 7) {
					pDaerah[i] = "Bulukumba";
				}

			}
			else if (provinsi == 2) {
				pProvinsi[i] = "Jawa Timur";

				cout << "====================" << endl;
				cout << "       DAERAH       " << endl;
				cout << "====================" << endl;
				cout << "1.Surabaya          " << endl;
				cout << "2.Malang            " << endl;
				cout << "3.Lamongan          " << endl;
				cout << "4.Gresik            " << endl;
				cout << "5.Probolinggo       " << endl;
				cout << "6.Lumajang          " << endl;
				cout << "7.Kediri            " << endl;
				cout << "====================" << endl;
				cout << "Pilih Daerah : "; cin >> daerah;

				if (daerah == 1) {
					pDaerah[i] = "Surabaya";
				}
				else if (daerah == 2) {
					pDaerah[i] = "Malang";
				}
				else if (daerah == 3) {
					pDaerah[i] = "Lamongan";
				}
				else if (daerah == 4) {
					pDaerah[i] = "Gresik";
				}
				else if (daerah == 5) {
					pDaerah[i] = "Probolinggo";
				}
				else if (daerah == 6) {
					pDaerah[i] = "Lumajang";
				}
				else if (daerah == 7) {
					pDaerah[i] = "Kediri";
				}
			}
			else if (provinsi == 3) {
				pProvinsi[i] = "KALIMANTAN TIMUR";

				cout << "====================" << endl;
				cout << "        DESA        " << endl;
				cout << "====================" << endl;
				cout << "[1].BERAU         " << endl;
				cout << "[2].KUTAI           " << endl;
				cout << "[3].PASER            " << endl;
				cout << "[4].MAHAKAM        " << endl;
				cout << "[5].BALIKPAPAN          " << endl;
				cout << "[6].SAMARINDA            " << endl;
				cout << "[7].BONTANG        " << endl;
				cout << "====================" << endl;
				cout << "PILIH DAERAH : "; cin >> daerah;

				if (daerah == 1) {
					pDaerah[i] = "BERAU";
				}
				else if (daerah == 2) {
					pDaerah[i] = "KUTAI";
				}
				else if (daerah == 3) {
					pDaerah[i] = "PASER";
				}
				else if (daerah == 4) {
					pDaerah[i] = "MAHAKAM";
				}
				else if (daerah == 5) {
					pDaerah[i] = "BALIKPAPAN";
				}
				else if (daerah == 6) {
					pDaerah[i] = "SAMARINDA";
				}
				else if (daerah == 7) {
					pDaerah[i] = "BONTANG";
				}

			}
			else if (provinsi == 4) {
				pProvinsi[i] = "SUMATERA BARAT";

				cout << "====================" << endl;
				cout << "        DESA        " << endl;
				cout << "====================" << endl;
				cout << "[1].BUKITTINGGI        " << endl;
				cout << "[2].PADANG             " << endl;
				cout << "[3].PARIAMAN           " << endl;
				cout << "[4].SOLOK         " << endl;
				cout << "[5].PAYAKUMBUH            " << endl;
				cout << "[6].SAWAHLUNTO          " << endl;
				cout << "[7].PADANG           " << endl;
				cout << "====================" << endl;
				cout << "PILIH DAERAH : "; cin >> daerah;

				if (daerah == 1) {
					pDaerah[i] = "BUKITTINGGI";
				}
				else if (daerah == 2) {
					pDaerah[i] = "PADANG";
				}
				else if (daerah == 3) {
					pDaerah[i] = "PARIAMAN";
				}
				else if (daerah == 4) {
					pDaerah[i] = "SOLOK";
				}
				else if (daerah == 5) {
					pDaerah[i] = "PAYAKUMBUH";
				}
				else if (daerah == 6) {
					pDaerah[i] = "SAWAHLUNTO";
				}
				else if (daerah == 7) {
					pDaerah[i] = "PADANG";
				}
			}
			else if (provinsi == 5) {
				pProvinsi[i] = "PAPUA BARAT";
				cout << "====================" << endl;
				cout << "        DESA        " << endl;
				cout << "====================" << endl;
				cout << "[1].SORONG         " << endl;
				cout << "[2].MANOKWARI          " << endl;
				cout << "[3].MAYBRAT           " << endl;
				cout << "[4].RASIEI          " << endl;
				cout << "[5].SORONG           " << endl;
				cout << "[6].WAISAI            " << endl;
				cout << "[7].RANSIKI           " << endl;
				cout << "====================" << endl;
				cout << "PILIH DAERAH : "; cin >> daerah;

				if (daerah == 1) {
					pDaerah[i] = "SORONG";
				}
				else if (daerah == 2) {
					pDaerah[i] = "MANOKWARI";
				}
				else if (daerah == 3) {
					pDaerah[i] = "MAYBRAT";
				}
				else if (daerah == 4) {
					pDaerah[i] = "RASIEI";
				}
				else if (daerah == 5) {
					pDaerah[i] = "SORONG";
				}
				else if (daerah == 6) {
					pDaerah[i] = "WAISAI";
				}
				else if (daerah == 7) {
					pDaerah[i] = "HARUO";
				}
			}

			i++;
		}
		else if (pilih == 2) {

			cout << "MASUKKAN NISN : "; cin >> Unisn;
			for (int k = 0; k < i; k++) {

				if (Unisn == nisn[k]) {
					f = k;
					data = true;
					break;
				}
				else {
					data = false;
				}

			}

			if (data == true) {

				cout << "NAMA     : " << nama[f] << endl;
				cout << "NISN     : " << nisn[f] << endl;
				cout << "SEKOLAH  : " << sekolah[f] << endl;
				cout << "ALAMAT   : " << alamat[f] << endl;
				cout << "UMUR     : " << umur[f] << endl;
				cout << "PROVINSI : " << pProvinsi[f] << endl;
				cout << "DAERAH   : " << pDaerah[f] << endl;

			}
			else {
				cout <<endl;
				cout << "    Data Tidak Ditemukan   " << endl;
			}

		}
		else if (pilih == 3) {

			cout << "MASUKKAN NISN : "; cin >> Unisn;
			for (int t = 0; t < i; t++) {

				if (Unisn == nisn[t]) {
					
					f = t;
					data = true;
					break;

				}
				else {

					data = false;

				}

			}

			if (data == true) {
				
				cout << "Masukkan NISN Baru    : "; cin >> Ubahnisn;
				for (int m = 0; m < i; m++) {
					if (nisn[m] == Ubahnisn) {
						goto c;
					}
				}
				nisn[f] = Ubahnisn;
				cout << "Masukkan Nama    : "; cin.ignore(); getline(cin, nama[f]);
				cout << "Masukkan Sekolah : "; cin.ignore(); getline(cin, sekolah[f]);
				cout << "Masukkan Alamat  : "; cin.ignore(); getline(cin, alamat[f]);
				cout << "Masukkan Umur    : "; cin >> umur[f];

				cout << "====================" << endl;
				cout << "       PROVINSI     " << endl;
				cout << "====================" << endl;
				cout << "[1].Sulawesi Selatan" << endl;
				cout << "[2].Jawa Timur  " << endl;
				cout << "[3].Kalimantan Timur " << endl;
				cout << "[4].Sumatera Barat  " << endl;
				cout << "[5].Papua Barat " << endl;
				cout << "====================" << endl;

				cout << "Pilih Provinsi   : "; cin >> provinsi;

				if (provinsi == 1) {
					pProvinsi[f] = "SULAWESI SELATAN";

					cout << "====================" << endl;
					cout << "       DAERAH       " << endl;
					cout << "====================" << endl;
					cout << "[1].MAKASSAR        " << endl;
					cout << "[2].GOWA            " << endl;
					cout << "[3].JENEPONTO       " << endl;
					cout << "[4].TAKALAR         " << endl;
					cout << "[5].BANTAENG        " << endl;
					cout << "[6].BONE            " << endl;
					cout << "[7].BULUKUMBA       " << endl;
					cout << "====================" << endl;
					cout << "PILIH DAERAH : "; cin >> daerah;

					if (daerah == 1) {
						pDaerah[f] = "MAKASSAR";
					}
					else if (daerah == 2) {
						pDaerah[f] = "GOWA";
					}
					else if (daerah == 3) {
						pDaerah[f] = "JENEPONTO";
					}
					else if (daerah == 4) {
						pDaerah[f] = "TAKALAR";
					}
					else if (daerah == 5) {
						pDaerah[f] = "BANTAENG";
					}
					else if (daerah == 6) {
						pDaerah[f] = "BONE";
					}
					else if (daerah == 7) {
						pDaerah[f] = "BULUKUMBA";
					}
				}
				else if (provinsi == 2) {
					pProvinsi[f] = "JAWA TIMUR";

					cout << "====================" << endl;
					cout << "       DAERAH       " << endl;
					cout << "====================" << endl;
					cout << "[1].SURABAYA             " << endl;
					cout << "[2].MALANG        " << endl;
					cout << "[3].LAMONGAN          " << endl;
					cout << "[4].GRESIK         " << endl;
					cout << "[5].PROBOLINGGO           " << endl;
					cout << "[6].LUMAJANG          " << endl;
					cout << "[7].KEDIRI             " << endl;
					cout << "====================" << endl;
					cout << "PILIH DAERAH : "; cin >> daerah;

					if (daerah == 1) {
						pDaerah[f] = "SURABAYA";
					}
					else if (daerah == 2) {
						pDaerah[f] = "MALANG";
					}
					else if (daerah == 3) {
						pDaerah[f] = "LAMONGAN";
					}
					else if (daerah == 4) {
						pDaerah[f] = "GRESIK";
					}
					else if (daerah == 5) {
						pDaerah[f] = "PROBOLINGGO";
					}
					else if (daerah == 6) {
						pDaerah[f] = "LUMAJANG";
					}
					else if (daerah == 7) {
						pDaerah[f] = "KEDIRI";
					}
				}
				else if (provinsi == 3) {
					pProvinsi[f] = "KALIMANTAN TIMUR";
					cout << "====================" << endl;
					cout << "        DESA        " << endl;
					cout << "====================" << endl;
					cout << "[1].BERAU         " << endl;
					cout << "[2].KUTAI           " << endl;
					cout << "[3].PASER            " << endl;
					cout << "[4].MAHAKAM        " << endl;
					cout << "[5].BALIKPAPAN          " << endl;
					cout << "[6].SAMARINDA            " << endl;
					cout << "[7].BONTANG        " << endl;
					cout << "====================" << endl;
					cout << "PILIH DAERAH : "; cin >> daerah;

					if (daerah == 1) {
						pDaerah[f] = "BERAU";
					}
					else if (daerah == 2) {
						pDaerah[f] = "KUTAI";
					}
					else if (daerah == 3) {
						pDaerah[f] = "PASER";
					}
					else if (daerah == 4) {
						pDaerah[f] = "MAHAKAM";
					}
					else if (daerah == 5) {
						pDaerah[f] = "BALIKPAPAN";
					}
					else if (daerah == 6) {
						pDaerah[f] = "SAMARINDA";
					}
					else if (daerah == 7) {
						pDaerah[f] = "BONTANG";
					}
				}
				else if (provinsi == 4) {
					pProvinsi[f] = "SUMATERA BARAT";

					cout << "====================" << endl;
					cout << "        DESA        " << endl;
					cout << "====================" << endl;
					cout << "[1].BUKITTINGGI        " << endl;
					cout << "[2].PADANG             " << endl;
					cout << "[3].PARIAMAN           " << endl;
					cout << "[4].SOLOK              " << endl;
					cout << "[5].PAYAKUMBUH         " << endl;
					cout << "[6].SAWAHLUNTO          " << endl;
					cout << "[7].PADANG           " << endl;
					cout << "====================" << endl;
					cout << "PILIH DAERAH : "; cin >> daerah;

					if (daerah == 1) {
						pDaerah[f] = "BUKITTINGGI";
					}
					else if (daerah == 2) {
						pDaerah[f] = "PADANG";
					}
					else if (daerah == 3) {
						pDaerah[f] = "PARIAMAN";
					}
					else if (daerah == 4) {
						pDaerah[f] = "SOLOK";
					}
					else if (daerah == 5) {
						pDaerah[f] = "PAYAKUMBUH";
					}
					else if (daerah == 6) {
						pDaerah[f] = "SAWAHLUNTO";
					}
					else if (daerah == 7) {
						pDaerah[f] = "PADANG";
					}
				}
				else if (provinsi == 5) {
					pProvinsi[f] = "PAPUA BARAT";

					cout << "====================" << endl;
					cout << "        DESA        " << endl;
					cout << "====================" << endl;
					cout << "[1].SORONG         " << endl;
					cout << "[2].MANOKWARI          " << endl;
					cout << "[3].MAYBRAT           " << endl;
					cout << "[4].RASIEI          " << endl;
					cout << "[5].SORONG           " << endl;
					cout << "[6].WAISAI            " << endl;
					cout << "[7].RANSIKI           " << endl;
					cout << "====================" << endl;
					cout << "PILIH DAERAH : "; cin >> daerah;

					if (daerah == 1) {
						pDaerah[i] = "SORONG";
					}
					else if (daerah == 2) {
						pDaerah[i] = "MANOKWARI";
					}
					else if (daerah == 3) {
						pDaerah[i] = "MAYBRAT";
					}
					else if (daerah == 4) {
						pDaerah[i] = "RASIEI";
					}
					else if (daerah == 5) {
						pDaerah[i] = "SORONG";
					}
					else if (daerah == 6) {
						pDaerah[i] = "WAISAI";
					}
					else if (daerah == 7) {
						pDaerah[i] = "RANSIKI";
					}

					cout << "====================" << endl;
					cout << "    DATA TERUBAH    " << endl;
					cout << "====================" << endl;

				}
				else {
					cout << "====================" << endl;
					cout << "   DATA TIDAK ADA   " << endl;
					cout << "====================" << endl;
				}
			}
		}
		else if (pilih == 4) {

		d = 0;
		cout << "Masukkan NISN : "; cin >> Unisn;

		for (int k = 0; k < i; k++) {
			if (nisn[k] == Unisn) {

				j = k;
				i--;
				d++;
				break;

			}
		}

		if (d == 1) {

			for (int y = j; y < i; y++) {

				nama[y] = nama[y + 1];
				nisn[y] = nisn[y + 1];
				sekolah[y] = sekolah[y + 1];
				alamat[y] = alamat[y + 1];
				pProvinsi[y] = pProvinsi[y + 1];
				pDaerah[y] = pDaerah[y + 1];

			}

			cout << "    Data Terhapus   " << endl;
		}
		else {
			cout << "   Data Tidak Ada   " << endl;
			}

		}
		else if (pilih == 5) {

		cout << "        USER         " << endl;
			for (int h = 0; h < i; h++) {

				cout << "[" << h + 1 << "]." << nama[h] << endl;

			}

		cout << "====================" << endl;

		}
		else if (pilih == 6) {
			return 0;
		}
		else {

			cout << "Pilihan Tidak Ada" << endl;

		}
			
		cout << "Kembali? [Y/N] : "; cin >> ulang;
	}while (ulang == "Y");

}
