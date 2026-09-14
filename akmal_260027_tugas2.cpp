#include <iostream>
using namespace std;

int main(){
    int uang, kode, airMineral, tehBotol, kopiSusu;

    switch (kode) {
        case 1:
        if (uang >= 4000){
            cout << "Transaksi Berhasi. Kembalian Anda: " << uang - 4000;
        } else {
            cout << "Kembalian Gagal! Uang Anda kurang";
        }
        
        case 2:
        if (uang >= 6000){
            cout << "Transaksi Berhasil. Kembalian Anda: " << uang - 6000 ;
        } else {
            cout << "Transaksi Gagal! Uang Anda kurang";
        }

        case 3:
        if (uang >= 10000){
            cout << "Transaksi Berhasil. Kembalian Anda: " << uang - 10000;
        } else {
            cout << "Transaksi Gagal! Uang Anda kurang";
        }


    }
    
    cout << " === VENDING MACHINE AUTOMA ===";
    cout << "Pilihan Minuman: " "<< 1. Air Mineral (Rp4000)" "<< 2. Teh Botol(Rp6000)" "<< 3. Kopi Susu (Rp10000)";
    cout << "Pilih kode minuman (1:3): ";
    cin >> kode;
    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;


    

}