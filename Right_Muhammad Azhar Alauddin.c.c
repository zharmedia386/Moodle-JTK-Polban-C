/*Program : Right.c
* Deskripsi : Fungsi Right
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 7 Januari 2020
*/

#include<stdio.h>
#include<string.h>
int main(){
    /* Kamus Data */
    char kata[30];
    int panjangkata, batas, i;
    
    /* Algoritma */

    gets(kata);
    batas= strlen(kata);
    
    if((batas>0) && (batas<=30)){
    	scanf("%d",&panjangkata);
    	if((panjangkata>0) && (panjangkata<=batas)){
    		for(i=batas-panjangkata; i<=batas-1;i++){
		printf("%c",kata[i]);
	}
		}
	}
	
    return 0;
}
