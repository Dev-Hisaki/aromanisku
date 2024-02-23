#include <iostream>
#include <string>

typedef class Queue {
    private : typedef struct _queue {
        #define MAX 7
        std::string nameList[MAX];
        int front, rear;
    }; private : _queue que;
    
    public : void createQueue() {
        que.front = 0;
        que.rear = 0;
    }
    
    public : bool isFull() {
        return que.rear == MAX-1;
    }
    
    public : bool isEmpty() {
        return que.rear == -1;
    }
    
    public : void insertQueue(std::string input) {
        if (isFull()) {
            std::cout << "Antrian Habis!" << std::endl;
        } else {
            que.nameList[que.rear] = input;
            que.rear++;
        }
    }
    
    public : void deleteQueue() {
        if (isEmpty() || que.rear == que.front) {
            std::cout << "Antrian Kosong!" << std::endl;
        } else {
            std::cout << que.nameList[que.front] << std::endl;
            que.front++;
        }
    }
    
    public : void displayQueue() {
        for (int i = que.front; i <= que.rear; i++) {
            std::cout << "[" << i << "] " << que.nameList[i];
            std::cout << std::endl;
        }
    }
    
    public : std::string outFront() {
        return que.nameList[que.front];
    }
}; Queue newQueue;

void perform() {
    int indexInput; //  Index for user to choose the menu
    
    std::cout << "------- Demonstrasi Queue -------" << std::endl;
    std::cout << "[1] Insert Queue" << std::endl;
    std::cout << "[2] Delete Queue" << std::endl;
    std::cout << "[3] Display Queue" << std::endl;
    std::cout << "Insert Index: ";
    std::cin >> indexInput;
    
    std::string userInput;
    switch (indexInput) {
        case 1 :
            std::cout << "Data yang diinput: ";
            std::getline(std::cin, userInput);
            newQueue.insertQueue(userInput);
            std::cout << "\n";
            perform();
            break;
        
        case 2 :
            std::cout << "Output data antrian: ";
            newQueue.deleteQueue();
            std::cout << "\n";
            perform();
            break;
        
        case 3 :
            std::cout << "List data dalam antrian: " << std::endl;
            newQueue.displayQueue();
            perform();
            break;
        
        default :
            std::cout << "Input salah! Harap ulangi!" << std::endl;
            std::cout << "\n";
            perform();
            break;
    }
}

int main(int argc, char **argv) {
    newQueue.createQueue();
    perform();
    return 0;
}