/*Program : FPB.c
* Deskripsi : Mententukan Faktor Persekutuan Besar
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 30 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int A,B,C,GCD;
	int i;
	
	scanf("%d %d %d",&A,&B,&C);
	
	if((A>=1) && (A<=500 && (B>=1) && (B<=500) && (C>=1) && (C<=500))){
		if((A>=B) && (A>=C)){
			for(i=1;i<A;i++){
				if((A%i==0) && (B%i==0) && (C%i==0)){
					GCD = i;
				}
			}
		}
		else if((B>=A) && (B>=C)){
			for(i=1;i<B;i++){
				if((A%i==0) && (B%i==0) && (C%i==0)){
					GCD = i;
				}
			}
		}
		else if((C>=A) && (C>=B)){
			for(i=1;i<C;i++){
				if((A%i==0) && (B%i==0) && (C%i==0)){
					GCD = i;
				}
			}
		}
		else if((A==B) && (B==A)){
			GCD=1;
		}
	}
	
	printf("%d",GCD);
	return 0;
}
