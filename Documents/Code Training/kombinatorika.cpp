#include <iostream>
using namespace std;

int faktorisasi(int dicari){
    int n = dicari;
    int hasil;
    for(int i = 1; i <= dicari; i++){
       hasil = n * (n-1);
    }
    cout << hasil;
}

int main(){
    int test;
    cin >> test;
    faktorisasi(test);
}