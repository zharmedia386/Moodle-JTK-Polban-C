/*Program : No4.c
* Deskripsi : menghitung banyaknya bilangan antara x dan y yang tidak mengandung akhiran angka 4 (atau -4)
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 24 Januari 2020
*/

#include<stdio.h>

int main(){
    int i,m,n,counter=0;
    
    scanf("%d %d",&m,&n);
    for(i=m+1;i<n;i++){
    	if(i%10==4 ||i%10==6){
    		counter++;
		}
		else if(i==0){
			counter++;
		}
	}
	printf("%d",(n-m)-counter);
    return 0;
}
