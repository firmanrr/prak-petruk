#include <iostream>
using namespace std;
int main(){
	
	int hargasepeda,hargaawal,jumlahcicilan,totalpengeluaran,bunga,untung,jangkawaktu;
	
	cout <<" Program Cicilan Sepeda" <<endl;
	
	cout <<" Harga sepeda :";
	cin >> hargasepeda;
	cout <<" Jangka waktu cicilan :";
	cin >>jangkawaktu;
	cout <<endl;
	
	cout <<" Rincian biaya dan keuntungan" <<endl;
	
	hargaawal = hargasepeda/jangkawaktu;
	bunga = hargaawal*0.1;
	jumlahcicilan = hargaawal+bunga;
	totalpengeluaran = jumlahcicilan*jangkawaktu;
	untung = totalpengeluaran - hargasepeda;
	
	cout <<"cicilan perbulan    : Rp." << jumlahcicilan <<endl;
	cout <<"total harga cicilan : Rp." << totalpengeluaran <<endl;
	cout <<"keuntungan dealer   : Rp." << untung <<endl;
} 
