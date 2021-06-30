/*Program : Median
* Deskripsi : Mencari median
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int i,n;
	float array [255],test;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&array[i]);
	}
	if(n%2!=0){
		printf("%.1f",array[((n+1)/2)-1]);
	}
	else if(n%2==0){
		test=(((array[(n/2)-1])+(array[(n/2)]))/2.0);
		printf("%.1f",test);
	}
	return 0;
}
