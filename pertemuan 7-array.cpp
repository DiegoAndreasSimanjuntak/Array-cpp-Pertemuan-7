#include <iostream>
using namespace std;

int main() {

    cout << "Nama  : Diego Andreas Simanjuntak" << endl;
    cout << "Kelas : 1B Informatika" << endl;
    cout << "NPM   : 2410631170068" << endl;
    cout << "\nTugas Pertemuan 7" << endl;

    const int ukuran = 10;
    int arr[ukuran];
    int nilaiTertinggi = INT_MIN;


    cout << "\n\nMasukkan " << ukuran << " angka" << endl;
    for (int i = 0; i < ukuran; i++) {
        cout << "Angka ke-" << (i + 1) << ": ";
        cin >> arr[i];

        // Memeriksa dan memperbarui nilai tertinggi
        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
        }
    }

    // Menampilkan nilai tertinggi
    cout << "Nilai tertinggi dalam array adalah: " << nilaiTertinggi << endl;

    // Mencari angka yang diinputkan user
    int mencariAngka;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> mencariAngka;

    bool ditemukan = false;
    for (int i = 0; i < ukuran; i++) {
        if (arr[i] == mencariAngka) {
            cout << "Angka " << mencariAngka << " ditemukan pada indeks: " << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << mencariAngka << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
