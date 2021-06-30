/*Program : Count Prima.c
* Deskripsi : Menentukan Menghitung Prima
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 10 Januari 2020
*/

#include<stdio.h>

int main(){
    /* Kamus Data */
    int i,n,counter1=0,counter2=0;
    int bilangan[255];
    
    /* Algoritma */
    for(n=0;n<10;n++){
    	scanf("%d",&bilangan[n]);
		for(i=2;i<bilangan[n];i++){
			if(bilangan[n]==2){
			counter2=counter2+1;
			}
			else if(bilangan[n]%i==0){
			counter1=counter1+1;
			}
		}
		if(counter1==0){
		counter2=counter2+1;
		}
	}
	printf("%d",counter2);
    return 0;
}
