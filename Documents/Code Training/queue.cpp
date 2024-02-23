#include <iostream>
using namespace std;

#define size 7

struct queue{
	int front, rear, arr[size], def[];

};
queue antrean;

int createQueue(){
	antrean.front = 0;
	antrean.rear = 0;
}

int isEmpty(){
	if(antrean.arr[antrean.front] == 0){
		return 1;
	} else {
		return 0;
	}
}

int isFull(){
	if(antrean.rear == size - 1){
		return 1;
	} else {
		return 0;
	}
}

int insert(int x)
{
    if (isFull() == 0)
    {
        antrean.arr[antrean.rear] = x;
        antrean.rear++;
    }
}

int hapus(){
	if(isEmpty == 0){
		cout << "This index is empty" << endl;
	} else {
		antrean.front++;
	}
}

int find(int indeks){
	cout << antrean.arr[indeks] << endl;
}

int display(){
	if(isFull() != 0){
		cout << "This index is full" << endl;
	} else {
		for(int i = antrean.front; i < antrean.rear; i++){
			cout << antrean.arr[i] << " ";
		}
	}
}

void destroy(){
	for (int o = 0; o < size; o++)
	{
		antrean.arr[o] = antrean.def[o];
	}
	
}

int main(int argc, char const *argv[])
{
	int input, val;

	createQueue();
mulai:
	cout << "=======================" << endl;
	cout << "Program Queue by Haidar" << endl;
	cout << "=======================" << endl;
	cout << "Queue saat ini : " << endl;
	display();
	cout << "\n=======================" << endl;
	cout << "\tOperasi\t" << endl;
	cout << "=======================" << endl;
	cout << "1. Insert" << endl;
	cout << "2. Delete" << endl;
	cout << "3. Find" << endl;
	cout << "4. Destroy" << endl;
	cout << "5. Keluar Program" << endl;
	cout << "=======================" << endl;
	cout << "Masukan input : ";
	cin >> input;

	if(input == 1){
		cout << "Masukan nilai : ";
		cin >> val;
		insert(val);
		goto mulai;
	} else if(input == 2){
		hapus();
		goto mulai;
	} else if(input == 3) {
		cout << "Indeks yang tersedia" << endl;
		cout << "=================================" << endl;
		display();
		cout << "\nMasukan indeks yang ingin dicari : ";
		cin >> val;
		find(val);
		goto mulai;
	} else if(input == 4){
		destroy();
		goto mulai;
	} else if(input == 5){
		goto end;
	} else {
		cout << "input Salah Silahkan Ulang Kembali" << endl;
		goto mulai;
	}

end:
	cout << "Program Berakhir..." << endl;
	return 0;
}
