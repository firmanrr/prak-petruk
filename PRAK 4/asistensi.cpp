#include <iostream>
#include <string>
using namespace std;

struct toko
{
	string namaBarang;
	string kategoriBarang;
	int harga;

};

int main() {

	toko barang[100];
	int jumlahBarang;

	cout << "masukan jumlah barang : "; cin >> jumlahBarang;
	for (int i = 0; i < jumlahBarang; i++) {
		cout << "Barang ke - " << i + 1 << endl;
		cout << "Nama barang     : "; cin >> barang[i].namaBarang;
		cout << "Kategori barang : "; cin.ignore(); getline(cin, barang[i].kategoriBarang);
		cout << "Harga barang    : "; cin >> barang[i].harga;
	}

	cout <<endl;
	cout <<"	HASIL	"<<endl;
	for (int j = 0; j < jumlahBarang; j++) {
		cout << "Barang ke- " << j + 1 << endl;
		cout << "Nama barang     : " << barang[j].namaBarang << endl;
		cout << "Kategori barang : " << barang[j].kategoriBarang << endl;
		cout << "Harga barang    : " << barang[j].harga << endl;
	}

}
