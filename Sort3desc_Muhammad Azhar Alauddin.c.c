/*Program : Sort3Desc
* Deskripsi : Mengurutkan Data Integer
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int array[255],i,temp=0,n;
	
	scanf("%d %d %d",&array[0], &array[1], &array[2]);
	
	for(i=0;i<3;i++){
		// dimulai dari n=i agar membandingkan dengan hanya index yg selanjutnya
		for(n=i;n<3;n++){
			if(array[n]>array[i]){ // swapping untuk decending (mengurut dari yg terbesar)
				temp=array[i];
				array[i]=array[n];
				array[n]=temp;
			}
		}
	}
	printf("%d %d %d",array[0],array[1],array[2]);
	return 0;
}
