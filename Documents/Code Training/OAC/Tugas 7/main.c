#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(){
    int a, b, c;
    printf("Masukan nilai x : ");
    scanf("%d", &a);
    printf("Masukan nilai y : ");
    scanf("%d", &b);

    c = sumasu(a, b);

    printf("%d\n", c);
    system("pause");
}