#include <iostream>
#include <string>
using namespace std;

int main(){
	string nama2;
	string nama;
	int umur;
	string Namalengkap;
	double panjang, lebar;
	int a = 10, b = 3;
	int umur7 = 15;
	bool punyaKTP = true;
	
	
	cout << "Soal 1" << std::endl;
	cout << "Halo Dimaz! welcome to Dev C++" << std::endl; //tugas 1
	cout << " " << endl;
	
	cout << "Soal 2" << std::endl;
	cout << "masukan nama: ";
	getline(cin, nama2);
	cout << "Halo, " << nama2 << std::endl; //tugas 2
	cout << " " << endl;
	
	
	cout << "Soal 3" << std::endl;
	cout << "Masukan umur: ";
	cin >> umur;
	cout << "Tahun depan: " << umur + 1 << std::endl; //tugas 3
	cout << " " << endl;
	
	
	cout << "Soal 4" << std::endl;
	cin.ignore();
	cout << "Masukan nama lengkap: ";
	getline(cin, Namalengkap);
	cout << "Halo, " << Namalengkap << "!" << std::endl; //tugas 4
	cout << " " << endl;
	
	
	cout << "Soal 5" << std::endl;
	cout << "Masukan panjang: ";
	cin >> panjang;
	cout << "Masukan lebar: ";
	cin >> lebar;
	cout << "Luas = " << panjang * lebar << "cm" << std::endl;
	cout << " " << endl; //tugas 5
	
	cout << "Soal 6" << std::endl;
	cout <<  a + b << std::endl;
	cout << a - b << std::endl;
	cout << a * b << std::endl;
	cout << a / b << std::endl;
	cout << a % b << std::endl;
	cout << " " << endl; //tugas 6
	
	cout <<  "Soal 7" << std::endl;
	cout << boolalpha;
	
	cout << (umur7 >= 17) << std::endl;
	cout << (umur7 == 20 && punyaKTP) << std::endl;
	cout << (umur7 < 17 || punyaKTP) << std::endl;
	cout << !punyaKTP << std::endl;
	cout << " " << endl; //tugas 8
	
	cout << "Soal 8" << std::endl;
	int nilai, hadir;
	cout << "Nilai dan kehadiran (%): ";
	cin >> nilai >> hadir;
	
	bool lulus = nilai >= 70 && hadir >= 75;
	cout << "lulus? " << boolalpha << lulus << endl; //tugas 8
	
	
	return 0;
}
