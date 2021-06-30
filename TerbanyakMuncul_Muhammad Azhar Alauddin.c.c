/*Program : TerbanyakMuncul.c
* Deskripsi : mencari modus
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int terbanyakMuncul(int data[],int n){
	
	int i; 
	int biggest = 0;
	int maxindex = data[0];
	
	for (i=1; i<100; i++) {	
		if (data[i] > maxindex) {
			maxindex = data [i];
			biggest = i;
		}
	}
	
	return biggest;	
}

int main ()
{
	int n,i,x;
	int angka[100] = {};
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		angka[x]++;
	}
	
	printf("%d",terbanyakMuncul(angka,n));
	
	return 0;
}
