#include <iostream>
using namespace std;
int main(){
	
	cout <<" DOSEN "<<endl;
	string nama[4];
	string nip[4];
	int umur[4];
	string hp[4];
	
	for(int i= 0;i<4;i++){
		cin.ignore();
		cout <<" input data ke"<<i+1<<endl;
		cout <<" masukan nama dosen :";getline(cin,nama[i]);
		cout <<" masukan nip dosen :";getline(cin,nip[i]);
		cout <<" masukan umur :";cin >>umur[i];
		cout <<" masukan nomor hp :";cin >>hp[i];
		cout <<endl;
	}
	cout <<" Data Dosen "<<endl;
	for (int i=0;i<4;i++){
		cout <<" Data "<<i+1<<endl;
		cout <<" nama dosen :"<<nama[i]<<endl;
		cout <<" nip dosen :"<<nip[i]<<endl;
		cout <<" umur dosen :"<<umur[i]<<endl;
		cout <<" nomor handphone :"<<hp[i]<<endl;
		}
	}
