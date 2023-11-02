#include <iostream>
using namespace std;
int main(){

	int ulang;
	cout << "Jumlah perulangan : "; cin >> ulang;
	
	for (int i=1 ; i<= ulang ; i++){
		for (int j = ulang ; j>= i ; j--){
			cout << "*";
		}
		cout << endl;
	}
	for(int i= 1; i<= ulang; i++){
		for (int j = 1 ; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
}
