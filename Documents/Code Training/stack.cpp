#include <iostream>
using namespace std;

const int batas = 6;

struct stack
{
    int top;
    int tmp[batas];
};
stack tumpukan;


int createStack()
{
    tumpukan.top = -1;
    return 0;
}

int isEmpty()
{
    if (tumpukan.top = -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (tumpukan.top == batas -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int x)
{
    if (isFull() == 0)
    {
        tumpukan.top++;
        tumpukan.tmp[tumpukan.top] = x;
    }
}

int pop(){
    if(isFull() != 0){
        cout << "This is empty slot" << endl;
    } else {
        tumpukan.tmp[--tumpukan.top];
    }
}

void display(){
    if(isFull() != 0){
        cout << "This indeks is full" << endl;
    } else {
        for (int i = 0; i <= tumpukan.top; i++)
        {
            cout << "Data " << tumpukan.tmp[i] << " was added" << endl;
        }
        
    }
}

int peek(){
    if(isFull() != 0){
        cout << "This is empty slot" << endl;
    } else {
        return tumpukan.tmp[tumpukan.top];
    }
}

int main(int argc, char const *argv[])
{
    createStack();
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    push(50);
    peek();
    display();
    return 0;
}
