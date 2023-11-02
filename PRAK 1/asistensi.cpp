#include <iostream>
using namespace std;
int main(){
	
	int nilai;
	
	cout <<"PROGRAM PERINGKAT" <<endl;
	cout <<"Masukan nilai : ";cin >> nilai;
	if( nilai <= 100 and nilai >= 80 ){
		cout <<"nilai anda A";
	}else if( nilai <=80 and nilai >= 70){
		cout <<"nilai anda B";
	}else if( nilai <=70 and nilai >=60){
		cout <<"nilai anda C";
	}else if( nilai <=60 and nilai >=50){
		cout <<"nilai anda D";
	}else{
		cout <<"nilai anda E";
	}
}
