/*Program : Prima.c
* Deskripsi : Menentukan Prima
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 7 Januari 2020
*/

#include<stdio.h>

int main(){
    /* Kamus Data */
    int i,n,bilangan,counter=0;
    
    /* Algoritma */
    scanf("%d",&bilangan);
	for(i=2;i<bilangan;i++){
		if(bilangan%i==0){
			counter+=1;
		}
	}
	if(counter==0){
		printf("prima");
	}
	else {
		printf("bukan prima");
	}
    return 0;
}
