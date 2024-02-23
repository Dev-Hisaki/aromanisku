#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;		// variabel bilangan ke 1
	int b = 1;		// variabel bilangan ke 2
	int c;			// variabel hasil jumlah dari dua bilangan sebelumnya
	int n;
	int jumlah = 1; // jumlah awal -> bilangan ke 1 + bilangan ke 2 (0+1=1)

	printf("Masukan nilai n: ");
	// user diminta memasukan banyaknya bilangan yang diinginkan dalam baris
	scanf("%d", &n); // user memberi masukan dalam bentuk integer
	printf("\n");
	printf("%d ", a); // mencetak bilangan awal (ke 1)
	printf("%d ", b); // mencetak bilangan ke 2
	for (int i = 0; i < n - 2; i++)
	{ // pengulangan
		c = a + b;
		// varibel c, hasil dari penjumlahan dua bilangan sebelumnya(a+b)
		printf("%d ", c);
		// mencetak hasil jumlah dari dua bilangan sebelumnya [c]
		jumlah = jumlah + c;
		// penjumlahan menghitung jumlah keseluruhan bilangan dalam deret
		a = b;
		// variabel a berubah nilai menjadi nilai pada variabel b
		b = c;
		// variabel b berubah nilai menjadi nilai pada variabel c
	}

	printf("\n\njumlah deret adalah %d", jumlah); // mencetak hasil penjumlahan keseluruhan bilangan dalam deret

	return 0;
}