/*Program : JumlahKata.c
* Deskripsi : Menghitung Jumlah Kata
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

int main(){
	char kata[0xFFFF] = {};
	int nKata = 1;
	int i;
	
	scanf("%[^\n]s",kata);
    
    for(i=0;kata[i];i++){
    	if(kata[i] == ' '){
    		nKata++;
		}
	}
	
	printf("%d\n",nKata);
	
	return 0;
}
