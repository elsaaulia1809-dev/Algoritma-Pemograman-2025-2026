#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string input;
    float saldo = 2510004.0f;
    float jumlahSetoran, jumlahPenarikan;
    int pilihan;

    cout << "Selamat datang di Program ATM!" << endl;

    do {
        cout << "\nMenu:\n";
        cout << "1. Setor Tunai\n";
        cout << "2. Tarik Tunai\n";
        cout << "3. Cek Saldo\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        getline(cin, input);
        stringstream(input) >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah setoran: ";
                getline(cin, input);
                stringstream(input) >> jumlahSetoran;
                if (jumlahSetoran > 0) {
                    saldo += jumlahSetoran;
                    cout << "Setoran berhasil! Saldo saat ini: Rp" << fixed << setprecision(2) << saldo << endl;
                } else {
                    cout << "Jumlah setoran harus positif." << endl;
                }
                break;

            case 2:
                cout << "Masukkan jumlah penarikan: ";
                getline(cin, input);
                stringstream(input) >> jumlahPenarikan;
                if (jumlahPenarikan > 0 && jumlahPenarikan <= saldo) {
                    saldo -= jumlahPenarikan;
                    cout << "Penarikan berhasil! Saldo saat ini: Rp" << fixed << setprecision(2) << saldo << endl;
                } else if (jumlahPenarikan > saldo) {
                    cout << "Saldo tidak cukup untuk penarikan." << endl;
                } else {
                    cout << "Jumlah penarikan harus positif." << endl;
                }
                break;

            case 3:
                cout << "Saldo saat ini: Rp" << fixed << setprecision(2) << saldo << endl;
                break;

            case 4:
                cout << "Terima kasih telah menggunakan Program ATM!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}