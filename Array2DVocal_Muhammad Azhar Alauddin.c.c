/*Program : Array2DVocal.c
* Deskripsi : menampilkan posisi kemunculan huruf vokal yang ada di sebuah array 2 dimensi berordo 3 × 3
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2020
*/

#include<stdio.h>

int main(){
    char matriks[3][3];
    char vokal[15]={'A','I','U','E','O','a','i','u','e','o'};
    int i,n,j,counter=0;
    
    // Menginput huruf dari array ordo 3x3 yang akan dicek apakah vokal atau tidak
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%s",&matriks[i][n]);
		}
	}
   
   // Pengecekan apakah huruf dari array 3x3 tersebut vokal atau tidak
    for(i=0;i<3;i++){ // baris array 3x3
    	for(n=0;n<3;n++){ // kolom array 3x3
    		for(j=0;j<10;j++){ // pengecekan vokal dengan membandingkan vokal[15] dan array 3x3
				if (vokal[j]==matriks[i][n]){
					printf("%c: (%d,%d)\n",vokal[j],i+1,n+1);
				}
				else if(vokal[j] != matriks[i][n]){
					counter++; // penghitung huruf yang bukan vokal dari array 3x3 
				}
			}
		}
	}
	if(counter==90){ // 90 didapat dari 10 jumlah huruf vokal dikali 9 huruf dari array 3x3
		printf("tidak ada huruf vokal"); // bila 90 maka semua huruf dari array 3x3 bukan vokal
	}
    return 0;
}
