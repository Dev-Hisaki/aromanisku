#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n;
    x = (n * n) % 1000000007;
    printf("%d", x);
    return 0;
}