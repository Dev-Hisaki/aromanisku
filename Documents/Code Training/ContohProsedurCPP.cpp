#include <iostream>
using namespace std;

// Prosedur tidak dapat mengembalikan nilai
void Persegi(int sisi){

    int luasPersegi = sisi * sisi;
    cout << luasPersegi << endl;
}

// Fungsi dapat mengembalikan nilai
int Persegipanjang (int panjang, int lebar) {

    int luasPersegiPanjang = panjang * lebar;
    return luasPersegiPanjang;
}

// Fungsi utama
int main () {
    int inputSisi = 5;
    int inputPanjang = 4;
    int inputLebar = 5;

    Persegi(inputSisi);
    cout << "\n" << Persegipanjang(inputPanjang, inputLebar);


    
}