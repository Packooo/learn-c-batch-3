#include <iostream>
using namespace std;

int main(){
	int a=5, b=10;
	
	b += a ; //pengisian dan penambahan, ini sama seperti b = b + a
	
	a=5 , b=10;
	b -= a ; //pengisian dan pengurangan, ini sama seperti b = b - a
	cout <<"Hasil b -= a adalah " <<b <<endl;
	
	a=5 , b=10;
	b *= a ; //pengisian dan perkalian, ini sama seperti b = b * a
	cout <<"Hasil b *= a adalah " <<b <<endl;
	
	a=5 , b=10;
	b /= a ; //pengisian dan pembagian, ini sama seperti b = b - a
	cout <<"Hasil b /= a adalah " <<b <<endl;
	
	a=5 , b=10;
	b /= a ; //pengisian dan penambahan, ini sama seperti b = b - a
	cout <<"Hasil b %= a adalah " <<b <<endl;
}