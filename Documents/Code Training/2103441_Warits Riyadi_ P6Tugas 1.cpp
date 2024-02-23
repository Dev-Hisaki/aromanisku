#include <iostream>
#include <string>
using namespace std;

void proses (string A, string B)
{
    string C = "Kosong";
    C = A;
    A = B;
    B = C;
    cout << "Isi Gelas A kondisi kedua    = " << A << endl;
    cout << "Isi Gelas B kondisi kedua    = " << B << endl;
}

int main ()
{
    string A = "Merah";
    string B = "Biru";
    cout << "=====================================" << endl;
    cout << "<       Warits Riyadi - 2103441     >" << endl;
    cout << "=====================================" << endl;
    cout << "Isi Gelas A kondisi pertama  = " << A << endl;
    cout << "Isi Gelas B kondisi pertama  = " << B << endl;
    cout << "\n-------------------------------------" << endl;
    cout << "<         Proses berlangsung        >" << endl;
    cout << "-------------------------------------" << endl;
    proses (A, B);
    return 0;
}