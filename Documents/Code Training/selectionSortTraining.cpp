#include <iostream>
using namespace std;

void selectionSort(int a[], int N)
{
    for (int L = 0; L <= N - 2; ++L)
    {                                          // O
        int X = min_element(a + L, a + N) - a; // O
        swap(a[X], a[L]);                      // O(1), X may be equal to L (no actual swap)
    }
}

int main()
{
    system("cls");
    int x[] = {2, 3, 4, 1, 5};
    selectionSort(x, sizeof(x) / sizeof(int));
}