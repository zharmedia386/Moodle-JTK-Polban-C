/*Program : MatriksJumlah.c
* Deskripsi : menghitung hasil penjumlahan matriks A dan matriks B
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2020
*/

#include<stdio.h>

int main(){
    int Array1[3][3],Array2[3][3];
    int Array3[3][3];
    int i,n;
    
    // Input Array1 ordo 3x3
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&Array1[i][n]);
		}
	}
	
	// Input Array2 ordo 3x3
	for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&Array2[i][n]);
		}
	}
	
	//  Menjumlahkan Array1 dan Array2 ke Array3 ordo 3x3
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			Array3[i][n] = Array1[i][n] + Array2[i][n];
		}
	}
	
	// Menampilkan output terakhir dari Array3 ordo 3x3 (Hasil Penjumlahan)
	for(i=0;i<3;i++){
		for(n=0;n<3;n++){
			printf("%d",Array3[i][n]);
			if(n<2)
			printf(" ");
		}
		if(i<2)
		printf("\n");
	}
    return 0;
}
