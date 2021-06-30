/*Program : Rerata.c
* Deskripsi : mencari rata-rata dari suatu kumpulan data
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

float rerata(int bilangan[255], int limit){
	int temp=0;
	float result;
	int i;
	
	for(i=0;i<limit;i++){
		temp+=bilangan[i];
	}
	
	result=(float)temp/limit;
	
	return result;
}

int main ()
{
	int n,i;
	int angka[255];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&angka[i]);
	}
	
	printf("%.2f",rerata(angka,n));
	
	return 0;
}
