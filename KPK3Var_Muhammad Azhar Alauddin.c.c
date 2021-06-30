/*Program : KPK3Var.c
* Deskripsi : Mententukan Kelipatan Persekutuan Terkecil dari 3 Variabel
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int a,b,c,LCM;
	int i,j;
	
	scanf("%d %d %d",&a,&b,&c);
	if (a > b) {
 	 i = a;
 	 a = b;
 	 b = i;
 	}
 	if(c > b){
 	 i = c;
 	 c = b;
 	 b = i;
	}
	
 	for (i = b; i % a != 0 || i % b != 0 || i % c != 0 ; i++);
 	LCM=i;
 	printf("%d",LCM);
 	
	return 0;
}
