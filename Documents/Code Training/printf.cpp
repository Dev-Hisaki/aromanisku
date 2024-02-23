#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string menu[] = {"Penarikan", "Setor Tunai", "Keluar"};
    bool ulang = true;
    int pilihan = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " " << menu[i] << endl;
    }
    cin >> pilihan;
    while (ulang == true)
    {

        switch (pilihan)
        {
        case 1:
            cout << "Saldo abis" << endl;
            break;

        case 2:
            cout << "Mau berapa?" << endl;
            break;

        case 3:
            ulang = false;
            break;

        default:
            break;
        }
    }
    return 0;
}
