#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;
    
    // Input tiga kode
    cout << "Masukkan kode ke-1: ";
    cin >> kode1;
    cout << "Masukkan kode ke-2: ";
    cin >> kode2;
    cout << "Masukkan kode ke-3: ";
    cin >> kode3;

    int total = kode1 + kode2 + kode3;

    // Mengecek apakah ketiga kode memenuhi syarat
    if (total >= 200 && kode1 >= 50 && kode2 >= 50 && kode3 >= 50) {
        cout << "Aman" << endl;
    } else {
        cout << "Bahaya" << endl;
    }

    return 0;
}