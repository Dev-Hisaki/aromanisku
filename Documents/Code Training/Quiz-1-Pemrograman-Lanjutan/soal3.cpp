#include <iostream>
using namespace std;

int pArray01(int urutan, int a[5]){
    int b[i];

    for(int i = 0; i < 5; i++){

        b[i] = a[i] + 1;
    }

    return b[urutan];
}

int main(){

    int value[5] = {2, 5, 9, 7, 1};

    for(int i = 0; i <= 4; i++){

    cout << "Nilai " << i + 1 << ": " << pArray01(value) << endl;
    }
    return 0;
}