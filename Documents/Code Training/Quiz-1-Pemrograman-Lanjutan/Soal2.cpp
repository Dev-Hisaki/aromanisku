#include <iostream>
using namespace std;

int persegiPanjang(int panjang, int lebar){

    int luasPersegiPanjang = panjang * lebar;
    return luasPersegiPanjang;
}

int persegi(int sisi){

    int luasPersegi = sisi * sisi;
    return luasPersegi;
}

int segitiga(int tinggi, int alas){

    int luasSegitiga = 1/2 * alas * tinggi;
    return luasSegitiga;
}

int main(){

    int LuasPersegiPanjang = persegiPanjang(2, 3);
    int LuasPersegi = persegi(5);
    int LuasSegitiga = segitiga(3, 4);
    int luasBangunDatar = LuasPersegiPanjang + LuasPersegi + LuasSegitiga;

    cout << "Luas Bangun Datar Adalah " << luasBangunDatar;
}