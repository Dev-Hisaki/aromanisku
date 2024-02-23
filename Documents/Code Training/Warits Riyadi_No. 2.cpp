#include <iostream>
using namespace std;

void proses (int A[2][2], int B[2][2])
{
    int AB[2][2];
    int CD[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            AB[i][j] = A[i][0]*B[0][j];
        }
    }
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            CD[a][b] = A[a][1]*B[1][b];
        }
    }
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            CD[x][y] = AB[x][y]+CD[x][y];
            cout << CD[x][y] << " ";
        }
        cout << endl;
    }
}

int main ()
{
    cout << "=========================" << endl;
    cout << "     PROGRAM UTS NO 2    " << endl;
    cout << " Warits Riyadi - 2103441 " << endl;
    cout << "=========================" << endl;
    int C[2][2] = {{2, 4}, {6, 8}};
    int D[2][2] = {{3, 5}, {7, 9}};
    proses (C, D);
    return 0;
}