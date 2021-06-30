/*Program : Terbilang.c
* Deskripsi : mengeja angka dalam bentuk terbilangnya
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

void terbilang(int x);

int main()
{
	int number;

	scanf("%d", &number);
	terbilang(number);

	printf("\n");

	return 0;
}

void terbilang(int x)
{
	if (x == 1)
	{
		printf("satu ");
	}
	else if (x == 2)
	{
		printf("dua ");
	}
	else if (x == 3)
	{
		printf("tiga ");
	}
	else if (x == 4)
	{
		printf("empat ");
	}
	else if (x == 5)
	{
		printf("lima ");
	}
	else if (x == 6)
	{
		printf("enam ");
	}
	else if (x == 7)
	{
		printf("tujuh ");
	}
	else if (x == 8)
	{
		printf("delapan ");
	}
	else if (x == 9)
	{
		printf("sembilan ");
	}
	else if (x == 10)
	{
		printf("sepuluh ");
	}
	else if (x == 11)
	{
		printf("sebelas ");
	}
	else if (x >= 12 && x <= 19)
	{
		terbilang(x % 10);
		printf("belas ");
	}
	else if (x >= 20 && x <= 99)
	{
		terbilang(x / 10);
		printf("puluh ");
		terbilang(x % 10);
	}
	else if (x >= 100 && x <= 199)
	{
		printf("seratus ");
		terbilang(x - 100);
	}
	else if (x >= 200 && x <= 999)
	{
		terbilang(x / 100);
		printf("ratus ");
		terbilang(x % 100);
	}
	else if (x >= 1000 && x <= 1999)
	{
		printf("seribu ");
		terbilang(x - 1000);
	}
	else if (x >= 2000 && x <= 999999)
	{
		terbilang(x / 1000);
		printf("ribu ");
		terbilang(x % 1000);
	}
	else if (x >= 1000000)
	{
		terbilang(x / 1000000);
		printf("juta ");
		terbilang(x % 1000000);
	}
}
