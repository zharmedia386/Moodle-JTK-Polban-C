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
	int i,n,nkue=8,len1,len2;
	float persentase,syarat_sama,counter_sama;
	
	scanf("%f\n",&syarat_sama);
	scanf("%[^\n]%*c",kue1);
	scanf("%[^\n]%*c",kue2);
	
	for(len1=0;kue1[len1];len1++);
	for(len2=0;kue2[len2];len2++);
	
	for(i=0;i<len1;i++){
		for(n=0;n<len2;n++){
			if((kue1[i]==kue2[n]) && (kue2[n]!=' ') && (kue1[n]!=' ')){
				counter_sama+=1;
				break;
			}
		}
	}
	persentase=((counter_sama/nkue)*100);
	if(persentase>=syarat_sama){
		printf("sama");
	}
	else {
		printf("tidak sama");
	}
	return 0;
}
