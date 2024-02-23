#include <iostream>
using namespace std;

//Warits Riyadi - 2103441

struct chara
{
    string nama, region;
    int usia;

    chara *next;
};

chara *nodeAwal, *nodeBaru, *nodeAkhir, *cur, *del, *baris;

//Deklarasi pertama kali Linked List
void buatChara (string nm, string reg, int old)
{
    nodeAwal = new chara();
    nodeAwal->nama = nm;
    nodeAwal->region = reg;
    nodeAwal->usia = old;
    nodeAwal->next = NULL;
    nodeAkhir = nodeAwal; //Karena hanya tersedia 1 data
}

//Menambahkan data pada awal linkedList
void tambahCharaAwal (string nm, string reg, int old)
{
    nodeBaru = new chara();
    nodeBaru->nama = nm;
    nodeBaru->region = reg;
    nodeBaru->usia = old;
    nodeBaru->next = nodeAwal;
    nodeAwal = nodeBaru; 
}

//Menambahkan data pada baris sesuai input user
void tambahCharaTengah (string nm, string reg, int old, int baris)
{
    nodeBaru = new chara ();
    nodeBaru->nama = nm;
    nodeBaru->region = reg;
    nodeBaru->usia = old;
    cur = nodeAwal; //Current diset ke node Awal
    int index = 1; //Index sebagai penghitung baris yang diinput
    while (index < baris-1) //Saat index kecil dari baris, lakukan looping increment cur
    {
        cur = cur->next; //Memindahkan posisi current, sehingga menunjuk pada baris yang diset user
        index++; //Menghentikan loop
    }
    nodeBaru->next = cur->next; //node selanjutnya current pada fungsi ini akan menjadi selanjutnya node baru
    cur->next = nodeBaru; //Mengubah isi current menjadi data pada node baru

}

//Menambahkan Chara pada akhir data linkedlist
void tambahCharaAkhir (string nm, string reg, int old)
{
    nodeBaru = new chara();
    nodeBaru->nama = nm;
    nodeBaru->region = reg;
    nodeBaru->usia = old;
    nodeAkhir->next = nodeBaru; //mengatur node selanjutnya node akhir adalah node baru
    nodeAkhir = nodeBaru; //mengatur node baru sebagai node akhir terbaru
}

//Menghapus chara di awal data linkedList
void hapusCharaAwal ()
{
    del = nodeAwal;
    nodeAwal = nodeAwal->next;
    delete del;
}

//Menghapus chara di akhir data linkedList
void hapusCharaAkhir ()
{
    del = nodeAkhir; //Set del(delete) sebagai node akhir
    cur = nodeAwal; //Current dimulai dari node awal
    while (cur->next != nodeAkhir) //Ketika next dari cur bukan node akhir, lakukan perulangan
    {
        cur = cur->next; //Melompat node sehingga menemukan node akhir
    }
    nodeAkhir = cur; //Setelah program menemukan cur->next = nodeAkhir, maka set kembali node akhir sebagai cur terakhir
    nodeAkhir->next = NULL; //Set node setelah nodeAkhir sebagai NULL karena sudah di ujung node
    delete del;
}

//Edit data chara pada awal node
void editCharaAwal (string nm, string reg, int old)
{
    nodeAwal->nama = nm;
    nodeAwal->usia = old;
    nodeAwal->region = reg;
}

//Edit data chara pada akhir node
void editCharaAkhir (string nm, string reg, int old)
{
    nodeAkhir->nama = nm;
    nodeAkhir->usia = old;
    nodeAkhir->region = reg;
}

//Edit data chara pada baris node sesuai input user
void editCharaTengah (string nm, string reg, int old, int baris)
{
    cur = nodeAwal;
    int index = 1;
    while (index < baris) //Saat index kecil dari baris, lakukan looping increment cur 
    {
        cur = cur->next; //Memindahkan posisi current, sehingga menunjuk pada baris yang diset user
        index++; //Menghentikan loop
    }
    cur->nama = nm;
    cur->region = reg;
    cur->usia = old;
}

//Fungsi Print linkedList
void printChara ()
{
    cur = nodeAwal;
    while (cur != NULL)
    {
        cout << endl;
        cout << "Nama Character = " << cur->nama << endl;
        cout << "Usia Character = " << cur->usia << endl;
        cout << "Region Character = " << cur->region << endl;
        
        cur = cur->next;
    }
    cout << "============================================" << endl;
}

int main ()
{
    cout << " == Program Operasi Linked List == " << endl;
    buatChara("Ayaka", "Inazuma", 19);
    printChara();
    tambahCharaAwal("Cyno", "Sumeru", 20);
    printChara();
    tambahCharaAkhir("Zhongli", "Liyue", 15000);
    printChara();
    tambahCharaTengah("Raiden Shogun", "Inazuma", 5000, 3);
    printChara();
    hapusCharaAwal();
    printChara();
    hapusCharaAkhir();
    printChara();
    tambahCharaAkhir("Cyno", "Sumeru", 20);
    printChara();
    tambahCharaAwal("Kuda Terbang", "Celestia", 20000);
    printChara();
    editCharaAwal("Anak Ayam", "Indonesia", 1);
    printChara();
    editCharaTengah("Anak Kuda", "Cina", 4, 3);
    printChara();
    editCharaTengah("Kuda Terbang", "Celestia", 20000, 2);
    printChara();
    editCharaAkhir("Anak Sapi", "India", 5);
    printChara();

    return 0;
}