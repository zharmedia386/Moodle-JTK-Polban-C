/*Program : Pola2.c
* Deskripsi : membuat pola seperti pada contoh input dan contoh output
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>
#include<math.h>

int main(){
    int i,j,counter=1,k=0,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	for(j=0;j<counter;j++){
    		if(j==0){
    			k=pow(2,i);
    			printf("%d",k);
    			if(counter!=1){
    				printf(" ");
				}
			}
			else{
				k=k/2;
				printf("%d",k);
				if(j!=counter-1){
					printf(" ");
				}
			}
		}
		counter++;
		printf("\n");
	}
    return 0;
}
