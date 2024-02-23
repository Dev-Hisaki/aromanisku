#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, D;

    cin >> A >> B;
    cin >> C >> D;

    double x = A/B;
    double y = C/D;

    if(x == y){
        printf("sama");
    }
    if(x > y){
        printf("lebih besar");
    }
    if(x < y){
        printf("lebih kecil");
    }
    return 0;
}
