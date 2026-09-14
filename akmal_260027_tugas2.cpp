#include <iostream>
using namespace std;

int main(){
    int uang, kode, harga;
    string namaMinuman;

    cout << " === VENDING MACHINE AUTOMATION ===" << endl;
    cout << "Pilihan Minuman: " << endl << "1. Air Mineral (Rp4000)" << endl << "2. Teh Botol(Rp6000)" << endl << "3. Kopi Susu (Rp10000)" << endl;
    cout << "Pilih kode minuman (1:3): ";
    cin >> kode;

    switch (kode) {
        case 1:
            namaMinuman = "Air Mineral";
            harga = 4000;
            break;

        case 2:
            namaMinuman = "Teh Botol";
            harga = 6000;
            break;

        case 3:
            namaMinuman = "Kopi Susu";
            harga = 10000;
            break;

        default: 
            cout << "Kode minuman tidak tersedia." << endl;
            return 0;
    }

    cout << "Masukkan Uang Anda (Rp): ";
    cin >> uang;

    cout << "\n--- DETAIL TRANSAKSI ---" << endl;

    if (uang < harga) {
        int kekurangan = harga-uang;
        cout << "Transaksi Gagal! Uang Anda kurang Rp" << kekurangan << "." << endl;
    } else {
        int kembalian = uang-harga;
        cout << "Transaksi Berhasil! Belanja Anda:" << namaMinuman << "." << endl;
        cout << "Total Kembalian: Rp " << kembalian << endl;

        int lembar5k = kembalian / 5000;
        int sisa = kembalian % 5000;
        int lembar1k = sisa / 1000;

        cout << "Rincian Kembalian:" << endl;
        cout << "Lembar Rp5.000: " << lembar5k << endl;
        cout << "Lembar Rp1.000: " << lembar1k << endl;
    }
    return 0;
}