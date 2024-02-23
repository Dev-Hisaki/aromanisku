#include <iostream>
using namespace std;

int main(){
    int goreng = 17000;
    int bakar = 21000;
    int beliGoreng, beliBakar, hargaBakar, hargaGoreng, total, hargaTotal;

    cout << "Ayam Goreng : RP." << goreng;
    cout << "\nAyam Bakar : Rp." << bakar;
    cout << "\nMasukan Jumlah Pembelian Ayam Goreng : ";
    cin >> beliGoreng;
    hargaGoreng = beliGoreng * goreng;
    cout << "\nMasukan Jumlah Pembelian Ayam Bakar : ";
    cin >> beliBakar;
    hargaBakar = beliBakar * bakar;
    total = hargaGoreng + hargaBakar;

    if(total > 45000){
        hargaTotal = total - (total*1/10);
        cout << "Selamat Anda Mendapat Potongan Harga Sebesar 10% " << endl;
        cout << "Silahkan Membayar Sebesar Rp." << hargaTotal;
    }
}