#include <iostream>
using namespace std;

struct gameList
{
    int playtime, timebtwExecution;
    string judul, developer;

    gameList *next;
};

gameList *tail, *head, *cur, *newNode, *temp, *del;

void intro()
{
    cout << "<---------------------------->" << endl;
    cout << "Nama : Muhamad Haidar Al-Farruq" << endl;
    cout << "NIM : 2103995" << endl;
    cout << "Program Studi Teknik Komputer" << endl;
    cout << "<---------------------------->" << endl;
}

// fungsi create
void createSingleLinkedList(string jdl, string dev, int hrs)
{
    head = new gameList();

    head->judul = jdl;
    head->developer = dev;
    head->playtime = hrs;
    head->next = NULL;
    tail = head;
}

// fungsi tambah node awal
void TambahAwalSingleLinkedList(string jdl, string dev, int hrs)
{
    newNode = new gameList();

    newNode->judul = jdl;
    newNode->developer = dev;
    newNode->playtime = hrs;
    newNode->next = head;
    head = newNode;
}

void TambahTengahSingleLinkedList(string jdl, string dev, int hrs, int timebtwExecution)
{
    // Inisialisasi struct gameList kedalam variabel newNode
    newNode = new gameList;
    // temp digunakan untuk mencadangkan indeks yang akan ditimpa
    temp = head;

    // waktu tunda sebelum perintah penambahan dieksekusi
    while (timebtwExecution != 1)
    {
        temp = temp->next;
        timebtwExecution--;
    }

    // Pemberian nilai pada struct
    newNode->judul = jdl;
    newNode->developer = dev;
    newNode->playtime = hrs;

    // Proses menambahkan struct ke indeks
    newNode->next = temp->next;
    temp->next = newNode;
}

// fungsi tambah node akhir
void TambahAkhirSingleLinkedList(string jdl, string dev, int hrs)
{
    newNode = new gameList();

    newNode->judul = jdl;
    newNode->developer = dev;
    newNode->playtime = hrs;
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
void EditAwalSingleLinkedList(string jdl, string dev, int hrs)
{
    head->judul = jdl;
    head->developer = dev;
    head->playtime = hrs;
}

void EditTengahSingleLinkedList(string jdl, string dev, int hrs, int timebtwExecution)
{
    // temp digunakan untuk mencadangkan indeks yang akan ditimpa
    temp = head;

    // waktu tunda sebelum perintah penambahan dieksekusi
    while (timebtwExecution != 1)
    {
        temp = temp->next;
        timebtwExecution--;
    }

    // Pemberian nilai pada struct
    temp->judul = jdl;
    temp->developer = dev;
    temp->playtime = hrs;
}

// fungsi edit node akhir
void EditAkhirSingleLinkedList(string jdl, string dev, int hrs)
{
    tail->judul = jdl;
    tail->developer = dev;
    tail->playtime = hrs;
}

// fungsi print
void printSingleLinkedList()
{
    cur = head;
    while (cur != NULL)
    {
        cout << endl;
        cout << "Judul Game : " << cur->judul << endl;
        cout << "Developer Game : " << cur->developer << endl;
        cout << "Playtime : " << cur->playtime << " hours" << endl;

        // Mengetahui alamat berikutnya
        cout << "Ini isi dari next " << cur->next << endl;

        cur = cur->next;
    }
}
int main(int argc, char const *argv[])
{
    system("color b");

    intro();

    cout << "Pembuatan Single Linked List" << endl;
    createSingleLinkedList("Darksouls", "FromSoft", 100);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Penambahan di awal Single Linked List" << endl;
    TambahAwalSingleLinkedList("Elder Scroll V : Skyrim", "Bethesda Game Studios", 50);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Penambahan di akhir Single Linked List" << endl;
    TambahAkhirSingleLinkedList("Persona 4 Golden", "Atlus", 150);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Penambahan di tengah Single Linked List" << endl;
    TambahTengahSingleLinkedList("Persona 5 Royal", "Atlus", 50, 2);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Hapus di awal Single Linked List" << endl;
    HapusAwalSingleLinkedList();
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Hapus di akhir Single Linked List" << endl;
    HapusAkhirSingleLinkedList();
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Tambah di awal lagi" << endl;
    TambahAwalSingleLinkedList("Genshin Impact", "Hoyoverse", 60);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Edit awal Single Linked List" << endl;
    EditAwalSingleLinkedList("osu", "Dean Herbert", 240);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Edit akhir Single Linked List" << endl;
    EditAkhirSingleLinkedList("Sekiro: Shadow Die Twice", "FromSoftware", 60);
    printSingleLinkedList();
    cout << "==========\n\n";

    cout << "Edit Tengah Single Linked List" << endl;
    EditTengahSingleLinkedList("Muse Dash", "Pero Pero Games", 40, 2);
    printSingleLinkedList();
    cout << "==========\n\n";
    system("pause");
}
