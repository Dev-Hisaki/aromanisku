#include <iostream>
using namespace std;

struct TTL{
    int tanggal;
    int bulan;
    int tahun;
};

struct {
    char nama[100];
    struct TTL kelahiran;
    int NIM;
    char prodi[100];
}Haidar = {"Muhamad Haidar Al-Farruq", 21, 9, 2002, 2103995, "Teknik Komputer"};

struct
{
    char merk[20];
    int harga;
    int VRAM;
}AMD = {"AMD", 10000000, 8},
NVIDIA = {"NVIDIA", 8000000, 4},
GIGABYTE = {"GIGABYTE", 9000000, 4},
ZOTAC = {"ZOTAC", 6000000, 4};


int intro(){
    printf("------------------------------------------");
    printf("\nNama         : %s", Haidar.nama);
    printf("\nTanggal Lahir : %d-%d-%d", Haidar.kelahiran.tanggal, Haidar.kelahiran.bulan, Haidar.kelahiran.tahun);
    printf("\nNIM          : %d", Haidar.NIM);
    printf("\nProgram Studi  %s", Haidar.prodi);
    printf("\nContoh Program Dengan struct");
    printf("\n------------------------------------------");

    return 0;
}

int VGA(){
    printf("\nMerk  : %s", AMD.merk);
    printf("\nVRAM  : %d GB", AMD.VRAM);
    printf("\nHarga : Rp.%d\n", AMD.harga);

    printf("\nMerk  : %s", NVIDIA.merk);
    printf("\nVRAM  : %d GB", NVIDIA.VRAM);
    printf("\nHarga : Rp.%d\n", NVIDIA.harga);

    printf("\nMerk  : %s", GIGABYTE.merk);
    printf("\nVRAM  : %d GB", GIGABYTE.VRAM);
    printf("\nHarga : Rp.%d\n", GIGABYTE.harga);

    printf("\nMerk  : %s", ZOTAC.merk);
    printf("\nVRAM  : %d GB", ZOTAC.VRAM);
    printf("\nHarga : Rp.%d", ZOTAC.harga);

    return 0;
}

int main(){
    intro();
    cout << "\nList Harga VGA (mereun)" << endl;
    VGA();

    return 0;
}