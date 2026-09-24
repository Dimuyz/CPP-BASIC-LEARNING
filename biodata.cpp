#include <iostream>
using namespace std;
int main() {
    string nama;
    int umur;
    string kelas;
    string bahasa;
    double nilai;
    string cita2;

    cout << "=========" << " BIODATA DIRI " << "==========" << std::endl;
    cout << "siapa namamu: ";
    cin >> nama;
    cout << "berapa umurmu: ";
    cin >> umur;
    cout << "kelas berapa kamu: ";
    cin >> kelas;
    cout << "bahasa pemrograman kesukaan: ";
    cin >> bahasa;
    cout << "nilai codingan: ";
    cin >> nilai;
    cout << "apa cita citamu: ";
    cin >> cita2;

    cout << "jadi namamu adalah, " << nama << std::endl;
    cout << "umurmu adalah, " << umur << " tahun" << std::endl;
    cout << "kamu sekarang adalah kelas, " << kelas << std::endl;
    cout << "bahasa pemrograman kesukaanmu, " << bahasa << std::endl;
    cout << "nilai codinganmu adalah, " << nilai << std::endl;
    cout << "dan cita citamu adalah, " << cita2 << std::endl;

if (umur > 15) {
    cout << "umurmu adalah " << umur << " artinya dewasa";
}
else if (umur > 100) {
    cout << umur << "??? ga masuk akal mas";
}
else if (umur < 0) {
    cout << "oke, mines makin ga masuk akal";
} else {
    cout << "maaf umur tidak valid";
} {
    return 0;
}
}