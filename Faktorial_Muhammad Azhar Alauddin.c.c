/*Program : Faktorial.c
* Deskripsi : menghitung faktorial dari suatu bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int faktorial(int angka){
	int temp;
	int i;
	
	if(angka==0){
		temp=1;
	}
	else{
		temp=angka;
		for(i=angka-1;i>1;i--){
			temp*=i;
		}
	}
	
	return temp;
}

int main ()
{
	int number1;
	
	scanf("%d",&number1);
	
	printf("%d",faktorial(number1));
	
	return 0;
}
