/*Program : PerkalianMatriks.c
* Deskripsi : Mengalikan Kedua Matriks
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2020
*/

#include<stdio.h>

int main(){
    int baris1, kolom1, baris2, kolom2;
    int i,n,j=0,temp=0;
    
    //Menginput ordo Array1 dan isinya
    scanf("%d %d",&baris1,&kolom1);
    int matriks1[baris1][kolom1]; //Inisialisasi matriks1
    for(i=0;i<baris1;i++){
    	for(n=0;n<kolom1;n++){
    		scanf("%d",&matriks1[i][n]);
		}
	}
	
	//Menginput ordo Array2 dan isinya
    scanf("%d %d",&baris2,&kolom2);
    int matriks2[baris2][kolom2]; //Inisialisasi matriks2
    for(i=0;i<baris2;i++){
    	for(n=0;n<kolom2;n++){
    		scanf("%d",&matriks2[i][n]);
		}
	}
	
	//Inisialisasi matriks3 (matriks hasil perkalian)
	int matriks3[baris1][kolom2];
	
	// Rumus Perkalian matriks
	for(i=0;i<baris1;i++){
    	for(j=0;j<kolom2;j++){
    		for(n=0;n<baris2;n++){
    			temp = temp+matriks1[i][n]*matriks2[n][j];
			}
			matriks3[i][j]=temp;
			printf("%d",matriks3[i][j]);
			if(j<kolom2-1){ // Jarak spasi antar kolom
				printf(" ");
			}
			temp=0;
		}
	// Jarak enter untuk matriks 3 perbarisnya
	printf("\n");
	}
    return 0;
}
// Catatan :
// for pertama : perhitungan pada perpindahan baris dari matriks1
// for kedua : perhitungan pada perpindahan kolom dari matriks2
// for ketiga : perhitungan pada perpindahan baris dari matriks2
