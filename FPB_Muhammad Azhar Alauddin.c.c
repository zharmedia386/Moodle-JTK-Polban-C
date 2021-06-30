/*Program : FPB.c
* Deskripsi : Mententukan Faktor Persekutuan Besar
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 30 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int A,B,GCD;
	int i,j;
	
	scanf("%d %d",&A,&B);
	
	if(A>B){
		for(i=1;i<=A;i++){
			if((A%i==0) && (B%i==0)){
				GCD=i;
			}
		}
	}
	else if(B>A){
		for(i=1;i<=B;i++){
			if((A%i==0) && (B%i==0)){
				GCD=i;
			}
		}
	}
	printf("%d",GCD);
	return 0;
}
