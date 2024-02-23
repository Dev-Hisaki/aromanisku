#include <iostream>
using namespace std;

struct tanggal{
    int hari;
    int bulan;
    int tahun;
};

struct alamat
{
    char jalan[30];
    char kota[20];
};

struct
{
    char nama[40];
    struct tanggal tgl_masuk;
    struct alamat rumah;
    float gaji;
}pegawai = {"Muhamad Haidar A", 21, 9, 2002, "Jln. Pesona Pamoyanan", "Kab. Sukabumi", 4000000};

int main(){
    printf("Nama Pegawai    : %s", pegawai.nama);
    printf("\nTanggal Masuk : %d-%d-%d", pegawai.tgl_masuk.hari, pegawai.tgl_masuk.bulan, pegawai.tgl_masuk.tahun);
    printf("\nAlamat Rumah  : %s, %s", pegawai.rumah.jalan, pegawai.rumah.kota);
    printf("\nGaji Pokok    : %5.2f", pegawai.gaji);

    return 0;
}