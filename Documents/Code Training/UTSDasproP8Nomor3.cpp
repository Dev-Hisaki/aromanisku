#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "<---------------------------->" << endl;
    cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
    cout << "NIM : 2103995" << endl;
    cout << "Program Studi Teknik Komputer" << endl;
    cout << "Soal Nomor 3" << endl;
    cout << "<---------------------------->" << endl;
    cout << "Masukkan Baris (n) : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n + 1; j++) {
            cout << "0";
        }
        for (int j = 1; j <= i; j++) {
            cout << "1";
        }
        cout << endl;
    }
}