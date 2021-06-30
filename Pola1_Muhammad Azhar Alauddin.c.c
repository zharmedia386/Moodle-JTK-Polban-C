/*Program : Pola1.c
* Deskripsi : membuat pola seperti pada contoh input dan contoh output
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>

int main(){
    int i,j,n,counter;
    
    scanf("%d",&n);
    counter=1;
    for(i=0;i<n;i++){
    	for(j=0;j<counter;j++){
    		printf("*");
    		if(j!=counter-1){
    			printf(" ");
			}
		}
		counter++;
		printf("\n");
	}
    return 0;
}
