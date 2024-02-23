#include <iostream>
using namespace std;

void intro (bool ACTIVATE) {

    cout << "____________________________________" << endl;
    cout << " Program Hitung Diskon Pertemuan 2  " << endl;
    cout << "  Nama : Muhamad Haidar Al-Farruq   " << endl;
    cout << "          NIM : 2103995             " << endl;
    cout << "  Program Studi Teknik Komputer 2A  " << endl;
    cout << "____________________________________" << endl;
}

void hitungDiskon (int hargaAsli, int potongan, int duit) {

    int jumlahPotongan, hasilDiskon, wangsulan;
    jumlahPotongan = hargaAsli * potongan/100;   
    hasilDiskon = hargaAsli - jumlahPotongan;
    wangsulan = duit - hasilDiskon;


    if(duit >= hasilDiskon){
        cout << "Selamat anda mendapat potongan harga sebesar : " << jumlahPotongan;
        cout << "\nHarga yang harus dibayar sebesar : " << hasilDiskon;
        cout << "\nAnda membayar sebesar " << duit << " dengan kembalian sebesar " << wangsulan;
    } else {
        cout << "Uang Kurang Silahkan Bayar Dengan Uang Yang Cukup";
    }
}

int main () {

    intro(true);
    int hargaNormal, diskon, bayar;

    cout << "Harga : ";
    cin >> hargaNormal;
    cout << "\nDiskon : ";
    cin >> diskon;
    cout << "\nUang Bayar : ";
    cin >> bayar;
    cout << "____________________________________" << endl;

    hitungDiskon(hargaNormal, diskon, bayar);
    cout << "\n____________________________________" << endl;
}