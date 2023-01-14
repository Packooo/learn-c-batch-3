#include <iostream>
using namespace std;

int main(){
	int a = 4;
	
	//menampilkan nilai abort
	cout<<"nilai a adalah " <<a <<endl;
	
	//menggunakan operator ternary
	string hasil = a > 1 ? "benar": "salah";
	
	cout << "a>1 adalah " <<hasil <<endl;
}