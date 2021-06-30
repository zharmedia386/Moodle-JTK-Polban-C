/*Program : Pola4.c
* Deskripsi : membuat pola seperti pada contoh input dan contoh output
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>

int main(){
    int i=0,j=0,pembeda=1,ganjil=1,genap1=1,genap2=0;
    int m=0,n=0;
    
    scanf("%d %d",&m,&n);
    pembeda=m*2;
    for(i=1;i<=m;i++){
    	ganjil=i;
    	for(j=1;j<=n;j++){
    		if(j%2!=0){ //urutan ganjil
    			if(j==1){ //baris pertama dan ganjil pertama
    				printf("%d",i);
    				if(j!=n){
						printf(" ");
					}
				}
				else{
					ganjil=ganjil+pembeda;
					printf("%d",ganjil);
					if(j!=n){
						printf(" ");
					}
				}
			}
			else if(j%2==0){ //urutan genap
				if((j==2) && (i==1)){ //baris pertama dan genap pertama
					genap2=pembeda;
					genap1=genap2;
					printf("%d",genap2);
					if(j!=n){
						printf(" ");
					}
				}
				else if(j==2){
					genap2=genap2-1;
					genap1=genap2;
					printf("%d",genap2);
					if(j!=n){
						printf(" ");
					}
				}
				else{
					genap1=genap1+pembeda;
					printf("%d",genap1);
					if(j!=n){
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
    return 0;
}
