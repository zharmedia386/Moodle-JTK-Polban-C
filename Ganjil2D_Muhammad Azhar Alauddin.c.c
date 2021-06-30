/*Program : Ganjil2D.c
* Deskripsi : menghitung banyaknya kemunculan bilangan ganjil pada array X
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2020
*/

#include<stdio.h>

int main(){
    int Array[4][4];
    int i,n,counter=0;
    
    for(i=0;i<4;i++){
    	for(n=0;n<4;n++){
    		scanf("%d",&Array[i][n]);
		}
	}
	for(i=0;i<4;i++){
		for(n=0;n<4;n++){
			if(Array[i][n]%2 != 0){
				counter++;
			}
		}
	}
    printf("%d",counter);
    return 0;
}
