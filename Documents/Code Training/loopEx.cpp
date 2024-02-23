#include <iostream>
using namespace std;

int main()
{
    for (int x = 0; x <= 9; x++) {
        for (int j = 0; j <= x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}