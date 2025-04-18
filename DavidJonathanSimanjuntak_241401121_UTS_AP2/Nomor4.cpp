#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, input);

    int i = 0;
    int jumlah = 0;
    int panjang = input.length();

    while (i < panjang) {
        while (i < panjang && input[i] == ' ') {
            i++;
        }

        if (i < panjang && input[i] != ' ') {
            jumlah++;
            while (i < panjang && input[i] != ' ') {
                i++;
            }
        }
    }

    cout << "Jumlah judul buku: " << jumlah << endl;

    return 0;
}
