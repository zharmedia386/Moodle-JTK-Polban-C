/*Program : MenyusunBuku.c
* Deskripsi : menunjukkan banyaknya cara untuk menyimpan buku baru nya Anjani
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

int permutasi(int a, int b){
	int nCara;
	
	nCara = a/b;
	
	return nCara;
}

int main ()
{
	int M, N, O;
	int i;
	int a = 1;
	int b = 1;
	
	
	// Rumus Permutasi
	// Banyaknya cara = M! / (M-N)!
	// M-N = O
	// M! = a, (M-N)! = b
	
	scanf("%d %d", &N, &M);
	O = M - N;
	
	for(i = 1 ; i <= M ; i++){
		a *= i;
	}
	
	for(i = 1 ; i <= O ; i++){
		b *= i;
	}
	
	printf("%d",permutasi(a,b));
	
	return 0;
}
