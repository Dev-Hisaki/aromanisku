// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : NA
// Tanggal : 9 September 2014
// Kelompok : 14
// Rombongan : NA
// Nama (NIM) 1 : Muhamad Haidar Al-Farruq (13211007)
// Nama (NIM) 2 : Warits Riyadi (13211133)
// Nama File : code.c
// Deskripsi : Demonstrasi proses kompilasi C
// Menjumlahkan deret bilangan sebanyak N_LOOP
#define N_LOOP 500
int main(void)
{
    int indeks;
    int accumulator;
    indeks = 0;
    accumulator = 0;
    while (indeks < N_LOOP)
    {
        accumulator = accumulator + indeks;
        indeks = indeks + 1;
    }
    return accumulator;
}