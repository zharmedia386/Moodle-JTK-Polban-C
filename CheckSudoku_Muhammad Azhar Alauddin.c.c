/*Program : CheckSudoku.c
* Deskripsi : memeriksa apakah sebuah blok yang ada di permainan sudoku valid atau tidak
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 16 Januari 2020
*/

#include<stdio.h>

int main(){
    int matriks[3][3];
    int i,n,j,k,counter=0;
    
    for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		scanf("%d",&matriks[i][n]);
		}
	}

	
	//Pertimbangan valid atau tidak
	for(i=0;i<3;i++){
    	for(n=0;n<3;n++){
    		counter=0;
    		for(j=0;j<3;j++){
    			for(k=0;k<3;k++){
    				if(matriks[i][n]==matriks[j][k]){
    					counter++;
					}
				}
			}
		if(counter>1){
			break;
		}
		}
	}
	
	if(counter==1){
		printf("valid");
	}
	else{
		printf("tidak valid");
	}
    return 0;
}
