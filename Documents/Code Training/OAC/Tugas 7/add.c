// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : NA
// Tanggal : 9 September 2014
// Kelompok : 14
// Rombongan : NA
// Nama (NIM) 1 : Muhamad Haidar Al-Farruq (2103995)
// Nama (NIM) 2 : Warits Riyadi (2103441)
// Nama File : add.c
// Deskripsi : Demonstrasi header file
// Menjumlahkan dua bilangan
#include <stdio.h>
#include "add.h"
#define START_VAL 0
int accum = START_VAL;
int sumasu(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}
