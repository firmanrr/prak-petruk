#include <iostream>
 
using namespace std;
 
int main()
{
 int deret,i;
 
 cout << "Masukkan Jumlah Deret : ";
 cin >> deret;
 
 cout << endl;
 int j = 2;
 int c = 0;
 for (i= 1;i<= deret;i++) {
 	cout << j<< " ";
 	c++;
	j = j +  c;
 }
 
 cout << endl;
 return 0;
}
