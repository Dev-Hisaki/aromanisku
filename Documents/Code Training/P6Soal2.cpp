#include <iostream>
using namespace std;

void intro()
{

    cout << "<---------------------------->" << endl;
    cout << "Program Penentu Ganjil Genap" << endl;
    cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
    cout << "NIM : 2103995" << endl;
    cout << "Program Studi Teknik Komputer" << endl;
    cout << "Soal 2" << endl;
    cout << "<---------------------------->" << endl;
}

int ganjilGenap(long long int bilangan)
{

    if (bilangan % 2 == 0)
    {

        cout << "Genap" << endl;
    }
    else if (bilangan % 2 == 1)
    {

        cout << "Ganjil" << endl;
    }
}

int main()
{

    intro();

    long long int himpunanBil[] = {3, 11, 23, 553, 48837, 443368, 2002998, 2993889487};
    int i;

    cout << "Daftar Indeks dan Isi : ";
    for(int x = 0; x < 8; x++){

        cout << himpunanBil[x] << ", ";
    }

    cout << "\nMasukan Nilai Indeks (1 - 8) : ";
    cin >> i;

    if (i >= 1 && i <= 8)
    {

        cout << "Nilai dari indeks ke " << i << " adalah " << himpunanBil[i - 1] << " yang merupakan bilangan ";
        ganjilGenap(himpunanBil[i - 1]);
    }
    else
    {

        cout << "Input Salah" << endl;
        cout << "Silahkan Restart Program" << endl;
    }
}