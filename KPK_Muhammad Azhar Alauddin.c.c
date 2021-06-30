/*Program : KPK.c
* Deskripsi : Mententukan Kelipatan Persekutuan Terkecil
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int a,b,LCM;
	int i,j;
	
	scanf("%d %d",&a,&b);
	if (a > b) {
 	 i = a;
 	 a = b;
 	 b = i;
 	}
 	for (i = b; i % a != 0 || i % b != 0; i++);
 	LCM=i;
 	printf("%d",LCM);
	return 0;
}
