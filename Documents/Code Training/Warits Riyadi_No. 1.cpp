#include <iostream>
using namespace std;

int proses (int A, int B[3], int i)
{
    int C[3];
    for (int j = 0; j < 3; j++)
    {
        C[j] = A*B[j];
    }
    return C[i];
}

int main () 
{
    int A = 23, B[3] = {4, 6, 8};
    cout << "=========================" << endl;
    cout << "     PROGRAM UTS NO 1    " << endl;
    cout << " Warits Riyadi - 2103441 " << endl;
    cout << "=========================" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << proses (A, B, i) << " ";
    }
    return 0;
}