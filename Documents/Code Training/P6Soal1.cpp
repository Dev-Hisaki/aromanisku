#include <iostream>
using namespace std;

int gelas(string gelasA, string gelasB)
{
    string gelasC = gelasA;
    gelasA = gelasB;
    gelasB = gelasC;
    cout << "Gelas A sekarang berwarna " << gelasA << endl;
    cout << "Gelas B sekarang berwarna " << gelasB << endl;
}

int main()
{

    string gelasBiru = "Biru";
    string gelasMerah = "Merah";

    cout << "<---------------------------->" << endl;
    cout << "Program Menukar Isi Gelas" << endl;
    cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
    cout << "NIM : 2103995" << endl;
    cout << "Program Studi Teknik Komputer" << endl;
    cout << "Soal 1" << endl;
    cout << "<---------------------------->" << endl;

    cout << "Isi gelas A adalah warna " << gelasBiru << endl;
    cout << "Isi gelas B adalah warna " << gelasMerah << endl;
    cout << "<........Menukar Isi.........>" << endl;

    gelas(gelasBiru, gelasMerah);
    cout << "<---------------------------->" << endl;
}