#include <iostream>
using namespace std;

void arrayProcedure(int numberOfList[2][3][3]){
    for(int i = 0; i < 2; i++){
        for(int j = i; j < 3; j++){
            for(int k = i; k < 3; k++){
                cout << numberOfList[i][j][k] << " "; 

            }
        }
    }

}

int main () {
    int listNumber[][3][3] = {
        {1, 2, 3},{6, 5, 4},{9, 8, 7},
    {11, 12, 13},{98, 87, 54},{21, 32, 55}
    };

    arrayProcedure(listNumber);
    return 0;
}