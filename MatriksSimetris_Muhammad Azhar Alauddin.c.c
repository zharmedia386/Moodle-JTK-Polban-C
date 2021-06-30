/*Program : MatriksSimetris.c
* Deskripsi : memeriksa apakah sebuah matriks M merupakan matriks simetris atau bukan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 16 Januari 2020
*/

#include<stdio.h>

int main(){
    int matriks[3][3];
    int i,n;
    
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&matriks[i][n]);
		}
	}
	
	//Pertimbangan simetris atau tidak
	if((matriks[0][1]==matriks[1][0]) && (matriks[1][2]==matriks[2][1]) && (matriks[2][0]==matriks[0][2])){
		printf("matriks simetris");
	}
	else{
		printf("bukan matriks simetris");
	}
    return 0;
}
