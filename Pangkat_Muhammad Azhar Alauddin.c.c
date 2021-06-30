/*Program : Pangkat.c
* Deskripsi : menghitung nilai pangkat dengan menggunakan konsep modular untuk menghitungnya
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>
#include <math.h>

int hitungPangkat(int angka1, int angka2){
	int temp;
	
	temp=pow(angka1,angka2);
	
	return temp;
}

int main ()
{
	int number1, number2;
	
	scanf("%d %d",&number1,&number2);
	
	printf("%d",hitungPangkat(number1,number2));
	
	return 0;
}
