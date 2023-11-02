#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a,b,c;
	double d;
	
	cout <<" Program Menghitung Sisi Miring dan Keliling Segitiga Siku-Siku" << endl;
	cout <<endl;
	cout <<" Masukkan alas segitiga : ";
	cin >> a;
	cout <<" Masukkan tinggi segitiga : "; 
	cin >> b;
	
	c = sqrt((a*a)+(b*b));
	d = a+b+c;
	
	cout <<endl;
	cout <<" Sisi miring segitiga adalah : " << c << endl;
	cout <<" Hasil kelilingnya adalah : " << d;
}
