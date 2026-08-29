#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    #ifdef _WIN32
        system("cls");
    #endif
    double H, J, P, K;

    // Input data 
    cout << "Masukkan harga barang (Rp): ";cin >> H;
    cout << "Masukkan jumlah barang : ";cin >> J;
    cout << "Masukkan pajak (%): ";cin >> P;
    cout << "Masukkan ongkos kirim (Rp): ";cin >> K;

    // Proses 
    double subtotal =H*J;
    double nilai_pajak =subtotal*(P / 100.0);
    double total_pembayaran =subtotal+nilai_pajak+K;

    // Output 
    cout << "\n--- Rincian Pembayaran ---" << endl;
    cout << fixed << setprecision(0) ; 
    cout << "Subtotal         : Rp " << subtotal << endl;
    cout << "Nilai Pajak      : Rp " << nilai_pajak << endl;
    cout << "Total Pembayaran : Rp " << total_pembayaran << endl;

    return 0;
}
// Fungsi Penambahannya fixed: menampilkan bukan notasi e+0..
//setprecision(0): Mengatur jumlah digit di belakang koma menjadi 0 agar tampilan uang berupa bilangan bulat yang rapi.
// Jika ingin menampilkan angka pecahan (misal 2 angka di belakang koma), cukup ubah menjadi setprecision(2).