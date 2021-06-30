/*Program : MenukarDuaAngka.c
* Deskripsi : menukar nilai dari dua angka pada suatu variabel
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

void swapValue(int *value1, int *value2){
	int temp;
	temp=*value1;
	*value1=*value2;
	*value2=temp;
}

int main ()
{
	int number1,number2;
	
	scanf("%d %d",&number1,&number2);
	
	swapValue(&number1,&number2);
	
	printf("%d %d",number1,number2);
	return 0;
}
