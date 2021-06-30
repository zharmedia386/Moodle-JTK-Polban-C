/*Program : IPK3MHS.c
* Deskripsi : menghitung IPK dari 3 mahasiswa
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 2 Februari 2021
*/

#include <stdio.h>

float nilai(char c){
	if(c == 'A'){
		return 4;
	}
	else if(c == 'B'){
		return 3;
	}
	else if(c == 'C'){
		return 2;
	}
	else if(c == 'D'){
		return 1;
	}
	else if(c == 'E'){
		return 0;
	}
}

float ipkCount (char ddp, char md, char mt, char kog){
	float total;
	int sks = 12;
	
	total = (nilai(ddp) * 4) + (nilai(md) * 3) + (nilai(mt) * 3) + (nilai(kog) * 2);
	total = total / sks;
	
	return total;
}

int main ()
{
	char mahasiswa[3][100] = {};
	float ipk[3];
	int i;
	char ddp, md, mt, kog;
	
	for(i=0;i<3;i++){
		scanf("%[^\n]%*c",mahasiswa[i]);
		scanf("%c %c %c %c",&ddp, &md, &mt, &kog);
		if(i < 2){
			scanf("\n");
		}
		ipk[i] = ipkCount(ddp, md, mt, kog);
	}
	
	for(i=0;i<3;i++){
		printf("%s %.2f\n",mahasiswa[i],ipk[i]);
	}
	
	return 0;
}
