#include <iostream>
using namespace std;

int main(){
	
	int a,b;

	cout <<"Masukan baris : ";cin >> a;
	for(int i=0;i<= a;i++){
		for(b=0;b<=i;b++){
			if( b % 7 == 0){
				cout <<"A";
			}else if(b %  7 == 1){
				cout <<"B";
			}else if(b % 7 == 2){
				cout << "C";
			}else if(b % 7 == 3){
				cout<< "D";
			}else if(b % 7 == 4){
				cout << "E";
			}else if(b % 7 == 5){
				cout << "F";
			}else if(b % 7 == 6){
				cout << "G";
			}
			
		}
		cout<<endl;
	}
}
