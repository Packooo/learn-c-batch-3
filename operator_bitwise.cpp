#include <iostream>
using namespace std;

int main(){
	int a = 6 , b = 3, hasil;
	
	//menggunakan operator bitwise and
	hasil = a & b;
	cout<<"a & b = " <<hasil <<endl;
	
	//menggunakan operator or
	hasil = a | b;
	cout<<"a | b = " <<hasil <<endl;
	
	//menggunakan operator bitwise xor
	hasil = a ^ b;
	cout<<"a ^ b = " <<hasil <<endl;
	
	//menggunakan operator bitwise not
	hasil = ~a;
	cout<<"~a = " <<hasil <<endl;
	
	//menggunakan operator bitwise left shift
	hasil = a << 1;
	cout<<"a <<1 = " <<hasil <<endl;
	
	//menggunakan operator bitwise right shift
	hasil = a >>1 ;
	cout<<"a >>1 = " <<hasil <<endl;
}