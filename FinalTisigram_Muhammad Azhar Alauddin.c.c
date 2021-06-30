/*Program : FinalTisigram.c
* Deskripsi : menunjukkan nilai peserta yang lolos ke babak final
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

int main ()
{
	int M; // Banyaknya peserta yang lolos ke babak final
	int R; // Jumlah peserta yang diinginkan oleh ketua pelaksana untuk lolos ke babak final Tisigram.
	int i, j;
	int temp;
	
	scanf("%d %d",&M, &R);
	int nilai[M];
	for(i = 0 ; i < M ; i++){
		scanf("%d", &nilai[i]);
	}
	
	// Sorting Descending
	for(i = 0 ; i < M - 1 ; i ++){
		for(j = i + 1 ; j < M ; j++){
			if(nilai[i] < nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < R ; i++){
		printf("%d\n", nilai[i]);
	}
	
	return 0;
}
