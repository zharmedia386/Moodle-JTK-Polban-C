/*Program : Matriks0.c
* Deskripsi : memeriksa apakah sebuah matriks M merupakan matriks nol atau bukan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 16 Januari 2020
*/

#include<stdio.h>

int main(){
    int matriks[3][3];
    int i,n,counter=0;
    
    //Input matriks ordo 3x3
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&matriks[i][n]);
    		if(matriks[i][n]==0){
    			counter++; //penghitung jumlah 0 pada matriks 
			}
		}
	}
	
	if(counter==9){ // 9 artinya isi dari keseluruhan matriks
		printf("matriks nol");
	}
	else {
		printf("bukan matriks nol");
	}
    return 0;
}
