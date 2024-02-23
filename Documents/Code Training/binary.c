#include <stdio.h>

int recursive(int array[], int indeks_awal, int indeks_akhir, int x){
    if(indeks_akhir >= indeks_awal){
        int tengah = (indeks_awal + indeks_akhir)/2;
        if(array[tengah] == x){
            return tengah;
        }
        if(array[tengah] > x){
            return recursive(array, indeks_awal, indeks_akhir - 1, x);
        }
        return recursive(array, indeks_awal + 1, indeks_akhir, x); 
    }
    return -1;
}

int main(){
    int n, x, i;
    scanf("%d\n", &n);
    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[n]);
    }
    scanf("%d\n", &x);
    printf("%d\n", recursive(array, 0, n-1, x));
    return 0;
}