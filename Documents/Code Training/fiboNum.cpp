#include <iostream>
using namespace std;

int fibo_v1, fibo_v2;

int main(int argc, char const *argv[])
{
    // Clear Screen
    system("cls");

    // Print how much fibonacci number will display
    printf("How much fibonacci number do you want?\n");
    printf("Type Here : ");
    int index;
    cin >> index;
    int custom_index[index];

    // Initialize the first and second constant number
    custom_index[0] = 0;
    custom_index[1] = 1;

    // The logic of fibonacci
    fibo_v1(index);

    // The logic of fibonacci V2

    // Print result
    for(int j = 0; j < index; j++){
        cout << custom_index[j] << " ";
    }

    return 0;
}

int fibo_v1(int idx_max){
    for (int i = 0; i < idx_max; i++)
    {
        custom_index[i + 2] = custom_index[i] + custom_index[i + 1];
    }
}

int fibo_v2(int idx_max){
    int num1 = 0, num2 = 1, num3;
    for (int k = 0; k < idx_max; k++)
    {
        // Temporary number
        num3 = num1 + num2;

        // Swapping value of the variables
        swap(num1, num3);
        swap(num2, num3);
    }
}