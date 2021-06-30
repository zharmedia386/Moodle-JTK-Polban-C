/*Program : Pola3.c
* Deskripsi : membuat pola seperti pada contoh input dan contoh output
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>

int main(){
    int i,n,j,k,counter=1,hasil=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    	for(j=n;j>=counter;j--){
    		hasil=hasil+1;
    		printf("%d",hasil);
    		if(j!=counter){
    			printf(" ");
			}
		}
		counter++;
		printf("\n");
	}
    return 0;
}
