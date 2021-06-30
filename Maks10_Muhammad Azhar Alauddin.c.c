/*Program : Maks10.c
* Deskripsi : Maksimal 10 Bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include<stdio.h>

int main(){
    
    int i,n,max=0,angka[255];
    for(i=0;i<10;i++){
    	scanf("%d",&angka[i]);
	}
	for(i=0;i<10;i++){
		if(angka[i]>max){
			max=angka[i];
		}
	}
	printf("%d",max);
    return 0;
}
