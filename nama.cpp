#include <iostream>
using namespace std;
int main() {
    string nama;
    int umur;

    cout << "===== DATA DIRI =====" << endl;
    cout << "Masukan nama: ";
    cin >> nama;
    cout << "Masukan umur: ";
    cin >> umur;

cout << "halo, " << nama << std::endl;
if (umur > 15) {
    cout << "umur sudah dewasa";
}
else if (umur > 100) {
    cout << "umur tidak masuk akal";
}
else if (umur < 0) {
    cout << "umur tidak bisa mines";
} else {
    cout << "umur tidak valid";
}
}