#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    scanf("%d", &n);
    x = (n * n) % 1000000007;
    printf("%d", x);
    return 0;
}