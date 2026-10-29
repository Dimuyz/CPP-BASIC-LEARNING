  #include <iostream>
#include <string>
using namespace std;

int main() {
	/////////////////////////////////////////////////////////// TUGAS OPERATOR LOGIKA 2-11 /////////////////////////////////////////////////////////////
    int teori, praktik;
    cout << "tugas 2" << std::endl;
    cout << "minimal nilai teori: 75" << std::endl;
    cout << "masukkan nilai teori siswa: ";
    cin >> teori;
    cout << "\n";
    cout << "minimal nilai praktek: 75" << std::endl;
    cout << "masukkan nilai praktik siswa: ";
    cin >> praktik;

    if ((teori >= 75) && (praktik >= 75)) {
        cout << "LULUS" << std::endl;
    } else {
        cout << "TIDAK LULUS" << std::endl;
    } 
    cout << "\n" << std::endl; // tugas 2


    
    int rata_rata1;
	string kehadiran1;
	cout << "tugas 3" << std::endl;
    cout << "contoh memasukan nilai rata rata: 90" << std::endl;
    cout << "minimal nilai rata rata: 85" << std::endl;
    cout << "Masukkan nilai rata-rata: ";
    cin >> rata_rata1;
    cout << "\n";
    cout << "pemasukan hadir wajib menggunakan persen-!" << std::endl;
    cout << "contoh: 76%" << std::endl;
    cout << "Masukkan persentase kehadiran: ";
    cin >> kehadiran1;

    if ((rata_rata1 >= 85) && (kehadiran1 >= "90%")) {
        cout << "MENDAPATKAN BEASISWA" << endl;
    } else {
        cout << "TIDAK MENDAPATKAN BEASISWA" << endl;
    }
    cout << "\n" << std::endl; // tugas 3

    
    
   string status_member;
   int total_belanja;
   cout << "tugas 4" << std::endl;
   std::cout << "masukan status member (ya/tidak): ";
   cin >> status_member;
   cout << "\n";
   cout << "total belanja minimal: (500000)" << std::endl;
   std::cout <<"masukan total balanja: ";
   cin >> total_belanja;
   
   if((status_member == "ya") || (total_belanja >= 500000)) {
   	int diskon = 10;
   	cout << "diskon: " << diskon << std::endl;
   	cout << "anda mendapat diskon sebanyak " << diskon << "%" << std::endl;
   } else {
   	int diskon = 0;
   	cout << "anda tidak mendapat diskon" << std::endl;
   }
   cout << "\n" << std::endl; // tugas 4
   

   string usn1;
   string pwd1;
   string usn2;
   string pwd2;
   cout << "tugas 5" << std::endl;
   cout << "silahkan buat username: ";
   cin >> usn1;
   cout << "silahkan buat password: ";
   cin >> pwd1;
   cout << "username dan password telah berhasil dibuat-!" << std::endl;
   cout << "\n";
   
   cout << "konfirmasi username: ";
   cin >> usn2;
   cout << "konfirmasi password: ";
   cin >> pwd2;
   if ((usn2 == usn1) && (pwd2 == pwd1)) {
   	cout << "anda berhasil login-!" << std::endl;
   }  else {
   	cout << "maaf login gagal-!" << std::endl;
   }
   cout << "\n" << std::endl; // tugas 5
   
   int belanja;
   string premium;
   cout << "tugas 6" << std::endl;
   cout << "total belanja minimal: (300000)" << std::endl;
   cout << "masukan total belanja: ";
   cin >> belanja;
   cout << "\n";
   
   cout << "masukan status member premium (ya/tidak): ";
   cin >> premium;
   if ((belanja >= 300000) || (premium =="ya")) {
   	cout << "mendapat gratis ongkir" << endl;
   } else {
   	cout << "bayar ongkir" << endl;
   }
   cout << "\n" << std::endl; //tugas 6
   
   
   string kartu_pelajar;
   string izin_guru;
   cout << "tugas 7" << std::endl;
   std::cout << "memiliki kartu pelajar (ya/tidak): ";
   cin >> kartu_pelajar;
   cout << "\n";
   std::cout << "memiliki izin guru: (ya/tidak): ";
   cin >> izin_guru;
   if ((kartu_pelajar == "ya") && (izin_guru == "ya")) {
   	cout << "silahkan masuk" << std::endl;
   } else {
   	cout << "dilarang masuk" << std::endl;
   }
   cout << "\n" << std::endl; //tugas 7
   
   
   string pengguna_baru;
   int transaksi;
   cout << "tugas 8" << std::endl;
   cout << "apakah anda pengguna baru? (ya/tidak): ";
   cin >> pengguna_baru;
   cout << "\n";
   cout << "minimal total transaksi: (1000000)" << std::endl;
   cout << "masukan total transaksi: ";
   cin >> transaksi;
   
   if((pengguna_baru == "ya") || (transaksi >= 1000000)) {
   	cout << "mendapat voucher" << endl;
   } else {
   	cout << "tidak mendapat voucher" << endl;
   }
   cout << "\n" << std::endl; //tugas 8
   
   
   string diblokir;
   cout << "tugas 9" << std::endl;
    cout << "Apakah akun diblokir? (ya/tidak): ";
    cin >> diblokir;

    if (!(diblokir == "ya")) {
        cout << "Transaksi diizinkan." << endl;
    } else {
        cout << "Transaksi ditolak karena akun diblokir." << endl;
    }
    cout << "\n" << std::endl; //tugas 9
    
    
    
    int nilai;
    string pengalaman_lomba, juara_prov;
    cout << "tugas 10" << std::endl;
    cout << "minimal nilai pemrograman: 80" << std::endl;
    cout << "Masukkan nilai pemrograman: ";
    cin >> nilai;

    cout << "apakah anda memiliki pengalaman lomba sebelumnya? (ya/tidak): ";
    cin >> pengalaman_lomba;

    cout << "apakah anda pernah juara 1 lomba coding tingkat sekolah? (ya/tidak): ";
    cin >> juara_prov;

    if ((nilai >= 80 && pengalaman_lomba == "ya") || juara_prov == "ya") {
        cout << "Siswa dapat mengikuti lomba coding." << endl;
    } else {
        cout << "Siswa tidak dapat mengikuti lomba coding." << endl;
    cout << "\n" << std::endl; // tugas 10
    
    
    
    int rata_rata;
    int kehadiran1;
    string prestasi;
    cout << "tugas 11" << std::endl;
    cout << "nilai rata rata minimal 90 atau 85" << std::endl;
    cout << "masukan nilai rata rata: ";
    cin >> rata_rata;
    cout << "\n";
    
    cout << "jangan lupa gunakan %" << std::endl;
    cout << "minimal presentase kehadiran adalah: 95%" << std::endl;
    cout << "masukan presentase kehadiran: ";
    cin >> kehadiran1;
    cout << "apakah anda memiliki prestasi tingkat provinsi? (ya/tidak): ";
    cin >> prestasi;
    
    if ((rata_rata >= 90 && kehadiran1 >= 95) || (rata_rata >= 85 && prestasi == "YA")) {
    	cout << "syarat nilai terpenuhi siswa layak mendapat beasiswa" << std::endl;
	} else {
		cout << "syarat nilai tidak terpenuhi harap coba lain kali" << std::endl;
	} // tugas 11
    
    return 0;
    }
    
}
