#include <iostream>
using namespace std;

int main(){

	int baris,i,j,k;
	cout << "masukan baris: "; cin >> baris;
	cout << endl;
	
	for(i=1;i<=baris;i++) {
		
		for(j=1;j<=baris-i;j++) {
		cout << " ";
		}
	
		for(k=1;k<=i;k++) {
		cout << " *";
		}
		cout << endl;
	}
	
		for(i=1;i<baris;i++){
			
			for(j=1;j<=i;j++) {
			cout << " ";
			}
			
			for(k=1;k<=baris-i;k++) {
			cout << " *";
		}
    	cout << endl;
		}
			
	return 0;
}
