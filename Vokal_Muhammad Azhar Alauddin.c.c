/*Program : Memeriksa Huruf Vokal
* Deskripsi : Menentukan suatu input itu huruf vokal atau bukan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 9 Desember 2020
*/

#include <stdio.h>
int main()
{
	char vokal [12] ={'A','a','I','i','U','u','E','e','O','o'};
	char huruf;
	int i;
	
	scanf("%c", &huruf);
	for(i=0;i<10;i++){
		if (vokal[i]==huruf){
			printf("true");
			break;
		}
	}
	if(i==10) {
		printf("false");
	}
	return 0;
}
