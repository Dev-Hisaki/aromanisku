#include <iostream>
using namespace std;

void selectionsort(int data[], int n);

int main(int argc, char const *argv[])
{
    system("cls");
    int idxrange;
    cout << "Masukan jumlah index : ";
    cin >> idxrange;
    int x[idxrange];
    for (int a = 0; a < idxrange; a++)
    {
        cout << "masukin index ke berapa kekekeke " << a + 1 << " : ";
        cin >> x[a];
    }
    selectionsort(x , idxrange);
}
void selectionsort (int data[], int n)
{
    int i, j, idx_min;
    for ( i = 0; i < n; i++)
    {
        idx_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (data [idx_min] > data [j])
            {
                idx_min = j;
                if (idx_min > i)
                {
                    swap(data[i], data[idx_min]);
                }
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << data[k] << " ";
    }
}