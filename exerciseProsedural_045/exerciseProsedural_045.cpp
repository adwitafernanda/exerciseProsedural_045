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

