#include <iostream>

using namespace std;

int Kandidat = 20;
char nama[20][50];
int nilaiMatematika[20];
int nilaiBahasaInggris[20];

void inputData() {
    for (int i = 0; i < Kandidat; i++) {
        cout << "Masukkan nama kandidat " << i + 1 << ": ";
        cin.getline(nama[i], 50);
        cout << "Masukkan nilai matematika: ";
        cin >> nilaiMatematika[i];
        cout << "Masukkan nilai bahasa inggris: ";
        cin >> nilaiBahasaInggris[i];
        cin.ignore();
    }
}

bool isDiterima(int index) {
    return (nilaiMatematika[index] > 80 || (nilaiMatematika[index] + nilaiBahasaInggris[index]) / 2 >= 70);
}

void tampilkanData() {
    cout << "Nama\t\tStatus" << endl;
    for (int i = 0; i < Kandidat; i++) {
        cout << nama[i] << "\t\t";
        if (isDiterima(i)) {
            cout << "Diterima";
        }
        else {
            cout << "Ditolak";
        }
        cout << endl;
    }
}
