#include <iostream>
using namespace std;
int main(){
	float praktikum,teori,tugas,hasil,praktikum2,teori2,tugas2;
	
	cout <<" Program Meghitung Nilai Rata-Rata Pemrograman Struktur" <<endl;
	cout <<endl;
	cout <<" Masukkan nilai praktikum :";
	cin >> praktikum;
	cout <<" Masukkan nilai teori :";
	cin >> teori;
	cout <<" Masukkan nilai tugas dan final :";
	cin >> tugas;
	
	praktikum2 = praktikum*0.40;
	teori2 = teori*0.40;
	tugas2 = tugas*0.20;
	hasil = praktikum2+teori2+tugas2;
	
	cout <<" Nilai rata-rata pemrograman struktur adalah :" <<hasil;
}
