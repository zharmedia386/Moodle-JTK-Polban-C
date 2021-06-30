/*Program : KueLagi.c
* Deskripsi : Komposisi Kue
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char*kue1[255];
	char*kue2[255];
	int i,n,nkue1,nkue2;
	float persentase,syarat_sama,counter_sama=0;
	
	scanf("%f\n",&syarat_sama); // Syarat sama
	
	scanf("%d",&nkue1); // Input Bahan Kue K
	for(i=0;i<nkue1;i++){
		scanf("%s",&kue1[i]);
	}
	
	scanf("%d",&nkue2); // Input Bahan Kue L
	for(i=0;i<nkue2;i++){
		scanf("%s",&kue2[i]);
	}
	
	for(i=0;i<nkue1;i++){ // Membandingkan Kue K dan Kue L
		for(n=i;n<nkue2;n++){
			if(kue1[i]==kue2[n]){
				counter_sama+=1;
				break;
			}
		}
	}
	
	persentase=(float)((counter_sama/nkue2)*100); // Pembanding Syarat sama
	if(persentase>=syarat_sama){ 
		printf("sama");
	}
	else {
		printf("tidak sama");
	}
	return 0;
}
