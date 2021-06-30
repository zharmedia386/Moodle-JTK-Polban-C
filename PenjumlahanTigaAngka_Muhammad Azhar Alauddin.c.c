/*Program : PenjumlahanTigaAngka.c
* Deskripsi : menentukan jumlah dari tiga angka
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int hitungJumlahTigaAngka(int angka1, int angka2, int angka3){
	int temp;
	temp=angka1+angka2+angka3;
	return temp;
}

int main ()
{
	int number1, number2,number3;
	int jumlah;
	
	scanf("%d %d %d",&number1,&number2,&number3);
	
	jumlah = hitungJumlahTigaAngka(number1,number2,number3);
	printf("%d",jumlah);
	
	return 0;
}
