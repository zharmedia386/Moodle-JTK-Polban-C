/*Program : Menghitung Huruf Berlubang
* Deskripsi : MMenghitung Huruf Berlubang
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 8 Januari 2020
*/

#include <stdio.h>
#include <string.h>
int main ()
{
	char kata[255];
	int i,banyaknya_kata,count;
	
	scanf("%[^\n]s",&kata);
	banyaknya_kata=strlen(kata);
	count=0;
	
	for(i=0;i<=banyaknya_kata;i++){
		if((kata[i]=='A') || (kata[i]=='D') || (kata[i]=='O') || (kata[i]=='P') || (kata[i]=='Q') || (kata[i]=='R')) {
			count++;
		}
		else if((kata[i]=='a') || (kata[i]=='d') || (kata[i]=='o') || (kata[i]=='p') || (kata[i]=='q') || (kata[i]=='r')) {
			count++;
		}
		else if((kata[i]=='b') || (kata[i]=='B')){
			count+=2;
		}
	}
	printf("%d",count);
	
	return 0;
}
