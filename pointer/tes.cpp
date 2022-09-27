#include <iostream>
using namespace std;

int main (){

	cout << "KELOMPOK 3 - POINTER" << endl;
	cout << "Kelas 02TPLM005" << endl;
	
	int a = 5;

	int *aPtr = &a;
	
	//Int a memiliki nilai dan alamat [alamat]
	cout << "Nilai atau Value dari a :" << a << endl;	
	cout << "Alamat atau Address dari a :" << &a << endl;
	cout << "Alamat atau Address dari pointer a :" << aPtr << endl;
	cout << "Nilai atau Value dari Address Pointer a : " << *&a << endl;
	
	//Deferencing, mengambil data dari sebuah pointer
	int b = 10;
	int *bPtr = &b;
	
	cout << "Mengambil nilai dari pointer bPtr =" << *bPtr << endl;
	
	//Null Pointer
	
	int *cPtr = nullptr;
	
	cout << "Pointer C : " << *cPtr << endl;
	
	return 0;
	
	
	
}
