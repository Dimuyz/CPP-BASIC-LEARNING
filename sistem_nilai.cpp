#include <iostream>
#include <string>
using namespace std;

void tampilkanJudul1() {
	cout << "=== SISTEM NILAI SISWA ===" << std::endl;
} 

void tampilanJudul2() {
	cout << "=== HASIL TES SISWA ===" << std::endl;
}

void tampilkanHasil(string nama, string predikat, int nilai) {
	cout << "nama siswa: " << nama << std::endl;
	cout << "nilai siswa: " << nilai << std::endl;
	cout << "predikat: " << predikat << std::endl;
}
int main() {
	tampilkanJudul1();
	
	string nama;
	int nilai;
	string predikat;
	cout << "masukan nama siswa: ";
	cin >> nama;
	cout << "masukan nilai siswa: ";
	cin >> nilai;
	if (nilai >= 75) {
		predikat = "lulus";
	} else {
		predikat = "tidak lulus";
	}
	tampilanJudul2();
	tampilkanHasil(nama, predikat, nilai);	 
	
	return 0;
}
