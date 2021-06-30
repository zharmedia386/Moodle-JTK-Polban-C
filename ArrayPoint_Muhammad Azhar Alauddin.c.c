/*Program : ArrayPoint.c
* Deskripsi : memeriksa apakah array M dan N sama
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2021
*/

#include<stdio.h>
	typedef struct{
		int x;
		int y;
	}Point;
	int main(){
		int i,n=5,counter=0;
		Point M[255];
		Point N[255];
		
		for(i=0;i<n;i++){
			scanf("%d %d",&M[i].x,&M[i].y);
		}
		for(i=0;i<n;i++){
			scanf("%d %d",&N[i].x,&N[i].y);
		}
		for(i=0;i<n;i++){
			if((M[i].x == N[i].x) && (M[i].y == N[i].y)){
				counter++;
			}
		}
		if(counter==5){
			printf("sama");
		}
		else if(counter<5){
			printf("tidak sama");
		}
    return 0;
}
