#include <iostream>
using namespace std;

int main () {
    int array[5] = {1, 3, 5, 7, 9};
    int *pointerArray;
    pointerArray = array;

    cout << "Nilai pada elemen 0 array adalah : " << array[0] << endl;
    cout << "Nilai pada elemen 0 array (Pointer) adalah : " << *pointerArray << endl;

    cout << "Akses nilai semua array dengan pointer dan looping for" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Nilai indeks [" << i << "] adalah " << *(pointerArray+i) << endl;
    }

    return 0;
}