#include <stdio.h>
#include <stdbool.h>

void main(){
    int i = 0;
    // variabel x adalah asumsi
    bool x = true;

    while(i < 5){
        if(x == true){
            // Mengasumsikan apabila x diambil maka x tidak diambil
            printf("Diambil\n");
            x = false;
        } else if(x == false){
            // Mengasumsikan apabila x tidak diambil maka x diambil
            printf("Tidak Diambil\n");
            x = true;
        }
        i++;
    }
}