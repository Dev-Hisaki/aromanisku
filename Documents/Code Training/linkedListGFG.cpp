#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    string name;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL; 
  
    head = new Node();
    second = new Node();
    third = new Node();
  
    head->data = 1;
    head->name = "Haidar";
    head->next = second;
    second->data = 2;
    second->name = "Warits";
    second->next = third;
    third->data = 3;
    third->name = "Rayhan";
    third->next = NULL;

    cout << head->data << second->name << third-> data;
  
    return 0;
}