#include <iostream>
using namespace std;

int fibonacci(int ulangan)
{
    if (ulangan == 0 || ulangan == 1)
    {
        return ulangan;
    }
    else
    {
        return (fibonacci(ulangan - 1) + fibonacci(ulangan - 2));
    }
}
int main()
{

    int x, j = 0;
    cout << "Jumlah fibonacci yang diinginkan : ";
    cin >> x;
    cout << "Output : ";
    for (int i = 1; i <= x; i++)
    {
        cout << fibonacci(j) << " ";
        j++;
    }
    return 0;
}