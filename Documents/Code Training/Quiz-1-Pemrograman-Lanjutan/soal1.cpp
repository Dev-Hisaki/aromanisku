#include <iostream>
using namespace std;

int hitungY(int A, int B){

    int Y = A + B;
    return Y;
}

int hitungZ(int C, int D){

    int Z = C - D;
    return Z;
}

int main(){

    int a = 2, b = 3, c = 5, d = 4;
    int numberCollection[4] = {a, b, c, d};
    int y = hitungY(a, b);
    int z = hitungZ(c, d);
    int x = y * z;

    for(int i = 0; i <= 3; i++){

        cout << numberCollection[i] << " ";
    }

    cout << "\n" << "Nilai dari x adalah "<< x;
}