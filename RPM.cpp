#include <iostream>
using namespace std;

int main() {
    int rpm;
    cout << "Masukkan kecepatan putar (RPM): "; cin >> rpm;

    try {
        if (rpm > 5000) {
            throw 500;
        }
        cout << "Kecepatan mesin aman." << endl;
    } catch (int error) {
        cout << "Overload Error " << error << endl;
    }

    return 0;
}