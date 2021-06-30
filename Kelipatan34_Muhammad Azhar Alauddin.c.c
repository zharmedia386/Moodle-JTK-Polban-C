/*Program : Kelipatan Tiga dan Empat
* Deskripsi : Menentukan apakah suatu bilangan merupakan kelipatan 3 dan 4 atau tidak.
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include <stdio.h>
int main()
{
	int bilangan;
	int cek;
	
	cek=0;
	scanf("%d", &bilangan);
	
	if((bilangan %3==0) && (bilangan %4==0))
	{
		printf("1",cek);
	} 
	else {
		printf("0",cek);
	}
	return 0;
}
