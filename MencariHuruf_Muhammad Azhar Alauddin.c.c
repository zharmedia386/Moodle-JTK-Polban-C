/*Program : Mencari Huruf
* Deskripsi : Memeriksa apakah suatu huruf berada di array X atau tidak
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 9 Desember 2020
*/

#include <stdio.h>
#include <ctype.h>
int main ()
{
	char kalimat[20]={"JTKPolban"};
	char huruf;
	int i,j;
	
	scanf("%c", &huruf);
	
	for(i=0;i<10;i++){
		if ((huruf == tolower(kalimat[i])) || (huruf == toupper(kalimat[i]))){
		j=1;	
		}
	}
	if (j==1){
		printf("ada");
	}
	else {
		printf("tidak ada");
	}
	return 0;
}
