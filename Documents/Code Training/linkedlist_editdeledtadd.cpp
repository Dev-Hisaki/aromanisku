#include <iostream>
using namespace std;

struct buku
{
    int tahunterbit;
    string judul, pengarang;

    buku *next;
};

buku *tail, *head, *cur, *newNode, *del;

// fungsi create
void createSingleLinkedList(string jdl, string png, int ttb)
{
    head = new buku();

    head->judul = jdl;
    head->pengarang = png;
    head->tahunterbit = ttb;
    head->next = NULL;
    tail = head;
}

// fungsi tambah node awal
void TambahAwalSingleLinkedList(string jdl, string png, int ttb)
{
    newNode = new buku();

    newNode->judul = jdl;
    newNode->pengarang = png;
    newNode->tahunterbit = ttb;
    newNode->next = head;
    head = newNode;
}
// fungsi tambah node akhir
void TambahAkhirSingleLinkedList(string jdl, string png, int ttb)
{
    newNode = new buku();

    newNode->judul = jdl;
    newNode->pengarang = png;
    newNode->tahunterbit = ttb;
    tail->next = newNode;
    tail = newNode;
}

// fungsi hapus node awal
void HapusAwalSingleLinkedList()
{
    del = head;
    head = head->next;
    delete del;
}

// fungsi hapus node awal
void HapusAkhirSingleLinkedList()
{
    del = tail;
    cur = head;
    while (cur->next != tail)
    {
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

// fungsi edit node awal
void EditAwalSingleLinkedList(string jdl, string png, int ttb)
{
    head->judul = jdl;
    head->pengarang = png;
    head->tahunterbit = ttb;
}

// fungsi edit node akhir
void EditAkhirSingleLinkedList(string jdl, string png, int ttb)
{
    tail->judul = jdl;
    tail->pengarang = png;
    tail->tahunterbit = ttb;
}

// fungsi print
void printSingleLinkedList()
{
    cur = head;
    while (cur != NULL)
    {
        cout << endl;
        cout << "Judul Buku = " << cur->judul << endl;
        cout << "Pengarang Buku = " << cur->pengarang << endl;
        cout << "Tahun Terbit = " << cur->tahunterbit << endl;

        cur = cur->next;
    }
}
int main(int argc, char const *argv[])
{
    createSingleLinkedList("Buku 1", "Pengarang 1", 2001);
    printSingleLinkedList();
    cout << "==========\n\n";

    // TambahAwalSingleLinkedList("Buku 2","Pengarang 2", 2002);
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // TambahAkhirSingleLinkedList("Buku 3","Pengarang 3", 2003);
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // HapusAwalSingleLinkedList();
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // HapusAkhirSingleLinkedList();
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // TambahAwalSingleLinkedList("Buku 4","Pengarang 4", 2004);
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // EditAwalSingleLinkedList("Buku5", "Pengarang 5", 2005);
    // printSingleLinkedList();
    // cout << "==========\n\n";

    // EditAkhirSingleLinkedList("Buku6", "Pengarang 6", 2006);
    // printSingleLinkedList();
    // cout << "==========\n\n";
}
