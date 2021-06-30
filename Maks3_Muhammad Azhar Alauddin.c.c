/*Program : Maksimal Tiga Bilangan
* Deskripsi : menentukan bilangan terbesar dari tiga bilangan yang dimasukkan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 8 Desember 2020
*/

/*
#include <stdio.h>
int main()
{
	int bilangan1,bilangan2,bilangan3;
	
	scanf ("%d %d %d", &bilangan1, &bilangan2, &bilangan3);
	
	if ((bilangan1>bilangan2)&&(bilangan1>bilangan3))
	{
		printf("%d",bilangan1);
	}
	else if ((bilangan2>bilangan1)&&(bilangan2>bilangan3))
	{
		printf("%d",bilangan2);
	}
	else if ((bilangan3>bilangan1)&&(bilangan3>bilangan2))
	{
		printf("%d",bilangan3);
	}
	return 0;
}
*/
#include <stdio.h>

int main(){
	//Kamus Data
	int maks,i,angka;
	
	//Algoritma
	for(i=0;i<3;i++){
		scanf("%d",&angka);
		if(!i || maks < angka)
			maks = angka;
	}
	printf("%d",maks);
	return 0;
}
