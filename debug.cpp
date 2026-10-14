#include <iostream>
using namespace std;
// try {
// int error_code = 404;
// throw error_code;
// } catch (const char* e) {
// cout << "Terjadi error: " << e;
// }
int main() {
    try {
        int error_code = 404;
        throw error_code;
    } catch (int e) {
        cout << "Terjadi error: " << e << endl;
    }

    return 0;
}