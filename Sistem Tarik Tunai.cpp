#include <iostream>
using namespace std;

int main() {
    const int saldo = 500000;
    int tarik;
    cout << "Masukkan jumlah yang ingin di tarik: Rp."; cin >> tarik;

    try {
        if (tarik > saldo) {
            throw "Saldo Insufficient";
        }
        cout << "Penarikan berhasil." << endl;
        cout << "Sisa saldo: Rp " << saldo - tarik << endl;
    } catch (const char* pesan) {
        cout << "ERROR: " << pesan << endl;
    }
}