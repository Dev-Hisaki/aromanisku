#include <iostream>
using namespace std;

//deklarasi singel linked list
struct film
{
	//komponen pada film
    int tahunterbit;
    string judul, genre;

	//pointer yang menunjukan element selanjutnya
    film *next;
};

//variabel pointer secara global
film *tail, *head, *cur, *newNode, *del;

//fungsi create singel linked list
void createSingleLinkedList(string judul, string genre, int tahunterbit){
    head = new film();

    head->judul = judul;
    head->genre = genre;
    head->tahunterbit = tahunterbit;
    head->next = NULL;
    tail = head; //data pertama = data terakhir
}

//fungsi menambah node awal
void TambahNodeAwal(string judul, string genre, int tahunterbit){
    newNode = new film();

    newNode->judul = judul;
    newNode->genre = genre;
    newNode->tahunterbit = tahunterbit;
    newNode->next = head; //next dari newnode akan ke head
    head = newNode; //menjadikan newnode sebagai head
}
//fungsi tambah node akhir
void TambahNodeAkhir(string judul, string genre, int tahunterbit){
    newNode = new film();

     newNode->judul = judul;
    newNode->genre = genre;
    newNode->tahunterbit = tahunterbit;
    tail->next = newNode; //next dari tail akan ke newnode
    tail = newNode; //menjadikan newnode sebagai tail
}

//fungsi Menghapus node awal
void HapusNodeAwal(){
    del = head; //del merupakan isi dari head
    head = head->next; //head akan berpindah pada node selanjutnya
    delete del; //menghapus del atau head awal
}

//fungsi menghapus node akhir
void HapusNodeAkhir(){
    del = tail; //del merupakan isi dari tail
    cur = head; 
    while (cur->next != tail){
        cur = cur->next;  //kondisi jika next bukan ke tail maka akan menjadi element yang ditunjuk
    }
    tail=cur;  //mengubah menjadi tail
    tail->next=NULL; //mengNULLkan pada tail
    delete del; //menghapus tail awal
}

//fungsi mengubah node awal
void UbahNodeAwal(string judul, string genre, int tahunterbit){
    head->judul = judul;
    head->genre = genre;
    head->tahunterbit = tahunterbit;
}

//fungsi edit node akhir
void UbahNodeAkhir(string judul, string genre, int tahunterbit){
    tail->judul = judul;
    tail->genre = genre;
    tail->tahunterbit = tahunterbit;
}

//fungsi print
void printSingleLinkedList(){
   cur = head;
    while(cur != NULL){
        cout << endl;
        cout << "Judul Film = " << cur->judul << endl;
        cout << "Genre Film = " << cur->genre << endl;
        cout << "Tahun Terbit = " << cur->tahunterbit << endl;

        cur = cur-> next; 
}



}
int main()
{
    createSingleLinkedList("Manusia","rusken", 2021);
    printSingleLinkedList();
    cout << "==========\n\n";

    TambahNodeAwal("marmut merah jambu","raditya dika", 2010);
    printSingleLinkedList();
    cout << "==========\n\n";

   TambahNodeAkhir("John Wick","noname", 2019);
    printSingleLinkedList();
    cout << "==========\n\n";

    HapusNodeAwal();
    printSingleLinkedList();
    cout << "==========\n\n";

    HapusNodeAkhir();
    printSingleLinkedList();
    cout << "==========\n\n";

    UbahNodeAwal("Warzone", "kevin", 2005);
    printSingleLinkedList();
    cout << "==========\n\n";

    UbahNodeAkhir("pokemon", "kris", 2020);
    printSingleLinkedList();
    cout << "==========\n\n";


}
