#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 6;
    int *p = &b;

    system("cls");
    cout << &p << endl << &a;
    return 0;
}
