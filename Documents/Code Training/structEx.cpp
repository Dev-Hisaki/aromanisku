#include <iostream>
using namespace std;

struct buah
{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){
    buah apel;

    apel.warna = "Merah";
    apel.berat = 3.5f;
    apel.harga = 13000;
    apel.rasa = "Manis";

    cout << "Apel" << endl;
    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.warna << endl;

    return 0;
}
