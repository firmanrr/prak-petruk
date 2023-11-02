#include <iostream>
using namespace std;

int cariPangkat(int a,int b){
	if (b == 1)
		return a;
		else
		return a*cariPangkat(a,(b-1));
	}

main(){
	int a,b;
	cout <<" Angka 1 : ";cin >>a;
	cout <<" Angka 2 : ";cin >>b;
	cout <<"-----------"<<endl;
	cout <<" Hasil   : "<<cariPangkat(a,b);
	cout <<endl;
}
