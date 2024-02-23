#include <iostream>
using namespace std;

int main() {
	int m;
	int n;
	cout << "<---------------------------->" << endl;
	cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
	cout << "NIM : 2103995" << endl;
	cout << "Program Studi Teknik Komputer" << endl;
	cout << "Soal Nomor 1" << endl;
	cout << "<---------------------------->" << endl;
	cout << "Masukkan Baris (m) : ";
	cin >> m;
	cout << "Masukkan Kolom (n) : ";
	cin >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j % 2 == 0) {
				cout << "0";
			}
			else {
				cout << "1";
			}
		}
		cout << endl;
	}
}
