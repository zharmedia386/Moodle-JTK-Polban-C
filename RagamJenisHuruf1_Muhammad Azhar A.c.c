/*Program : Ragam Jenis Huruf
* Deskripsi : Ragam Jenis Huruf
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 10 Januari 2020
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int i;
	char teks[28];
	int hasil=0;
	int sama=0; 
	int m;
	int total;
	
	scanf("%s", teks);
	if(strlen(teks)>0 && strlen(teks)<=28){
		for(i=0; i<=strlen(teks); i++){
			if(teks[i]>='a' && teks[i]<='z'){
				hasil=hasil+1;
			}else if(teks[i]>='A' && teks[i]<='Z'){
				hasil=hasil+1;}
		}
		
		for(i=0; i<=strlen(teks); i++){
			for(m=0; m<=strlen(teks); m++){
				if(toupper(teks[i])==teks[m] || tolower(teks[i])==teks[m] ){
					sama=sama+1;
				}
			}
		}
	printf("%d\n", sama);
	sama=(sama-strlen(teks)) / 2;
	total=hasil-sama; 
	printf("%d\n", total);
	}
	return 0;
}
