#include <iostream>
using namespace std;

void intro()
{

    cout << "____________________________________" << endl;
    cout << " UTS Struktur Data dan Pemrograman  " << endl;
    cout << "  Nama : Muhamad Haidar Al-Farruq   " << endl;
    cout << "          NIM : 2103995             " << endl;
    cout << "  Program Studi Teknik Komputer 3A  " << endl;
    cout << "____________________________________" << endl;
}

int showArray(int indeks[8][8])
{

    for (int a = 0; a < 8; a++)
    {
        for (int b = 0; b < 8; b++)
        {
            cout << indeks[a][b] << "\t";
        }
        cout << endl;
    }
}

int satuDimensi(int masukin){

}

int main(int argc, char const *argv[])
{
    system("cls");
    intro();

    int val[8][8] = {
        {3, 2, 3, 5, 5, 2, 4, 4},
        {2, 12, 1, 6, 22, 4, 4, 55},
        {3, 23, 2, 55, 33, 123, 12, 66},
        {4, 56, 33, 7, 55, 32, 15, 77},
        {5, 7, 1, 88, 23, 25, 15, 8},
        {10, 8, 2, 9, 14, 6, 23, 23},
        {12, 9, 4, 88, 57, 3, 45, 14},
        {33, 80, 5, 9, 2, 4, 56, 1}};

    printf("===============Before Sorting===============\n");
    showArray(val);
    printf("===============After  Sorting===============\n");

    int satuArray[64], k = 0;

    for (int c = 0; c < 64; c++)
    {
        satuArray[c] = val[0][k];
        k++;
    }

    int i = sizeof(satuArray) / sizeof(int), j, temp;

    while (i > 0)
    {
        for (j = 1; j < i; j++)
        {
            if (satuArray[j] > satuArray[j - 1])
            {
                temp = satuArray[j];
                satuArray[j] = satuArray[j - 1];
                satuArray[j - 1] = temp;
            }
        }
        i--;
    }

    int duaArray[8][8], d = 0, e = 0;
    
    for (int z = 0; z < 64; z++)
    {
        cout << satuArray[z] << " ";
    }

    return 0;
}
