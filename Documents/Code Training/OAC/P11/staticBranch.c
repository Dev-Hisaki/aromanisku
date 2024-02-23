#include <stdio.h>

int a=0;
void main(){
while(a<5)
  {
    //branch instruction, condition either true or false
    if(a%2==0)   
    {
        //Asumsikan sebuah branch diambil pada suatu proses
        printf("Branch Diambil\n");
    } else {
        //Asumsikan sebuah branch tidak diambil pada suatu proses
        printf("Branch Tidak Diambil\n");
    }
    a++;
  }
}