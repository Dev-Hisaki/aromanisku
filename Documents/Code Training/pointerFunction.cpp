#include <iostream>
using namespace std;

void penjumlahan(int *angka){
    *angka += 10;
}

int main(){
    int x = 5;

    cout << "Nilai variabel dari x adalah " << x << endl;

    penjumlahan(&x);

    cout << "Nilai variabel dari x adalah " << x << endl;

    return 0;
}