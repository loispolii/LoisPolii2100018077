#include <iostream>
using namespace std;

int main ()
{
	char yt;
	cout<< "####################\n";
	cout<< "KALKULATOR SEDERHANA\n";
	cout<< "####################\n\n";
	
	
	cout<< "Ingin menggunakan kalkulator? (y|t)";
	cin>>yt;
	cout<< "\n\n";
	
	string nama;
	cout<< "Konfirmasikan nama untuk menggunakan kalkulator  ->->";
	cin>>nama;
	cout<< "\n\n";

	int choice;
	int angka_pertama,angka_kedua;
	float hasil;
	char tanda;
	
	cout<< "Angka pertama  "; cin>>angka_pertama;
	cout<< "\nAngka kedua  "; cin>>angka_kedua;
	
	cout<< "\t\tMenu pilihan\n";
	cout<< "\tPENAMBAHAN (+) \n";
	cout<< "\tPENGURANGAN (-) \n";
	cout<< "\tPERKALIAN (*) \n";
	cout<< "\tPEMBAGIAN (/) \n";
	cout<< "Masukkan pilihan = ";
	cin>>choice;

	cout<< "Hasil operasi " << angka_pertama << choice << angka_kedua << endl;
	
	if(choice == 1)
	{
		hasil = angka_pertama + angka_kedua;
	}
	else if (choice == 2)
	{
		hasil = angka_pertama - angka_kedua;
	}
	else if (choice == 3)
	{
		hasil = angka_pertama * angka_kedua;
	}
	else if (choice == 4)
	{
		hasil = angka_pertama / angka_kedua;
	}
	return 0;
}
