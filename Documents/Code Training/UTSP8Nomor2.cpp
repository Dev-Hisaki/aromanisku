#include <iostream>
using namespace std;

int main() {
	int m, n;
	cout << "<---------------------------->" << endl;
	cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
	cout << "NIM : 2103995" << endl;
	cout << "Program Studi Teknik Komputer" << endl;
	cout << "Soal Nomor 2" << endl;
	cout << "<---------------------------->" << endl;
	cout << "Masukkan baris (m) : ";
	cin >> m;
	cout << "Masukkan kolom (n) : ";
	cin >> n;
	int x = 0;
	if (m*n <= 25) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (j <= n) {
					if (x <= 9) {
						cout << "0" << x << " ";
					}
					else {
						cout << x << " ";
					}
					x++;
				}
			}
			cout << endl;
		}
	}
	else {
		cout << "Dimensi Lebih Dari 25" << endl;
	}
	
}