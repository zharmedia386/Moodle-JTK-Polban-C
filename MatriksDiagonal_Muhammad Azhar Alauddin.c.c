/*Program : MatriksDiagonal.c
* Deskripsi : memeriksa apakah sebuah matriks M merupakan matriks diagonal atau bukan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 16 Januari 2020
*/

#include<stdio.h>

int main(){
    int matriks[3][3];
    int i,n,counter=0;
    
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&matriks[i][n]);
		}
	}
	
	//Pertimbangan diagonal atau tidak
	if((matriks[0][0]!=0) && (matriks[1][1]!=0) && (matriks[2][2]!=0) && (matriks[0][1]==0) && (matriks[1][0]==0) && (matriks[1][2]==0) && (matriks[2][1]==0)){
		printf("matriks diagonal");
	}
	else if((matriks[0][2]!=0) && (matriks[1][1]!=0) && (matriks[2][0]!=0) && (matriks[0][1]==0) && (matriks[1][0]==0) && (matriks[1][2]==0) && (matriks[2][1]==0)){
		printf("matriks diagonal");
	}
	else {
		printf("bukan matriks diagonal");
	}
    return 0;
}
