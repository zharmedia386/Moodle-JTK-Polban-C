/*Program : DelegasiGemastik.c
* Deskripsi : Memilih Delegasi Gemastik
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

int kombinasi (int a, int b, int c){
	int nCara;
	int penyebut;
	
	penyebut = b * c;
	
	nCara = a / penyebut;
	
	return nCara;
}

int main ()
{
	int M, N, O;
	int i;
	int a = 1;
	int b = 1;
	int c = 1;
	
	
	// Rumus Kombinasi
	// Banyaknya cara = M! / N! (M-N)!
	// M-N = O
	// M! = a, N! = b, (M-N)! = c
	
	scanf("%d %d", &M, &N);
	O = (M - N);
	
	for(i = 1 ; i <= M ; i ++){
		a = a * i;
	}
	
	for(i = 1 ; i <= N ; i++){
		b = b * i;
	}
	
	for(i = 1 ; i <= O ; i++){
		c = c * i;
	}
	
	printf("%d", kombinasi(a, b, c));
	
	return 0;
}
