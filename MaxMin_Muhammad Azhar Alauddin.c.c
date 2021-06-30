/*Program : Faktorial.c
* Deskripsi : menghitung faktorial dari suatu bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int max(int angka1, int angka2){
	int temp;
	
	if(angka1>angka2){
		temp=angka1;
	}
	else if(angka2>angka1){
		temp=angka2;
	}
	
	return temp;
}

int min(int angka1, int angka2){
	int temp;
	
	if(angka1<angka2){
		temp=angka1;
	}
	else if(angka2<angka1){
		temp=angka2;
	}
	
	return temp;
}

int main ()
{
	int number1,number2;
	
	scanf("%d %d",&number1, &number2);
	
	printf("%d %d",max(number1,number2), min(number1,number2));
	
	return 0;
}
