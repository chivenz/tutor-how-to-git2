#include <iostream>
using namespace std;


int main(){
    int belanja;
    cout << " --- Kalkulator Kasir Toko Buku ---" << endl;
    cout << " Masukkan total belanja (Rp): ";
    cin >> belanja;
    
    
    cout << "\n---Ringkasan Pembayaran---" << endl;
    if (belanja < 100000) {
        cout << "Diskon (0%): "  << 0 ;
        cout << "Total bayar: " << belanja;
    } else if (belanja >= 100000 && belanja <= 299999) {
        cout << "Diskon: (10%):" << belanja * 0.10 << endl;
        cout << "Total bayar: " << belanja * 0.90;
    } else if (belanja >= 300000) {
        cout << "Diskon: (20%): " << belanja * 0.20 << endl;
        cout << "Total bayar: " << belanja * 0.80;
    }
    return 0;
}