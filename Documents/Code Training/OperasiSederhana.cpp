#include <iostream>
using namespace std;

int adds(int x, int y)
{
    return x + y;
}

int substract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    adds(x, y);
    substract(x, y);
    multiply(x, y);
    division(x, y);
}