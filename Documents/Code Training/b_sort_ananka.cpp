#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     system("cls");
     int idxrange;
     cout << "idk masukin nomor sesuatu" << endl;
     cin >> idxrange;

     int index[idxrange];
     for ( int m = 0; m < idxrange; m++)
        {
        cout <<  "masukan nilai ke " << m + 1 << " : ";
        cin >> index[m];
        }

     int i, j, k, temp;
     i = idxrange;

     while (i > 0)
        {
        for (j = 0; j < i; j++)
            {
                if (index [j] > index [j + 1])
                {
                    temp = index [j];
                    index [j] = index [j + 1];
                    index [j + 1] = temp;
                }
            }
            i--;
        }
    for (k = 0; k < sizeof(index) / sizeof(int); k++)
    {
        cout << index [k] << " ";
    }
    return 0;
}