/*Program : Kue
* Deskripsi : Komposisi Kue
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include <stdio.h>

int main ()
{
	char kue1[255];
	char kue2[255];
	int i,n,nkue=8;
	float persentase,syarat_sama,counter_sama=0;
	scanf("%f\n",&syarat_sama);
	scanf("%[^\n]%*c",kue1);
	scanf("%[^\n]%*c",kue2);
	
	for (i=0; kue1[i] != 0; i++){
		for (n=0; kue2[n] != 0; n++){
			if ((kue1 [i] == kue2 [n]) && (kue1[i] != ' ') && (kue2 [n] != ' ')) {
				counter_sama++;
				kue2[n] = ' ';
				break;
			}
		}
	}
	persentase=(float)((counter_sama/nkue)*100);
	if(persentase>=syarat_sama){
		printf("sama");
	}
	else {
		printf("tidak sama");
	}
	return 0;
}
